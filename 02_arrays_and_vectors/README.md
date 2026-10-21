# 02 · Arrays and Vectors

Array and `vector` fundamentals, followed by classic interview problems. Most files show a brute-force solution first and then the optimized one.

## Files

| File | Topic | Details |
|------|-------|---------|
| `8.cpp` | Array basics | Declaration and partial initialization, computing size with `sizeof(arr)/sizeof(int)`, passing arrays to functions (arrays decay to pointers, so changes persist), linear search, reversing an array |
| `9.cpp` | Vectors | Creating vectors, `push_back`, `size()` vs `capacity()` (capacity grows as elements are added) |
| `10.cpp` | Subarrays | Printing every subarray with three nested loops; Maximum Subarray Sum, brute force with a running sum |
| `11.cpp` | Two Sum, Majority Element | Two Sum: O(n²) nested loops, then sort plus two pointers. Majority Element: sorting approach, then Moore's Voting Algorithm |
| `12.cpp` | Product of Array Except Self | O(n²) brute force, then prefix and suffix product arrays for O(n) without division |
| `NEW11.cpp` | Container With Most Water | O(n²) all-pairs, then two pointers moving the shorter wall inward for O(n) |
| `15.cpp` | Power, Stock profit | `pow(x, n)` using binary exponentiation (O(log n)); Best Time to Buy and Sell Stock in a single pass tracking the best buy price |

## Techniques

| Technique | Where | Gain |
|-----------|-------|------|
| Two pointers | `11.cpp`, `NEW11.cpp` | O(n²) to O(n) |
| Prefix/suffix arrays | `12.cpp` | O(n²) to O(n) |
| Moore's voting | `11.cpp` | O(n) time, O(1) space |
| Binary exponentiation | `15.cpp` | O(n) to O(log n) |
| Single pass tracking | `15.cpp` | O(n²) to O(n) |

## Notes

- Two-pointer Two Sum needs a sorted array; if indices must be returned, store original indices before sorting.
- The commented-out blocks are the earlier attempts, kept on purpose to show the improvement.
