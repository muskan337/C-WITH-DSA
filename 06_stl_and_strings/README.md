# 06 · STL and Strings

Reference-style practice for the C++ Standard Template Library and string handling.

## Files

| File | Topic | Details |
|------|-------|---------|
| `27.cpp` | STL containers | `vector` (push/pop/erase/front/back/iterators), `list`, `deque`, `pair` (including nested pairs and vectors of pairs), `stack`, `queue`, `map` / `unordered_map` (insert, `[]`, `count`, `find`), `set` |
| `29.cpp` | Strings | C-style `char` arrays and the null terminator `'\0'`, `cin.getline`, manual length calculation, `std::string` concatenation, `getline(cin, str)`, in-place reversal with two pointers, `reverse()` from `<algorithm>` |

## Quick reference

| Container | Strength |
|-----------|----------|
| `vector` | Dynamic array, fast random access |
| `list` | Doubly linked, cheap insert/erase in the middle |
| `deque` | Fast push/pop at both ends |
| `stack` / `queue` | LIFO / FIFO adapters |
| `map` | Sorted key-value pairs |
| `unordered_map` | Hash-based key-value, average O(1) lookup |
| `set` | Sorted unique values |

## Notes

- `27.cpp` is mostly commented-out blocks, one per container, used as a revision sheet.
- `vector<pair<int,int>>` with `emplace_back({1, 2})` does not compile because braces can't be deduced; use `emplace_back(1, 2)` or `push_back({1, 2})`.
