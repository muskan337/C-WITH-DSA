# 05 · Sorting

Comparison sorts implemented from scratch, plus problems built on them.

## Files

| File | Algorithm | Notes |
|------|-----------|-------|
| `24.cpp` | Bubble sort, selection sort | Bubble sort has the early-exit `isSwap` flag, so a sorted array takes O(n). Selection sort picks the minimum each pass |
| `51.cpp` | Merge sort (+ bisection) | Divide, sort halves, merge. Also contains the bisection method for finding a root of a function, which is a numerical-methods exercise and not a sort |
| `52.cpp` | Quick sort | Lomuto-style partition using the last element as pivot, then recursion on both sides |
| `53.cpp` | Count Inversions | Merge sort variant that counts pairs `i < j` with `nums[i] > nums[j]` during the merge step, O(n log n) instead of O(n²) |

## Complexity

| Algorithm | Best | Average | Worst | Space | Stable |
|-----------|------|---------|-------|-------|--------|
| Bubble (with flag) | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Selection | O(n²) | O(n²) | O(n²) | O(1) | No |
| Merge | O(n log n) | O(n log n) | O(n log n) | O(n) | Yes |
| Quick | O(n log n) | O(n log n) | O(n²) | O(log n) | No |

## Notes

- The quick sort pivot is the last element, so an already sorted array hits the O(n²) worst case. A random pivot avoids that.
- `53.cpp` keeps a commented-out brute-force attempt above the merge-sort solution.
