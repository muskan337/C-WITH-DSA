# 07 · Math and Matrices

Number theory and 2D arrays.

## Files

| File | Topic | Details |
|------|-------|---------|
| `34.cpp` | Primality check | Several attempts from a nested-loop version to the optimized loop `for (i = 2; i*i <= n; i++)`, which runs in O(√n) |
| `35.cpp` | 2D arrays | Declaring and traversing matrices, searching for a key and storing its `(row, col)` in a `vector<pair<int,int>>`, row sums and the maximum row sum, printing a 2D `vector` |

## Key ideas

- If `n` has a factor larger than √n, it must also have one smaller than √n, so checking up to √n is enough.
- Row-major traversal: outer loop over rows, inner loop over columns.
- `INT_MIN` is the usual starting value when searching for a maximum.
