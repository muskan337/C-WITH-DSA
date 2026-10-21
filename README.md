# C-WITH-DSA

My C++ and Data Structures & Algorithms practice repo. It starts from C++ basics and moves through arrays, binary search, sorting, recursion/backtracking, OOP and linked lists. Files are numbered in the order I worked through them.

> Many files keep earlier attempts as commented-out blocks above the final solution, so the evolution from brute force to optimized approach is visible in the same file.

## Repository structure

The repo is flat: each `NN.cpp` is a self-contained program with its own `main()`.

| File | Topic | What's inside |
|------|-------|---------------|
| `2.cpp` | C++ basics | Data types, type conversion and casting, `cin`/`cout`, arithmetic operators |
| `3.cpp` | Loops and patterns | Nested-loop pattern printing (number, character and star patterns) |
| `4.cpp` | Functions | Definition and calling, return values, sum of `n`, factorial, Fibonacci, digit sum, binomial coefficient |
| `5.cpp` | Number systems | Decimal to binary and binary to decimal conversion |
| `8.cpp` | Arrays | Declaration, `sizeof` size calculation, passing arrays to functions, linear search, reversing an array |
| `9.cpp` | Vectors | `vector` basics, `push_back`, `size` vs `capacity` |
| `10.cpp` | Subarrays | Printing all subarrays (brute force), maximum subarray sum |
| `11.cpp` | Array problems | Two Sum (brute force and two pointers), Majority Element (Moore's voting) |
| `12.cpp` | Prefix/suffix | Product of Array Except Self (brute force, then prefix and suffix arrays) |
| `NEW11.cpp` | Two pointers | Container With Most Water (brute force, then two pointers) |
| `15.cpp` | Math / arrays | Power function using binary exponentiation, Best Time to Buy and Sell Stock |
| `16.cpp` | Pointers | Address-of, dereferencing, pointer to pointer, `NULL` pointers, pointer arithmetic |
| `17.cpp` | Binary search | Iterative and recursive binary search |
| `20.cpp` | Binary search on answer | Allocate Books / book allocation (minimize the maximum pages) |
| `22.cpp` | Binary search on answer | Painter's Partition (minimum time to paint boards) |
| `23.cpp` | Binary search on answer | Aggressive Cows (maximize the minimum distance) |
| `24.cpp` | Sorting | Bubble sort (with early-exit optimization) and selection sort |
| `27.cpp` | STL | Vector, list, deque, stack, queue, map, unordered_map, set and pair operations |
| `29.cpp` | Strings | C-style character arrays, `getline`, `std::string` operations |
| `34.cpp` | Number theory | Primality check (brute force to optimized `i*i <= n`) |
| `35.cpp` | 2D arrays | Matrix search, row and column sums, maximum row sum |
| `42.cpp` | Recursion | Print numbers, factorial, Fibonacci |
| `47.cpp` | Backtracking | Rat in a Maze: all paths from top-left to bottom-right |
| `49.cpp` | Backtracking | Combination Sum (take/skip recursion), work in progress |
| `50.cpp` | Backtracking | Palindrome Partitioning, work in progress |
| `51.cpp` | Numerical methods / sorting | Bisection method for root finding, merge sort |
| `52.cpp` | Sorting | Quick sort (partition with last element as pivot) |
| `53.cpp` | Divide and conquer | Count Inversions using merge sort |
| `54.cpp` | OOP | Classes, access specifiers, constructors (default, parameterized, copy), `this`, static members, destructors |
| `57.cpp` | Linked list | Singly linked list class: `push_front`, `push_back`, `insert`, `pop_front`, `pop_back`, search, print |
| `58.cpp` | Linked list | Reverse a linked list (iterative) |
| `59.cpp` | Linked list | Find the middle node (slow/fast pointers) |
| `60.CPP` | Linked list | Cycle detection (Floyd's algorithm) and finding the cycle's starting node |

## Topic roadmap

1. **C++ fundamentals:** types, I/O, operators, loops, functions (`2`-`5`)
2. **Arrays and vectors:** traversal, subarrays, prefix/suffix, two pointers (`8`-`15`, `NEW11`)
3. **Pointers:** `16`
4. **Searching:** binary search and binary search on answer (`17`, `20`, `22`, `23`)
5. **Sorting:** bubble, selection, merge, quick (`24`, `51`, `52`, `53`)
6. **STL and strings:** `27`, `29`
7. **Math and matrices:** `34`, `35`
8. **Recursion and backtracking:** `42`, `47`, `49`, `50`
9. **OOP in C++:** `54`
10. **Linked lists:** `57`-`60`

## Complexity highlights

| Problem | Brute force | Optimized |
|---------|-------------|-----------|
| Two Sum (sorted) | O(n²) | O(n) two pointers |
| Product Except Self | O(n²) | O(n) prefix/suffix |
| Container With Most Water | O(n²) | O(n) two pointers |
| Primality check | O(n) | O(√n) |
| Book allocation / Painter's / Aggressive Cows | O(range × n) | O(n log(range)) |
| Sorting | O(n²) bubble/selection | O(n log n) merge/quick (quick is O(n²) worst case) |
| Count Inversions | O(n²) | O(n log n) |
| Linked list cycle / middle | extra space | O(n) time, O(1) space |

## How to run

```bash
g++ -std=c++17 17.cpp -o out
./out        # on Windows: out.exe
```

## Status

Ongoing practice. `49.cpp`, `50.cpp` and `gugfu.cpp` are scratch or incomplete and may not compile yet. `46.CPP`, `48.cpp` and `tempCodeRunnerFile.cpp` are empty placeholders.

## Author

[@muskan337](https://github.com/muskan337). See also: [leetcode](https://github.com/muskan337/leetcode), [practice.cpp](https://github.com/muskan337/practice.cpp), [python](https://github.com/muskan337/python).
