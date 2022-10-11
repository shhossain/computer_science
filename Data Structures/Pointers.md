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

From the above we got to know about implementation and working of pointers, Lets get to know about what are **double pointers/ pointer to pointer** and how they work..!

### Introduction to Double Pointers
We already know that a pointer points to a location in memory and thus used to store the address of variables which we have seen above. So, when we define a **pointer to pointer**. The first pointer is used to store the address of the variable. And the second pointer is used to store the address of the first pointer. That is why they are also known as **double pointers**.

Syntax of declaring a double pointer:-
```
int **ptr; //This declares a double pointer without initialization.
```
Illustration and implementation of double pointers:-
~~~
#include <stdio.h>
  
<!-- Demonstration of Double Pointer -->
int main()
{
    int a = 10;
  
    // pointer for variable a
    int *ptr;
  
    // double pointer for ptr
    int **ptr1;
  
    // storing address of var in ptr2
    ptr2 = &a;
      
    // Storing address of ptr2 in ptr1
    ptr1 = &ptr2;
      
    // Displaying value of var using
    // both single and double pointers
    printf("Value of a = %d\n", a );
    printf("Value of var using single pointer = %d\n", *ptr );
    printf("Value of var using double pointer = %d\n", **ptr1);
    
  return 0;
} 
~~~

Brief about **Pointer Arithmetics**:- <br>
Below code snippet is written in **cpp** if you wanna try it out in **C** then remove the namespace declaration and change the output statements i.e cout ;)
```
#include <iostream>
//Namespace declaration
using namespace std;

int main ()
{
// Declaration of Variable holding a integer Value
int a = 10;
// Declaration and Initialization of pointer Variable and assigning it the address of variable a 
int *p = &a;
// Declaration and Initialization of pointer to pointer Variable and assigning it the address of pointer p
int **q = &p;

// Declaration of Another Variable of type Int
int b = 20;
// Here *q is nothing but value at p not *p
// So we have changes the address pointed by p and assigned it the address of variable b, so any changes made to *p will be reflected in the value of variable b not in the value of variable a..! 
*q = &b;
//Here the changes are reflected in variable b
(*p)++;
cout << a << " " << b << endl; // 10 21
  return 0;
}

```

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




