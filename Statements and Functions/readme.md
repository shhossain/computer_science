# Conditional Statements

The conditional statements are a very fundamental part of any program as it helps to change the flow of control (which is generally top to bottom) depending on a given condition. 

Let us consider an example where we print whether a given number is Odd or Even.

Code snippet:
```python
if number % 2 == 0:
	print ("Number is even")
else:
	print ("Number is odd")
```

Now, if the entered number is 5, the if statement will check if the remainder of 5 divided by 2 is 0 or not. As it is not 0, it skips the lines of code within the if statement and the flow of control is shifted to the else part and the lines of code written under it is executed.
<br>

------------


**There are two types of conditional statements**:
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

------------


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
