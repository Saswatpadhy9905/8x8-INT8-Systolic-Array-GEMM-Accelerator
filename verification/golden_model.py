#!/usr/bin/env python3
# ============================================================================
# golden_model.py  -  Reference GEMM + test-vector generator
# ----------------------------------------------------------------------------
# This is the "truth" the SystemVerilog testbench checks against. It:
#   1. Generates random int8 matrices A (MxK) and B (KxN).
#   2. Computes C = A @ B in int32 (the exact value the hardware must produce).
#   3. Writes A, B, C to hex files that the testbench loads with $readmemh.
#   4. Flags any int32 saturation (shouldn't happen for sane sizes, but we check).
#
# Usage:
#   python golden_model.py --M 16 --N 16 --K 16 --seed 1 --out ../sim
# ============================================================================
import argparse
import os
import numpy as np

INT8_MIN, INT8_MAX = -128, 127
INT32_MIN, INT32_MAX = -(2**31), 2**31 - 1


def gen_matrix(rows, cols, rng):
    """Random signed int8 matrix."""
    return rng.integers(INT8_MIN, INT8_MAX + 1, size=(rows, cols), dtype=np.int64)


def gemm_int32(a, b):
    """Exact integer GEMM in int64, then check it fits in int32."""
    c = a @ b  # int64 accumulation, no precision loss
    saturated = np.logical_or(c < INT32_MIN, c > INT32_MAX)
    if saturated.any():
        n = int(saturated.sum())
        print(f"[WARN] {n} output element(s) exceed int32 range "
              f"(min={c.min()}, max={c.max()}). Hardware would saturate/wrap.")
    return c


def to_hex(val, width_bits):
    """Two's-complement hex string of given bit width."""
    mask = (1 << width_bits) - 1
    return f"{int(val) & mask:0{width_bits // 4}x}"


def write_hex(path, mat, width_bits):
    """Write a matrix row-major, one element per line, as fixed-width hex."""
    with open(path, "w") as f:
        for v in mat.flatten():
            f.write(to_hex(v, width_bits) + "\n")


def main():
    p = argparse.ArgumentParser(description="GEMM golden model / vector generator")
    p.add_argument("--M", type=int, default=16)
    p.add_argument("--N", type=int, default=16)
    p.add_argument("--K", type=int, default=16)
    p.add_argument("--seed", type=int, default=0)
    p.add_argument("--out", type=str, default="../sim")
    args = p.parse_args()

    rng = np.random.default_rng(args.seed)
    a = gen_matrix(args.M, args.K, rng)
    b = gen_matrix(args.K, args.N, rng)
    c = gemm_int32(a, b)

    os.makedirs(args.out, exist_ok=True)
    write_hex(os.path.join(args.out, "a.hex"), a, 8)
    write_hex(os.path.join(args.out, "b.hex"), b, 8)
    write_hex(os.path.join(args.out, "c_golden.hex"), c, 32)

    # Also drop a tiny meta file the TB can read for dimensions.
    with open(os.path.join(args.out, "dims.txt"), "w") as f:
        f.write(f"{args.M} {args.N} {args.K}\n")

    print(f"[OK] Generated A({args.M}x{args.K}), B({args.K}x{args.N}), "
          f"C({args.M}x{args.N}) seed={args.seed} -> {args.out}")
    print(f"     C range: [{c.min()}, {c.max()}]")


if __name__ == "__main__":
    main()
