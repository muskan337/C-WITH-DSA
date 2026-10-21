# 03 · Pointers

Memory addresses, pointers, and how pointer arithmetic works.

## Files

| File | Topic | Details |
|------|-------|---------|
| `16.cpp` | Pointer basics | Address-of (`&`) and dereference (`*`), pointer to pointer (`int **`), `NULL` pointers, pointer arithmetic (`ptr++` moves by `sizeof(int)` bytes), and why an array name cannot be reassigned like a pointer |

## Key ideas

- A pointer stores an address; `*ptr` reads the value at that address.
- `ptr++` advances by the size of the pointed type, not by one byte.
- An array name behaves like a constant pointer to its first element.
- A pointer to a pointer stores the address of another pointer.

## Why it matters

Pointers are the base for dynamic memory (`new`/`delete`) and linked lists, which you can see in `09_oop` and `10_linked_list`.
