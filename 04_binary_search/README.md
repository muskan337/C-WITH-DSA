# 04 · Binary Search

Standard binary search, then "binary search on the answer": problems where you binary search over a range of possible answers and use a feasibility check.

## Files

| File | Problem | Approach | Complexity |
|------|---------|----------|------------|
| `17.cpp` | Binary search | Iterative and recursive versions; uses `mid = s + (e - s) / 2` to avoid overflow | O(log n) |
| `20.cpp` | Book Allocation | Search between `max(pages)` and `sum(pages)`; `isValid` greedily counts students needed for a given maximum | O(n log(sum)) |
| `22.cpp` | Painter's Partition | Same pattern: search for the minimum time so that `m` painters suffice | O(n log(sum)) |
| `23.cpp` | Aggressive Cows | Sort stalls, search for the largest minimum distance; `isValid` greedily places cows | O(n log n + n log(range)) |

## The pattern

1. Define the range of possible answers (`st` to `end`).
2. Write `isValid(mid)`, a greedy check of whether `mid` works.
3. If `mid` is valid, record it and move toward a better answer; otherwise move the other way.

- **Minimize the maximum** (`20`, `22`): when valid, search left (`end = mid - 1`).
- **Maximize the minimum** (`23`): when valid, search right (`st = mid + 1`).

## Notes

- The data must be monotonic with respect to the answer: if `mid` is feasible, everything easier is too.
- Inputs are passed by value in the helper functions; passing by reference would avoid copies.
