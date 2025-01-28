# Attempting to free a pointer not allocated with malloc/calloc

This repository demonstrates a common error in C programming: attempting to free a pointer that was not dynamically allocated using `malloc` or `calloc`.  This action leads to undefined behavior and can cause program crashes or memory corruption.

## The Bug

The `bug.c` file contains the erroneous code.  The code attempts to free a pointer (`ptr`) that points to a variable declared on the stack (`x`). Since `ptr` was not obtained via `malloc` or `calloc`, attempting to free it results in undefined behavior.

## The Solution

The `bugSolution.c` file provides a corrected version. This version demonstrates the proper way to handle dynamically allocated memory: allocating memory using `malloc`, using the memory, and finally freeing it using `free` before the program terminates.  This ensures memory is released correctly, preventing memory leaks and unexpected behavior.