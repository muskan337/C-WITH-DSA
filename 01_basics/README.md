# 01 · C++ Basics

First steps in C++: syntax, data types, loops, functions and number systems. These files are the foundation for everything in the later folders.

## Files

| File | Topic | Details |
|------|-------|---------|
| `2.cpp` | Variables and operators | `int`, `char`, `bool`, `double`; implicit type conversion (`char` to `int` gives the ASCII value); explicit casting `(int)price`; reading input with `cin`; arithmetic operators |
| `3.cpp` | Pattern printing | Nested `for` loops: square grids of numbers and letters, counting patterns (1 2 3 / 4 5 6 / 7 8 9), star triangles, repeated-row patterns, and inverted number triangles |
| `4.cpp` | Functions | Definition vs call, `void` vs returning functions, parameters; sum of 1 to `n`, factorial, digit sum, binomial coefficient `nCr`, Fibonacci using an array |
| `5.cpp` | Number systems | Decimal to binary (repeated division by 2) and binary to decimal (place values as powers of 2) |

## Concepts covered

- Type conversion vs type casting
- Nested loops and how row/column indices control a pattern
- Writing reusable functions instead of putting everything in `main()`
- Base conversion with `%` and `/`

## Notes

- Most files keep earlier attempts as comments, so you will see several versions of the same program in one file.
- Run any file with `g++ -std=c++17 2.cpp -o out && ./out`.
