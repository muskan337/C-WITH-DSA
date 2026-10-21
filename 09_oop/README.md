# 09 · Object-Oriented Programming

Classes and objects in C++, built up step by step.

## Files

| File | Topic | Details |
|------|-------|---------|
| `54.cpp` | Classes, constructors, destructors | A `Teacher` class with private and public members, default and parameterized constructors, a custom copy constructor, `this->` pointer, getters and setters (`setSalary`, `getSalary`) for encapsulation, and `static` members. A `Student` class that holds a `double*` and uses `new`, a destructor and a copy constructor |

## Concepts covered

| Concept | Where |
|---------|-------|
| Access specifiers (`private` / `public`) | `Teacher`, account-style classes |
| Encapsulation via getters/setters | `setSalary`, `getSalary` |
| Constructors: default, parameterized, copy | `Teacher`, `Student` |
| `this` pointer | Resolving parameter vs member name clashes |
| Destructor and dynamic memory | `Student` frees its `double*` |
| Shallow vs deep copy | `Student` copy constructor, copying the pointer vs allocating new memory |
| `static` members | Shared across all objects |

## Why the copy constructor matters

With a pointer member, the default copy only copies the address (shallow copy), so two objects share the same memory and deleting one breaks the other. A custom copy constructor that allocates new memory (deep copy) fixes that.
