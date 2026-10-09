# PPS Bitwise Operations & Masking Engine

A Semester 1 Programming for Problem Solving (PPS) C application demonstrating low-level binary manipulation, bitwise arithmetic (`&`, `|`, `^`, `~`), left/right logical shifts (`<<`, `>>`), and bitwise masking.

## PPS Concepts Covered
* **Binary Arithmetic**: Low-level AND, OR, XOR, and NOT operations directly on integer bit patterns.
* **Shift Operators**: Left shift (`<<`) for powers-of-two multiplication and Right shift (`>>`) for integer division.
* **Bit Masking Techniques**:
  * **Setting a Bit**: `num | (1 << pos)`
  * **Clearing a Bit**: `num & ~(1 << pos)`
  * **Toggling a Bit**: `num ^ (1 << pos)`
  * **Checking a Bit**: `(num >> pos) & 1`

## How to Compile & Run
```bash
gcc main.c -o bitwise_ops
./bitwise_ops
