# [Data Types](#data-types)

A data type, in programming, is a classification that specifies which type of value a variable has and what type of mathematical, relational or logical operations can be applied to it without causing an error.

In computer science and computer programming, a data type is a set of possible values and a set of allowed operations on it. A data type tells the compiler or interpreter how the programmer intends to use the data.

---

## Main Data Types

- [Primitive Data Types](#primitive-data-types)
- [Non-Primitive Data Types](#non-primitive-data-types)

---

## [Primitive Data Types](#primitive-data-types)

Primitive data types are the most basic data types in a programming language. They are the building blocks of more complex data types. Primitive data types are predefined by the programming language and are named by a reserved keyword.

### Common Primitive Data Types

- [Integer](#integer)
- [Float](#float)
- [Boolean](#boolean)
- [Character](#character)
- [String](#string)

---

### [Integer](#integer)

An integer is a whole number that can be positive, negative or zero. In most programming languages, an integer is a 32-bit signed integer, which means it can have a value between -2,147,483,648 and 2,147,483,647. In some programming languages, an integer can be 64-bit, which means it can have a value between -9,223,372,036,854,775,808 and 9,223,372,036,854,775,807.

#### Example:

##### **C, C++, C#, Java**

```c
// Initializing int variable 'x' with value '5'.
int x = 5;
```

##### **Python**

```python
# Initializing int variable 'x' with value '5'.
x = 5
```

##### **JavaScript**

```javascript
// Initializing int variable 'x' with value '5'.
let x = 5;
```

---

### [Float](#float)

A float is a number that can have a decimal point. In most programming languages, a float is a 32-bit floating point number, which means it can have a value between 1.175494351e-38 and 3.402823466e+38. In some programming languages, a float can be 64-bit, which means it can have a value between 2.2250738585072014e-308 and 1.7976931348623157e+308.

#### Example:

##### **C, C++**

```c
// Initializing float variable 'x' with value '5.5'.
float x = 5.5;
```

##### **C#**

```c#
// Initializing float variable 'x' with value '5.5'.
float x = 5.5D;
```

##### **Python**

```python
# Initializing float variable 'x' with value '5.5'.
x = 5.5
```

##### **Java**

```java
// Initializing float variable 'x' with value '5.5'.
float x = 5.5f;
```

##### **JavaScript**

```javascript
// Initializing float variable 'x' with value '5.5'.
let x = 5.5;
```

---

### [Boolean](#boolean)

A boolean is a data type that can only have one of two values: true or false.

#### Example:

##### **C, C++, C#**

```c
// Initializing bool variable 'x' with value 'true'.
bool x = true;
```

##### **Python**

```python
# Initializing bool variable 'x' with value 'True'.
x = True
```

##### **Java**

```java
// Initializing bool variable 'x' with value 'true'.
boolean x = true;
```

##### **JavaScript**

```javascript
// Initializing bool variable 'x' with value 'true'.
let x = true;
```

---

### [Character](#character)

A character is a single letter, number or symbol. In most programming languages, a character is a 16-bit unsigned integer, which means it can have a value between 0 and 65,535.

#### Example:

##### **C, C++, C#, Java**

```c
// Initializing char variable 'x' with value 'a'.
char x = 'a';
```

##### **Python**

```python
# Python does not have a 'character' type. All single characters are considered strings with length one by Python.
x = "a"
```

##### **JavaScript**

```javascript
// Initializing char variable 'x' with value 'a'.
let x = "a";
```

---

### [String](#string)

A string is a sequence of characters. In most programming languages, a string is an array of characters.

#### Example:

##### **C**

```c
// Initializing string variable 'x' with value 'Hello World!'
char sayHello[] = "Hello World!";
```

##### **C++, C#**

```c++
// Initializing string variable 'x' with value 'Hello World!'
string sayHello = "Hello World!";
```

##### **Python**

```python
# Initializing string variable 'x' with value 'Hello World!'
say_hello = "Hello World!"
```

##### **Java**

```java
// Initializing string variable 'x' with value 'Hello World!'
String sayHello = "Hello World!";
```

##### **JavaScript**

```javascript
// Initializing string variable 'x' with value 'Hello World!'
let x = "Hello World!";
```

---

## [Non-Primitive Data Types](#non-primitive-data-types)

Non-primitive data types are also known as reference data types. They are created by the programmer and are not defined by the programming language. Non-primitive data types are also called composite data types because they are composed of other types.

### Common Non-Primitive Data Types

- [Array](#array)
- [Struct](#struct)
- [Union](#union)
- [Pointer](#pointer)
- [Function](#function)
- [Class](#class)
- [List](#list)
- [Map/Dictionary](#mapdictionary)
- [Set](#set)
- [Pair/Tuple](#pairtuple)

---

### [Array](#array)

An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

#### Example:

##### **C, C++**

```c
// Initialize an array 'x' that can store int values.
int x[] = {5, 10, 15, 20, 25};
```

##### **C#**

```c#
// Initialize an array 'x' that can store int values.
int[] x = {5, 10, 15, 20, 25};
```

##### **Java**

```java
// Initialize an array 'x' that can store int values.
int[] x = {5, 10, 15, 20, 25};
```

##### **JavaScript**

```javascript
// Initialize an array 'x' that can store int values.
const x = [5, 10, 15, 20, 25];
```

---

### [Struct](#struct)

A struct is a collection of variables of different data types under a single name. It is used to combine data items of different kinds.

#### Example:

##### **C, C++**

```c
// Create a struct that has stores three variables.
struct Person {
    char name[50];
    int age;
    float salary;
};
```

##### **C#**

```c#
// Create a struct that has stores three variables.
struct Person
{
    public string name;
    public int age;
    public float salary;
}
```

---

### [Union](#union)

A union is a special data type available in C that allows to store different data types in the same memory location. You can define a union with many members, but only one member can contain a value at any given time. Unions provide an efficient way of using the same memory location for multiple-purpose.

#### Example:

##### **C**

```c
// Create a union
union Data {
    int i;
    float f;
    char str[20];
};
```

---

### [Pointer](#pointer)

A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant, you must declare a pointer before using it to store any variable address. The general form of a pointer variable declaration is:

```c
type *var-name;
```

Here, type is the pointer's base type; it must be a valid C data type and var-name is the name of the pointer variable. The asterisk \* used to declare a pointer is the same asterisk used for multiplication. However, in this statement, the asterisk is being used to designate a variable as a pointer.
Example:

```c
int *ip; // ip is a pointer to an integer
```

---

### [Function](#function)

A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions. The C standard library provides numerous built-in functions that your program can call.

#### Examples:

##### **C, C++**

```c
// Create your own function using following format:
void functionName() {
    // code to be executed
}
```

##### **C#, Java**

```c#
// In C# and Java, functions are known as methods and are defined as following:
static void functionName()
{
    // code to be executed
}
```

##### **Python**

```python
# Define a function in Python:
def function_name():
    # code to be executed
```

##### **JavaScript**

```javascript
// Define a function in JavaScript:
function functionName() {
  // code to be executed
}
```

---

### [Class](#class)

A class is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.

#### Examples:

##### **C++**

```c++
class Person {
    public:
        string name;
        int age;
        float salary;
};
```

##### **C#**

```c#
class Car
{
    string brand;
    string color;

}
```

##### **Python**

```python
class Country:
    name = "United States"
    capital = "Washington"
```

##### **Java**

```java
public class Candidate {
    String name;
    int age;
};
```

##### **JavaScript**

```javascript
class Boat {
  constructor(brand, year) {
    this.brand = brand;
    this.year = year;
  }
}
```

---

### [List](#list)

List is specified as a collection of objects that are ordered. Lists are similar to arrays, but the size of a list can grow or shrink as needed. Lists are also known as dynamic arrays.

#### Examples:

##### **Python**

```python
x = [1, 2, 3]
```

---

### [Map/Dictionary](#mapdictionary)

A map is a data structure that stores elements in a way that allows fast retrieval. Each element is stored as a key-value pair. A map cannot contain duplicate keys. Each key can map to at most one value.

#### Examples:

##### **Python**

```python
x = {"name": "John", "age": 30}
```

##### **C++**

```c++
#include <map>
map<string, int> x = {{"name", "John"}, {"age", 30}};
```

---

### [Set](#set)

A set is a collection of elements where no element is repeated. Sets are unordered, meaning that the order in which elements are added to a set does not matter. Sets are also known as unordered lists.

#### Examples:

##### **Python**

```python
x = {"apple", "banana", "cherry"}
```

##### **C++**

```c++
#include <set>
set<string> x = {"apple", "banana", "cherry"};
```

---

### [Pair/Tuple](#pairtuple)

A pair is a container that stores two values together. A tuple is a container that stores a fixed number of values together. The values can be of different types.

#### Examples:

##### **Python**

```python
x = ("apple", "banana", "cherry")
```

##### **C++**

```c++
#include <tuple>
tuple<string, string, string> x = {"apple", "banana", "cherry"};
```

---

## Data Type Conversion

Data type conversion is the conversion of data from one type to another. In most cases, data type conversion is done automatically by the compiler. However, sometimes you need to manually perform data type conversion to get the expected result.

### Common Data Type Conversion

- [Implicit Conversion](#implicit-conversion)
- [Explicit Conversion](#explicit-conversion)

### [Implicit Conversion](#implicit-conversion)

Implicit conversion is the automatic conversion of data from one type to another. This conversion is done by the compiler when it detects that a conversion is needed. For example, when you assign a value of a smaller data type to a variable of a larger data type, the compiler automatically converts the value to the larger data type.
Example:

```c
int x = 10; // x is an integer
float y = x; // y is a float
```

```python
x = 10 # x is an integer
y = float(x) # y is a float
```

### [Explicit Conversion](#explicit-conversion)

Explicit conversion is the conversion of data from one type to another that is done by the programmer. This conversion is done by using a type casting operator. For example, when you assign a value of a larger data type to a variable of a smaller data type, the compiler will not automatically convert the value to the smaller data type. In this case, you must use a type casting operator to explicitly convert the value to the smaller data type.
Example:

```c
float x = 10.5; // x is a float
int y = (int)x; // y is an integer
```

```python
x = 10.5 # x is a float
y = int(x) # y is an integer
```

## Note

We should be careful in explicit type coversion like,

- Converting a floating type value to integer type value, because this would result in loss od decimal point values.
- A larger data type if converted to smaller data type will result in loss of data as the number will be truncated.

---

## Data Type Size

Data type size is the amount of memory required to store a value of a particular data type. The size of a data type depends on the compiler and the computer architecture. The size of a data type may vary from one computer to another. The size of a data type may also vary from one compiler to another. The size of a data type may also vary from one operating system to another.

### Data Type Size Comparison (Smallest to Largest)

- Character (1 byte)
- Boolean (2 byte)
- Integer (2 byte)
- Float (4 byte)
- Double (8 byte)
- Long Double (16 byte)
