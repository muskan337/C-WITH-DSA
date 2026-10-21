# 08 · Recursion and Backtracking

Recursion basics, then problems that explore all possibilities and undo choices.

## Files

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `42.cpp` | Recursion basics | Print `n` down to 1, factorial, Fibonacci (base case + recursive case) | Working |
| `47.cpp` | Rat in a Maze | Try Down / Left / Right / Up from each cell; mark the cell as visited by setting it to `-1`, restore it after returning; collect each path as a string of `D`, `L`, `R`, `U` | Working |
| `49.cpp` | Combination Sum | Take / take again / skip recursion over candidates | Work in progress, does not compile yet |
| `50.cpp` | Palindrome Partitioning | Try every prefix; if it is a palindrome, recurse on the rest and backtrack | Work in progress, does not compile yet |

## Backtracking template

```
choose  ->  explore (recurse)  ->  un-choose
```

Add an option to the current path, recurse, then remove it so the next option starts from a clean state. In the maze that is marking and restoring a cell; in partitions it is `push_back` then `pop_back`.

## Known issues to fix

- `49.cpp`: references `i`, `n`, `target` and `camb`, which don't exist (the parameters are `idx`, `tar` and `comb`), and the return type is missing a closing `>`.
- `50.cpp`: the recursive call is written `getAllParts(s.substr(i+1). partitions, ans)` with a `.` where a `,` belongs, and the function is named `getAllPart` but called `getAllParts`.
- `50.cpp` also needs `#include <algorithm>` for `reverse` and `#include <string>`.
