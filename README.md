# C-WITH-DSA

C++ and Data Structures & Algorithms practice, organized by topic. It starts from language basics and builds through arrays, binary search, sorting, recursion and backtracking, OOP and linked lists.

> Many files keep earlier attempts as commented-out blocks above the final solution, so the progression from brute force to optimized approach is visible in the same file. Each `.cpp` is a standalone program with its own `main()`.

## Repository structure

```
C-WITH-DSA/
├── 01_basics/
├── 02_arrays_and_vectors/
├── 03_pointers/
├── 04_binary_search/
├── 05_sorting/
├── 06_stl_and_strings/
├── 07_math_and_matrices/
├── 08_recursion_and_backtracking/
├── 09_oop/
├── 10_linked_list/
└── scratch/            # incomplete / experimental code
```

File names are the order in which I solved things, so numbers have gaps. Every folder has its own `README.md` with a detailed breakdown.

### 01_basics
| File | Contents |
|------|----------|
| `2.cpp` | Data types, type conversion and casting, `cin`/`cout`, arithmetic operators |
| `3.cpp` | Nested loops and pattern printing (numbers, characters, stars) |
| `4.cpp` | Functions: definition, calling, return values; sum of `n`, factorial, Fibonacci, digit sum, binomial coefficient |
| `5.cpp` | Decimal to binary and binary to decimal conversion |

### 02_arrays_and_vectors
| File | Contents |
|------|----------|
| `8.cpp` | Arrays: `sizeof` size calculation, passing to functions, linear search, reversing |
| `9.cpp` | Vectors: `push_back`, `size` vs `capacity` |
| `10.cpp` | Printing all subarrays; maximum subarray sum (brute force) |
| `11.cpp` | Two Sum (brute force and two pointers); Majority Element (Moore's voting) |
| `12.cpp` | Product of Array Except Self (brute force, then prefix and suffix arrays) |
| `NEW11.cpp` | Container With Most Water (brute force, then two pointers) |
| `15.cpp` | Power function via binary exponentiation; Best Time to Buy and Sell Stock |

### 03_pointers
| File | Contents |
|------|----------|
| `16.cpp` | Address-of, dereferencing, pointer to pointer, `NULL`, pointer arithmetic |

### 04_binary_search
| File | Contents |
|------|----------|
| `17.cpp` | Binary search, iterative and recursive |
| `20.cpp` | Book Allocation: minimize the maximum pages (binary search on answer) |
| `22.cpp` | Painter's Partition: minimum time to paint boards |
| `23.cpp` | Aggressive Cows: maximize the minimum distance |

### 05_sorting
| File | Contents |
|------|----------|
| `24.cpp` | Bubble sort (with early-exit optimization) and selection sort |
| `51.cpp` | Merge sort; also the bisection method for root finding |
| `52.cpp` | Quick sort (partition around the last element) |
| `53.cpp` | Count Inversions using merge sort |

### 06_stl_and_strings
| File | Contents |
|------|----------|
| `27.cpp` | STL: vector, list, deque, stack, queue, map, unordered_map, set, pair |
| `29.cpp` | C-style character arrays, `getline`, `std::string` operations |

### 07_math_and_matrices
| File | Contents |
|------|----------|
| `34.cpp` | Primality check, from brute force to the `i*i <= n` optimization |
| `35.cpp` | 2D arrays: searching, row and column sums, maximum row sum |

### 08_recursion_and_backtracking
| File | Contents |
|------|----------|
| `42.cpp` | Recursion basics: print numbers, factorial, Fibonacci |
| `47.cpp` | Rat in a Maze: all paths from top-left to bottom-right |
| `49.cpp` | Combination Sum (take/skip recursion), work in progress |
| `50.cpp` | Palindrome Partitioning, work in progress |

### 09_oop
| File | Contents |
|------|----------|
| `54.cpp` | Classes, access specifiers, constructors (default, parameterized, copy), `this`, static members, destructors |

### 10_linked_list
| File | Contents |
|------|----------|
| `57.cpp` | Singly linked list class: `push_front`, `push_back`, `insert`, `pop_front`, `pop_back`, search, print |
| `58.cpp` | Reverse a linked list (iterative) |
| `59.cpp` | Find the middle node (slow/fast pointers) |
| `60.cpp` | Cycle detection (Floyd's algorithm) and finding the cycle's start node |

### scratch
| File | Contents |
|------|----------|
| `gugfu.cpp` | Unfinished experiments (decimal/binary conversion, a character-compression attempt); does not compile |

## Complexity highlights

| Problem | Brute force | Optimized |
|---------|-------------|-----------|
| Two Sum (sorted) | O(n²) | O(n), two pointers |
| Product Except Self | O(n²) | O(n), prefix/suffix |
| Container With Most Water | O(n²) | O(n), two pointers |
| Primality check | O(n) | O(√n) |
| Book allocation / Painter's / Aggressive Cows | O(range × n) | O(n log range) |
| Sorting | O(n²) bubble/selection | O(n log n) merge/quick (quick is O(n²) worst case) |
| Count Inversions | O(n²) | O(n log n) |
| Linked list middle / cycle | extra space | O(n) time, O(1) space |

## How to run

```bash
g++ -std=c++17 04_binary_search/17.cpp -o out
./out          # Windows: out.exe
```

Compiled binaries are git-ignored.

## Status

Ongoing practice. `49.cpp` and `50.cpp` are unfinished and don't compile yet (undeclared variables and typos), and everything in `scratch/` is experimental. The rest are working solutions.

## Author

[@muskan337](https://github.com/muskan337). See also: [leetcode](https://github.com/muskan337/leetcode), [practice.cpp](https://github.com/muskan337/practice.cpp), [python](https://github.com/muskan337/python).
