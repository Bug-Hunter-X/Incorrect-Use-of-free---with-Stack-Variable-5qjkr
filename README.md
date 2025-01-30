# Incorrect Use of free() in C

This repository demonstrates a common error in C programming: using `free()` to deallocate memory that was not allocated using `malloc()`, `calloc()`, or `realloc()`.  The example shows how attempting to free a pointer to a stack variable leads to undefined behavior and potential crashes.

## Bug Description

The `bug.c` file contains a C program that attempts to free a pointer to a stack-allocated variable.  This is incorrect and can lead to program crashes or other unpredictable behavior.  The `free()` function is designed for deallocating memory obtained from the heap (dynamic memory), not the stack (automatic memory).

## Solution

The `bugSolution.c` file shows the correct approach.  Since the variable `x` is allocated on the stack, no explicit deallocation is necessary.  The memory is automatically released when the function `main()` exits.