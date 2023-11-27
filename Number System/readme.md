# [Number Systems](#number-systems)

Number systems are a mathematical system for expressing numbers. A number system consists of a set of symbols that are used to represent numbers, and a set of rules for manipulating those symbols. The symbols used in a number system are called numerals.

## [Table of Contents](#table-of-contents)

- [Number Systems](#number-systems)
  - [Table of Contents](#table-of-contents)
  - [Types of Number Systems](#types-of-number-systems)
    - [Positional Numeral System](#positional-numeral-system)
    - [Sign-value Notation System](#sign-value-notation-system)
  - [Common Positional Number Systems](#common-positional-number-systems)
    - [Binary](#binary)
    - [Octal](#octal)
    - [Decimal](#decimal)
    - [Hexadecimal](#hexadecimal)
    - [Number Chart](#number-chart)
    - [Notation](#notation)
  - [Binary Addition and Subtraction](#binary-addition-and-subtraction)
    - [Example of Binary Addition](#example-of-binary-addition)
    - [Example of Binary Subtraction](#example-of-binary-subtraction)
  - [Binary to Decimal Conversion](#binary-to-decimal-conversion)
    - [Example of Binary to Decimal Conversion](#example-of-binary-to-decimal-conversion)
  - [Binary to Hexadecimal Conversion](#binary-to-hexadecimal-conversion)
    - [Example of Binary to Hexadecimal Conversion](#example-of-binary-to-hexadecimal-conversion)
  - [Base/Radix Conversion](#baseradix-conversion)
    - [Example of Radix to Decimal Conversion](#example-of-radix-to-decimal-conversion)
    - [Example of Decimal to Radix Conversion](#example-of-decimal-to-radix-conversion)
  - [Mixed-Base Number Systems](#mixed-base-number-systems)

## [Types of Number Systems](#types-of-number-systems)

### [Positional Numeral System](#positional-numeral-system)

Positional Notation most commonly uses the decimal system. The symbols used in the decimal number system are the Hindu-Arabic numerals 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9. It is a positional numeral system and is base 10, which means that each place in the number represents a power of 10, also known as the radix. The place value of each digit is determined by its position in the number, with the most significant digit on the left and the least significant digit on the right. The value of a digit is multiplied by the radix raised to the power of its position. For example, in the number 123, the digit 1 is in the hundreds place, the digit 2 is in the tens place, and the digit 3 is in the ones place. The value of the digit 1 is 100, the value of the digit 2 is 20, and the value of the digit 3 is 3. The sum of these values is 123.

### [Sign-value Notation System](#sign-value-notation-system)

Sign-value notation represents numbers by a series of numeric signs that when added together give the value of the number. The most commonly known example would be Roman Numerals, where I means 1, V means 5, X means 10. Thus IV means 4, IX means 9, and XI means 11. Sign-value notation is mostly historical and is not used commonly in the modern world.

## [Common Positional Number Systems](#common-positional-number-systems)

### [Binary](#binary)

Binary Numbers only have two numbers, 0 and 1. Binary numbers are used in computers because they are easy to represent using electronic circuits, 1 representing on and 0 representing off. A single digit in binary is referred to as a bit, and 8 bits are a byte. Binary numbers are also used in digital electronics, such as digital cameras, digital watches, and digital televisions.

### [Octal](#octal)

Octal Numbers have eight characters, 0, 1, 2, 3, 4, 5, 6, and 7. The main advantage of using octal numbers is that they are easier to work with than binary numbers. Octal numbers are used in computer programming and in the Unix operating system.

### [Decimal](#decimal)

Decimal Numbers have ten characters, 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9. Decimal numbers are commonly used in everyday life.

### [Hexadecimal](#hexadecimal)

Hexadecimal Numbers have sixteen characters, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, and F. The Hexadecimal, or Hex, numbering system is commonly used in computer and digital systems to reduce large strings of binary numbers into a sets of four digits for us to easily read.

### [Number Chart](#number-chart)

This chart shows how to represent 0-16 in these four numbering systems.

| Binary | Octal | Decimal | Hexadecimal |
|:------:|:-----:|:-------:|:-----------:|
| 00000  | 0     | 0       | 0           |
| 00001  | 1     | 1       | 1           |
| 00010  | 2     | 2       | 2           |
| 00011  | 3     | 3       | 3           |
| 00100  | 4     | 4       | 4           |
| 00101  | 5     | 5       | 5           |
| 00110  | 6     | 6       | 6           |
| 00111  | 7     | 7       | 7           |
| 01000  | 10    | 8       | 8           |
| 01001  | 11    | 9       | 9           |
| 01010  | 12    | 10      | A           |
| 01011  | 13    | 11      | B           |
| 01100  | 14    | 12      | C           |
| 01101  | 15    | 13      | D           |
| 01110  | 16    | 14      | E           |
| 01111  | 17    | 15      | F           |
| 10000  | 20    | 16      | 10          |

### [Notation](#notation)

Here some ways to specify what numbering system you are using, ### here is used to denote any number in that system. The following examples will use the first notation method.

| Numbering System | Notation 1 | Notation 2 | Notation 3 | Notation 4 |
|:----------------:|:----------:|:----------:|:----------:|:----------:|
| Binary:          | ###$_{2}$  | 0b###      | bin(###)   | radix_2    |
| Octal:           | ###$_{8}$  | 0o###      | oct(###)   | radix_8    |
| Decimal:         | ###$_{10}$ | 0d###      | dec(###)   | radix_10   |
| Hexadecimal:     | ###$_{16}$ | 0x###      | hex(###)   | radix_16   |

## [Binary Addition and Subtraction](#binary-addition-and-subtraction)
Arithmetic operations like addition, subtraction, division and multiplications can be done using binary numbers. The rules for binary addition and subtraction are a bit different than that of decimal number system.

### [Example of Binary Addition](#example-of-binary-addition)
Binary addition is done by adding the digits starting from the right side of the numbers, in the same way as we add two or more base 10 numbers. In binary addition, the place values are given, from right to left, as ones, twos, fours, eights, sixteens, etc. We first add the digits in the ones column, then we move towards the left, i.e., add the digits in the twos column, then the digits in the fours column, and so on.
The four rules that apply when two binary digits are added are below given A + B:

|         |  A  |  B  | Carry |  Sum  |
|:-------:|:---:|:---:|:-----:|:-----:|
| Rule 1: | 0   | 0   | 0     | 0     |
| Rule 2: | 0   | 1   | 0     | 1     |
| Rule 3: | 1   | 0   | 0     | 1     |
| Rule 4: | 1   | 1   | 1     | 0     |

Steps for Binary Addition:

Step 1: Write all the digits of both the numbers in separate columns as per their place values.
<pre>
1 0 0 1

+ 1 0 1
_______

</pre>

Step 2: Start from the right-most column digits, 1 and 1. Apply rule 4 above of binary addition which says 1 + 1 = 0 with a carry of 1, so the 1 carries over to the next column, and the 0 goes in the first column of the answer.
<pre>
1 0 0 1

+ 1 0 1
_______
      0
</pre>

Step 3: Move to the next column to the left. Here, we have the digits 0 and 0. Apply rule 1 above of binary addition which says 0 + 0 = 0. Next add the carry by applying rule 3 which says 1 + 0 = 1
<pre>
    1

1 0 0 1

+ 1 0 1
_______
    1 0
</pre>

Step 4: Move to the next column to the left. Here, we have two digits 0 and 1. Look at the rules given above and find out which rule will be applied here. Apply rule 2 which says 0 + 1 = 1.
<pre>
1 0 0 1

+ 1 0 1
_______
  1 1 0
</pre>

Step 5: Now, in the last column, we have only 1 left, so we can apply rule 2, 0 + 1 = 1.
<pre>
1 0 0 1

+ 1 0 1
_______
1 1 1 0
</pre>

Therefore, by adding **$1001_{2}$** with **$101_{2}$**, we get **$1110_{2}$** as the final answer.

### [Example of Binary Subtraction](#example-of-binary-subtraction)
This operation is similar to the basic arithmetic subtraction performed on decimal numbers in Maths. Hence, when we subtract 1 from 0, we need to borrow 1 from the next higher order digit, to reduce the digit by 1 and the remainder left here is also 1.

The four rules that apply when two binary digits are subtracted are below given A - B:

|         |  A  |  B  | Borrow|Difference |
|:-------:|:---:|:---:|:-----:|:---------:|
| Rule 1: | 0   | 0   | 0     | 0         |
| Rule 2: | 0   | 1   | 1     | 1         |
| Rule 3: | 1   | 0   | 0     | 1         |
| Rule 4: | 1   | 1   | 0     | 0         |

Steps for binary subtraction:

Step 1: First consider the ones (1s) column, and subtract the numbers, 0 – 1 and it gives the result 1 as per the condition of binary subtraction with a borrow of 1 from the twos (10s) column: 10 - 1 = 1.
<pre>
1 0 1 0

- 1 0 1
_______

</pre>

Step 2: After borrowing 1 from the twos (10s) column, the value 1 in the twos (10s) column is changed into the value 0.

1 Borrow
<pre>
1 0 1 0

- 1 0 1
_______
      1
</pre>

Step 3: So, subtract the value in the twos (10s) place: 0 – 0 = 0.
<pre>
1 0 1 0

- 1 0 1
_______
    0 1
</pre>

Step 4: Now subtract the values in the fours (100s) place. Borrow 1 from the eights (1000s) place: 0 – 1 = 1.
<pre>
1 0 1 1

- 1 0 1
_______
0 1 0 1
</pre>

Therefore, by subtracting **$1010_{2}$** with **$101_{2}$**, we get **$0101_{2}$** as the final answer, or **$101_{2}$** leaving off the leading 0.

## [Binary to Decimal Conversion](#binary-to-decimal-conversion)
To convert Binary to decimal, first we write the given binary number and count the powers of 2 from right to left (powers starting from 0). Now, write each binary digit (right to left) with the corresponding powers of 2 from (right to left), such that first binary digit will be multiplied with the greatest power of 2. Add all the products and the final answer will be the required decimal number

### [Example of Binary to Decimal Conversion](#example-of-binary-to-decimal-conversion)
Given binary number (1101) into a decimal number.
Now, multiplying each digit from MSB (Most-Significant Bit, or leftmost digit) to LSB (Least-Significant Bit or rightmost digit) while reducing the power of the base number 2.

$= (1)2^3 + (1)2^2 + (0)2^1 + (1)2^0$

$= 8 + 4 + 0 + 1$

$= 13$

Thus, the equivalent decimal number for the given binary number **$1101_{2}$** is **$13_{10}$**

## [Binary to Hexadecimal Conversion](#binary-to-hexadecimal-conversion)
First, you need to convert a binary into other base system (e.g., into decimal, or into octal). Then you need to convert it hexadecimal number.Since number numbers are type of positional number system. That means weight of the positions from right to left are as 160^, 16^1, 16^2, 16^3 and so on. for the integer part and weight of the positions from left to right are as 16^-1, 16^-2, 16^-3 and so on. for the fractional part.

### [Example of Binary to Hexadecimal Conversion](#example-of-binary-to-hexadecimal-conversion)
Converting binary number 1101010 into hexadecimal numbers.

First, convert this into a decimal number:

$= 1101010$

$= (1)2^6 + (1)2^5 + (0)2^4 + (1)2^3 + (0)2^2 + (1)2^1 + (0)2^0$

$= 64 + 32 + 0 + 8 + 0 + 2 + 0$

$= 106$

Then, convert it into hexadecimal number

$= 106$

$= (6)16^1 + (10)16^0$

Thus **$1101010_{2} = 6A_{16}$**.

**Note:** 4 digits of binary directly correspond to 1 digit of hexadecimal, so if you take the 4 rightmost digits of the example (1010) they directly correspond to A in the answer, and (110) corresponds to 6.


## [Base/Radix Conversion](#baseradix-conversion)

Base/Radix conversion is the process to convert the number from one base to another base. For example, converting a decimal number to binary number. These are some example videos on the common types.

[Youtube Video Playlist](https://www.youtube.com/playlist?list=PL0o_zxa4K1BXCpQbUdf0htZE8SS0PYjy-)

### [Example of Radix to Decimal Conversion](#example-of-radix-to-decimal-conversion)

The basic formula for another radix to decimal conversion is:  
$a = r_m b^m + r_{m-1}b^{m-1} + r_{m-2}b^{m-2} + r_{1}b^{1} + r_{0}b^{0}$  
where, m is a nonnegative integer and the r's are integers such that  
$0 < r_m < b$ and $0 ≤ r_i < b for i = 0, 1, ... , m − 1$.

Example: Convert 2212 from base 3 (radix_3) to decimal (radix_10)

$a = (2)3^3 + (2)3^2 + (1)3^1 + (2)3^0$  

$a = 77$  

Thus $2212_{3} = 77_{10}$.

### [Example of Decimal to Radix Conversion](#example-of-decimal-to-radix-conversion)

The basic algorithm for decimal to another radix conversion is to take the decimal number and divide it by the new base/radix. The remainder is the rightmost digit of the new number. The quotient is the new number to be converted. The process is repeated until the quotient is zero.

Example: Convert 77 from decimal (radix_10) to base 5 (radix_5)

$77/5 = 15b + 2$ &nbsp; the remainder is 2, so the rightmost digit of the new number is 2. The quotient is 15, so the new number to be converted is 15.  
$a = 2$  
$15/5 = 3b + 0$  &nbsp;&nbsp; the remainder is 0, so the rightmost digit of the new number is 0. The quotient is 3, so the new number to be converted is 3.  
$a = 02$  
$3/5 = 0b + 3$ &nbsp;&nbsp;&nbsp;&nbsp;  the remainder is 3, so the rightmost digit of the new number is 3. The quotient is 0, so the new number to be converted is 0.  
$a = 302$  

Thus $77_{10} = 302_{5}$.

## [Mixed-Base Number Systems](#mixed-base-number-systems)

Mixed-base number systems are number systems that use more than one base. Such numerical representation applies when a quantity is expressed using a sequence of units that are each a multiple of the next smaller one, but not by the same factor. The easiet example of a mixed-base number system is from our timekeeping methods. 60 seconds in a minute, 60 minutes in an hour, 24 hours in a day, 7 days in a week, 4 weeks in a month, 12 months in a year, 10 years in a decade, 10 decades in a century, 10 centuries in a millennium. All of these are different bases and they are all combined to make our timekeeping system.


## Code for Conversion

- [Conversion In C](./Conversion_In_C.c)
- [Conversion In C++](./Conversion_In_c++.cpp)
- [Conversion In Java](./Conversion_In_Java.java)
- [Conversion In JS](./Conversion_In_JS.js)
- [Conversion In TS](./Conversion_In_TS.ts)
- [Conversion In Lua](./Conversion_In_Lua.lua)
- [Conversion in Python](./Conversion_In_Python2.py)
