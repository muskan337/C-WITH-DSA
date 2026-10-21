# 10 · Linked Lists

A singly linked list built from scratch, then classic linked list problems.

## Files

| File | Topic | Details |
|------|-------|---------|
| `57.cpp` | Linked list class | `Node` (data + next) and `List` (head + tail) with `push_front`, `push_back`, `insert` at a position, `pop_front`, `pop_back`, `Search`, and `printLL`. Shows dynamic allocation with `new` versus a local object that is destroyed when the function ends |
| `58.cpp` | Reverse a list | Iterative reversal using `prev`, `curr`, `next` pointers |
| `59.cpp` | Find the middle | Slow and fast pointers: when `fast` reaches the end, `slow` is at the middle |
| `60.cpp` | Cycle detection | Floyd's algorithm: detect a cycle with slow/fast pointers, then find the node where the cycle starts |

## Complexity

| Operation / problem | Time | Space |
|---------------------|------|-------|
| `push_front`, `pop_front` | O(1) | O(1) |
| `push_back` (with tail pointer) | O(1) | O(1) |
| `pop_back` | O(n), needs the second-last node | O(1) |
| Search, insert at position | O(n) | O(1) |
| Reverse | O(n) | O(1) |
| Middle, cycle detection | O(n) | O(1) |

## Notes

- Keeping a `tail` pointer is what makes `push_back` O(1).
- The commented-out first attempt of `findMiddle` in `59.cpp` uses `fast == NULL && ...` as the loop condition, which is the wrong way round; the working version checks `fast != NULL && fast->next != NULL`.
- Remember to `delete` nodes you remove, as `pop_front` does.
