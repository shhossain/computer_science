# Conditional Statements

The conditional statements are a very fundamental part of any program as it helps to change the flow of control (which is generally top to bottom) depending on a given condition. 

Let us consider an example where we print whether a given number is Odd or Even.

Code snippet:
* [Python](#python)
* [C++](#cpp)

## Python
```python
if number % 2 == 0:
	print ("Number is even")
else:
	print ("Number is odd")
```
## CPP
```cpp
if (number % 2 == 0)
	cout << "Number is even";
else
	cout << "Number is odd";
```


Now, if the entered number is 5, the if statement will check if the remainder of 5 divided by 2 is 0 or not. As it is not 0, it skips the lines of code within the if statement and the flow of control is shifted to the else part and the lines of code written under it is executed.



**Types of conditional statements**:
## 1. if - else if - else
 **Here is a code that prints the grade based on the marks.**


* In C++:
```cpp
if (marks >= 90)    {
    cout << "A";
}
else if (marks >= 80)    {
    cout << "B";
}
else if (marks >= 70)    {
    cout << "C";
}
else if (marks >= 40)    {
    cout << "D";
}
else {
    cout << "F";
} 
```
 **In Python,** **`else if` is written as `elif`.**
 

* In Python:
 ```python
if marks >= 90:
	print ("A")
elif marks >= 80:
	print ("B")
elif marks >= 70:
	print ("C")
elif marks >= 40:
	print ("D")
else:
	print ("F")
```



## 2. switch case statements

In switch case, we take a value from user which is generally integer or of a character data type based on which the corresponding case is executed.

It is used in-place of if statement if the decision making branches are independent of each other.

*Let us assume that a player is picking a colour for playing Ludo, and based on what he enters, i.e., R, B, Y and G, he is given Red, Blue, Yellow and Green respectively. In case, they enter any other alpahabet, the code returns an error message as no colour is associated with that alphabet.*

* A code in C++ to implement the same:

```cpp
switch (alphabet) {
        case 'R':
            cout << "Red";
            break;
        case 'B':
            cout << "Blue";
            break;
        case 'Y':
            cout << "Yellow";
            break;
        case 'G':
            cout << "Green";
            break;
        default:
            cout << "No other colour exists";
    }
```
* *Note: Python does not have switch case statements.*



## 3. Nested if-else statements:

The nested if...else statement is used when a program requires more than one test expression. It is also called a multi-way selection statement. When a series of the decision are involved in a statement, we use the if-else statement in nested form. Nested if-else statements can be useful when we can have multiple sources of expression and based on the specific value, we need to check nested conditions.

It is recommended for best coding practice to avoid using nested if-else statement as it may turn into a conditional bubbling situation, better to use the switch case for the better conditional handling.

* Syntax of nested if-else in C++:

```cpp
if(condition_1){
	if(condition_2){
		if(condition_3){
			statement_1;
		}
		else{
			statement_2;
		}
	}
	else{
		statement_3;
	}
}
else{
	statement_4;
}
```

* It is considered a better coding practice to use `if...elif...elif...else` in Python

------------

# Terniary operators

There's also an another way get the functionality of if-else with more compact
and concise syntax. 
Yes, we're talking about terniary operators.

Let's consider an example of a typical example of an if-else to check whether
a number is even or odd. 

Traditional way:: 
	
	if(num%2==0):
		print("it is even number")
	else:
		print("it is odd number")

Now using terniary operators:
* [Python Example](#python-example)
* [C++ Example](#cpp-example)

## Python Example
```python
print("it is even number") if num%2==0 else print("it is odd number")
```
__Note__: In python it's called short hand if-else statement.

## CPP Example
```cpp
(num%2==0)?cout<<"it is even number":cout<<"it is odd number";
```

The way it works is, first there's a condition we want to check which is in
braces followed by a question mark, the print which comes after the question 
is the instruction which will get executed if the check condition has been 
satiesfied i.e, if it is true, otherwise it'll execute the statement which 
is after the colon.  


# Loops

Loops are used to execute a block of code as many times we want without writing the same code over and over again. The flow of control breaks out from the loop when the provided condition is false or a `break` statement is used.

Let us take an example where we print all the even numbers upto 10.


#### **There are two types of loop statements**:
## 1. for statement
**Let us take an example where we print all the even numbers upto 10.**

* In C++:
```cpp
for (int i = 2; i <= 10; i+=2) {
  cout << i << "\n";
}
```
`int i = 2` initializes the value of i to 2 

and `i += 2` keeps on incrementing the value of i by 2 

until ` i <= 10  ` becomes `false`

<br>
* In Python:
 ```python
for i in range(2, 11, 2):
	print (i)
```

***Output:
2
4
6
8
10**

The range function takes in three parameters - the first paramter is the **starting value**, the second parameter is the **ending value + 1**, and the third paramter is the **increment value**.

Here,` range(2, 11, 2)` tells the program that it should run the loop for all the values of i between 2 to (11-1) and keep incrementing the value of i by 2.



## 2. while / do while statements

A while statement always checks if the condition provided is True or False at the beginning of the loop and in case it is True, the block of code within the loop is executed. Otherwise, the loop is terminated. As it always checks the condition at the beginning it is also called as Entry-Controlled loop.


* A code in C++ to implement the same:
```cpp
int i = 2;
while (i <= 10)	{
	cout << i << "\n";
	i += 2;
}
```
 

* In Python:
 ```python
i = 2
while i <= 10:
	print (i)
	i += 2
```

In the above codes, the while loop runs until the value of i is 10.

In a do while loop, the validity of the condition is checked at the end of loop. Hence, the code runs atleast once even if the provided condition is False. Also known as Exit-Controlled loop as condition is checked after the loop body is executed.

If I modify the above code to a do while loop, it will print even numbers upto 12 as it checks the condition after the loop is executed.

Code snippet for do-while:

```cpp
int i = 2;
do	{
	cout << i << "\n";
	i += 2;
}while (i <= 10);
```

**Output:
2
4
6
8
10
12**


* *Note: In Python, we do not have do-while loops.*
------------

# Functions

In programming, we often have a block of code which performs a specific task and many times within the program, we may need to use the exact same piece of code. In this case, to eliminate repeatedly writing the same code over and over again and also to maintain readability of the code, we define functions for the same.

* A function can be reused multiple times.
* You can send data to a function which it uses to perform a task.
* A function generally returns a value to the main function which is then used to perform other operations.
* Every programming language has some built-in functions which you can use.
* You  can also write functions on your own.
* When you call a function, the flow of control shifts from the main function to the function which is **always executed from top to bottom**.
* A function can call another function or even call itself (known as recursive functions).
* A return function takes the flow of control out of the function and goes back to the main function.
* Functions make code modular. A big file having many lines of code becomes simple to read if the code is divided into functions.
* Functions provide abstraction. We can use library functions without worrying about their internal work.

------------

Let us consider a situation where I want to print all the prime numbers between 1 to 100:

So, we can write a function to check if a number is prime or not. It returns a boolean data type value based on which we decide whether the number should be printed or not.

Code Snippet for the `isPrime` function:

```python
def isPrime (number: int) -> bool:
	factors = 0
	for i in range (2, (number // 2) + 1):
		if number % i == 0:
			factors += 1
	if factors == 0:
		return True
	return False
```
**<li> The topmost line of a function is called a function header. </li>**

In, `def isPrime (number: int) -> bool:` ,
the parameters within the bracket tells the program how many parameters this function will accept and what are they called.

In this case, the function header tells the program that it has to pass one parameter to the `isPrime` function and that parameter/ variable will be refered to as `number` inside the function.
<br>

Now let us use this function to print prime numbers upto 100:
```python
for i in range(1, 101):
	if isPrime(i):
		print (i)
```

* This code uses the `isPrime ` function to determine if the number is prime or not for every value of i from 1 to 100 and prints the prime numbers only.
* This not only just increases the readability of the main program but the isPrime function can be used by other programs too.

------------

## Types of functions

* User Defined Function:
User defined functions are user/customer-defined blocks of code specially customized to reduce the complexity of big programs. They are also commonly known as "tailor-made functions" which are built only to cater to the specific problem in which the user is facing issues. Once you define a function, you can call it in the same way as the built-in functions.

* Library Function:
Library functions are also called "builtin Functions" that are grouped together and placed in a common location called library. Each function here performs a specific operation. We can use this library functions to get the pre-defined output. These functions are a part of a compiler package that is already defined. Builtin function gives us an advantage as we can use them directly without worrying about defining them. Whereas in the user-defined function we have to declare and define a function prior to using them.

------------

## Passing parameters to functions

### 1. Pass by Value
In this parameter passing method, values of actual parameters are copied to the function’s formal parameters and the two types of parameters are stored in different memory locations. So any changes made inside functions are not reflected in the actual parameters of the caller. 

### 2. Pass by Reference
Actual and formal parameters both refer to the same locations. Hence, any changes made inside the function are actually reflected in the actual parameters of the caller.

------------

## Function Overloading
Certain programming languages allow function overloading which is the ability to create multiple functions with the same name with different implementations. For example, C++ lets you specify more than one function of the same name in the same scope. The determination of which function to use for a particular call is resolved at compile time and is based on the number of parameters the function takes or the datatype of the parameters. 

------------

# Lambda Function

A lambda function is a small *anonymus* or also known as *unknown* function meaning that the function does not have a name. They reduce down the code size and makes it for the programmer to do faster software development.

* Syntax:
```python
lambda arguments: expression
```

**Characteristic of lambda function:**

* Lambda function takes an unlimited number of arguments however has only one expression. This expression return the result when the lambda function is called
* Since it contain only one expression which return the result by default, it does not require the *return* statement.

* An example of lambda function:
```python
result = lambda x: x + 10
print(result(5))
```

**Output:
15**

**Here**,
* *lambda* is the keyword,
* x is an argument, and
* x + 10 is lambda expression.

**Difference between lambda functions and user-defined functions**

Lambda functions are anonymous functions which mean a function is defined using a *lambda* keyword and without a name, whereas a user-defined function is defined using a *def* keyword and has a function name.

---------
