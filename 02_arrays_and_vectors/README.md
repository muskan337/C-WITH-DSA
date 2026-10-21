# 02 · Arrays and Vectors

Array and `vector` fundamentals, followed by classic interview problems. Most files show a brute-force solution first and then the optimized one.

## Files

| File | Topic | Details |
|------|-------|---------|
| `8.cpp` | Array basics | Declaration and partial initialization, computing size with `sizeof(arr)/sizeof(int)`, passing arrays to functions (arrays decay to pointers, so changes persist), linear search, reversing an array |
| `9.cpp` | Vectors | Creating vectors, `push_back`, `size()` vs `capacity()` (capacity grows as elements are added) |
| `10.cpp` | Subarrays | Printing every subarray with three nested loops; Maximum Subarray Sum with a running sum (O(n²)), then Kadane's algorithm (O(n)): add to the running sum and reset it to 0 when it goes negative |
| `11.cpp` | Two Sum, Majority Element | Two Sum: O(n²) nested loops, then two pointers. Majority Element: three approaches, counting each element (O(n²)), sorting and counting runs (O(n log n)), then Moore's Voting Algorithm |
| `12.cpp` | Product of Array Except Self | O(n²) brute force, then prefix and suffix product arrays for O(n) without division |
| `NEW11.cpp` | Container With Most Water | O(n²) all-pairs, then two pointers moving the shorter wall inward for O(n) |
| `15.cpp` | Power, Stock profit | Best Time to Buy and Sell Stock in a single pass tracking the lowest price so far (active code). A commented-out `pow(x, n)` attempt using binary exponentiation is also kept, but it has a bug (see Notes) |

## Techniques

| Technique | Where | Gain |
|-----------|-------|------|
| Two pointers | `11.cpp`, `NEW11.cpp` | O(n²) to O(n) |
| Prefix/suffix arrays | `12.cpp` | O(n²) to O(n) |
| Moore's voting | `11.cpp` | O(n²) to O(n) time, O(1) space |
| Kadane's algorithm | `10.cpp` | O(n²) to O(n) |
| Single pass tracking | `15.cpp` | O(n²) to O(n) |

## Notes

- Two-pointer Two Sum needs a sorted array; if indices must be returned, store original indices before sorting.
- `15.cpp`: the commented-out power code multiplies `ans` when the exponent bit is even (`% 2 == 0`); binary exponentiation should multiply when the bit is odd, so that attempt gives wrong results. It also returns from `main` for the special cases instead of from a function.
- The Moore's version in `11.cpp` calls `sort` first, which isn't needed for the algorithm and makes it O(n log n); removing it restores O(n).
- The commented-out blocks are the earlier attempts, kept on purpose to show the improvement.
