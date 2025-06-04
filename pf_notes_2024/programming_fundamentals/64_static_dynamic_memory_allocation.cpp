/*
static memory:
    ->excution compiler
    ->cannot change the size
    ->memory allocation always be fixed eg:int 4bytes etc
    ->compile time memory
    ->access using name eg:int m;
    ->in int arr[5]; total will be 20bytes during excution of program it will always be same and we cant change it during excurtion.
    ->MEMORY ALLOCTION will be done by the compiler
    ->wastage of memory as well as shortage can be happen
    ->stack
    ->Memory is automatically deallocated when the variable goes out of scope (e.g., when the function ends).
dynamic memory:
    ->excution operating system
    ->can change the size
    ->memory allocation is not fixed it changes depend upon no of elements
    ->runtime memory
    ->access using address eg:*ptr=&m;
    ->in int arr[5]; total will not be defined it will depend on size
    ->MEMORY ALLOCTION will be done by the programmar
    ->no wastage of memory as well as shortage happen
    ->malloc(),calloc() are used for dynamic memory alloction
    ->for using these build-in functions we need to use thies header file/library file alloc.h
    ->heap
    ->Requires manual memory deallocation using delete() when the array is no longer needed to avoid memory leaks
*/

/*
Stack vs. Heap:

Stack:
Allocated automatically and managed by the compiler.
Faster allocation and deallocation.
Limited in size, and memory is automatically reclaimed when the function exits.
Best suited for small, short-lived variables with a known lifetime.
Heap:
Allocated and deallocated explicitly by the programmer.
Slower allocation and deallocation compared to the stack.
Dynamic in size, suitable for larger data structures or when the size is not known at compile time.
Requires manual memory management to avoid memory leaks.
*/