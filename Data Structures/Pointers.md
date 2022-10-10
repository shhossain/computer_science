## Pointers

A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location.
The general form of a pointer variable declaration is −

### example
To use pointers in C, we must understand below two operators. 
To access address of a variable to a pointer, we use the unary operator & (ampersand) that returns the address of that variable. For example &x gives us address of variable x.

```
#include <stdio.h>
 
int main()
{
    int x;
 
    // Prints address of x
    printf("%p", &x);
 
    return 0;
}
```

One more operator is unary * (Asterisk) which is used for two things : 
To declare a pointer variable: When a pointer variable is declared in C/C++, there must be a * before its name. 

```
#include <stdio.h>
int main()
{
    int x = 10;
 
    // 1) Since there is * in declaration, ptr
    // becomes a pointer variable (a variable
    // that stores address of another variable)
    // 2) Since there is int before *, ptr is
    // pointer to an integer type variable
    int *ptr;
 
    // & operator before x is used to get address
    // of x. The address of x is assigned to ptr.
    ptr = &x;
 
    return 0;
}
```

type *var-name;

The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, a long hexadecimal number that represents a memory address. The only difference between pointers of different data types is the data type of the variable or constant that the pointer points to.

## Dynamic Memory Allocation

Sometimes the size of the array you declared may be insufficient. To solve this issue, you can allocate memory manually during run-time. This is known as dynamic memory allocation in C programming.

To allocate memory dynamically, library functions are malloc(), calloc(), realloc() and free() are used. These functions are defined in the <stdlib.h> header file.

### C Malloc

The name "malloc" stands for memory allocation.

The malloc() function reserves a block of memory of the specified number of bytes. And, it returns a pointer of void which can be casted into pointers of any form.

Syntax: ptr = (castType*) malloc(size);

### C calloc()

The name "calloc" stands for contiguous allocation.

The malloc() function allocates memory and leaves the memory uninitialized, whereas the calloc() function allocates memory and initializes all bits to zero.

Syntax: ptr = (castType*)calloc(n, size);

### C free()

Dynamically allocated memory created with either calloc() or malloc() doesn't get freed on their own. You must explicitly use free() to release the space.

free(ptr);

### C realloc()

If the dynamically allocated memory is insufficient or more than required, you can change the size of previously allocated memory using the realloc() function.

Syntax: ptr = realloc(ptr, x);

## How to Use Pointers?

(a) We define a pointer variable 
(b) assign the address of a variable to a pointer and 
(c) finally access the value at the address available in the pointer variable.


## Types of Pointers

### Void Pointers

This is a special type of pointer available in C++ which represents absence of type. void pointers are pointers that point to a value that has no type.This means that void pointers have great flexibility as it can point to any data type.

### Invalid Pointers

A pointer should point to a valid address but not necessarily to valid elements. These are called invalid pointers. Uninitialized pointers are also invalid pointers.

eg: 
int *ptr1;
int arr[10];
int *ptr2 = arr+20;

### Null Pointer

Null pointer is a pointer which point nowhere and not just an invalid address.
eg:
int *ptr1 = 0;
int *ptr2 = NULL;

# Get Value of Thing Pointed by Pointers

To get the value of the thing pointed by the pointers, we use the * operator. 
For example:

int* pc, c;
c = 5;
pc = &c;
printf("%d", *pc);




