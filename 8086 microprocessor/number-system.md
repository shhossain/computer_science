# OVERVIEW OF NUMBER SYSTEMS

## Introduction
 To appreciate how computersystems operate you will need to understand digital logic and Boolean algebra.
 A digital computer stores data in terms of digits (numbers) and proceeds in discrete steps from one state to the next. The states of a digital computer typically involve binary digits which may take the form of the presence or absence of magnetic markers in a storage medium , on-off switches or relays. In digital computers, even letters, words and whole texts are represented digitally. 

**Digital Logic** is the basis of electronic systems, such as computers and cell phones. Digital Logic is rooted in binary code, a series of zeroes and ones ( example 11011010). This system facilitates the design of electronic circuits that convey information, including logic gates. Digital Logic gate functions include AND, OR and NOT. The value system translates input signals into specific output. Digital Logic facilitates computing, robotics and other electronic applications.
Digital vs. Analog

The term *digital* refers to the fact that the signal is limited to only a few possible values. In
general, digits signals are represented by only two possible voltages on a wire - 0 volts (which we call "binary 0", or just "0") and 5 volts (which we call "binary 1", or just "1"). Wesometimes call these values "low" and "high", or "false" and "true".More complicated signals can be constructed from 1s and 0s by stringing them end-to-end, like
a necklace. If we put three binary digits end-to-end, we have eight possible combinations: 000,001, 010, 011, 100, 101, 110 and 111.
The number of possible combinations is 2nwhere n is the number of bits.
Example for 4 bits 24= 16

0	--> 0000

1	--> 0001

2	--> 0010

3	--> 0011

4	--> 0100

5	--> 0101

6--> 0110

7	--> 0111

7	--> 1000

9 --> 1001

10 --> 1010

11 --> 1011

12 --> 1100

13 --> 1101

14 --> 1110

15 --> 1111

 In principle, there is no limit to how many binary digits we can use in a signal, so signals can be as complicated as you like. The figure below shows atypical digital signal, firstly represented as a series of voltage levels that change as time goeson, and then as a series of 1s and 0s.
 
### Figure 1. A digital signal

Analog electronics uses voltages that can be any value (within limits, of course - it's difficult to imagine a radio with voltages of a million volts!) The voltages often change smoothly from one value to the next, like gradually turning a light dimmer switch up or down. The figure below shows an analog signal that changes with time.

 
### Figure 2. An analog signal
Number Systems
The numeric system we use daily is the decimal system, but this system is not convenient for machines since the information is handled codified in the shape of on or off bits; this way of codifying takes us to the necessity of knowing the positional calculation which will allow us to express a number in any base where we need it.
The binary number system is a natural choice for representing the behavior of circuits that
operate in one of two states (on or off, 1 or 0).
Lets count from zero to ten  using the decimal number system and the binary number system.



### Decimal	 Binary
------- ----------
0  ==	0

1	== 1

2 == 10

3 == 11

4 == 100

5 == 101

6 == 110

7 == 111

8 == 1000

9	== 1001

10 == 1010

``Notice``, though, how much shorter decimal notation is over binary notation, for the same
number of quantities. What takes five bits in binary notation only takes two digits in decimal
notation.
Adding binary numbers is a very simple task, and very similar to the long hand addition of
decimal numbers. As with decimal numbers, you start by adding the bits (digits) one column, or place weight, at a time, from right to left. Unlike decimal addition, there is little to memorize in the way of rules for the addition of binary bits:

0 + 0 = 0

1 + 0 = 1

0 + 1 = 1

1 + 1 = 10

1 + 1 + 1 = 11

Just as with decimal addition, when the sum in one column is a two-bit (two-digit) number, the least significant figure is written as part of the total sum and the most significant figure is "carried" to the next left column. Consider the following examples:
 

Radix number systems
The numeric system we use daily is the decimal system, but this system is not convenient for machines since the information is handled codified in the shape of on or off bits; this way of codifying takes us to the necessity of knowing the positional calculation which will allow us to express a number in any base where we need it.
A base of a number system or radix defines the range of values that a digit may have.
In the binary system or base 2, there can be only two values for each digit of a number, either a "0" or a "1".
In the octal system or base 8, there can be eight choices for each digit of a number:
"0", "1", "2", "3", "4", "5", "6", "7".
In the decimal system or base 10, there are ten different values for each digit of a number:
"0", "1", "2", "3", "4", "5", "6", "7", "8", "9".
In the hexadecimal system, we allow 16 values for each digit of a number:
"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", and "F".
Where “A” stands for 10, “B” for 11, “C” for 12 and so on up to “F” for 15.
Conversion among radices
To convert a number in binary numeration to its equivalent in decimal form, all you have to dois calculate the sum of all the products of bits with their respective place-weight constants. Toillustrate:

Convert 11012 to decimal form:
bits = 						 1 	1 	 0	 1
weight ( IN DECIMAL NOTATION) =	8 	4	 2	 1

The bit on the far right side is called the Least Significant Bit (LSB), because it stands in the
place of the lowest weight (the one's place). The bit on the far left side is called the Most
Significant Bit (MSB), because it stands in the place of the highest weight. Remember, a bit value of "1" means that the respective place weight gets added to the total value, and a bit value of "0" means that the respective place weight does not get added to the total value.


i.e 1x8 + 1x4 +  0x2  + 1x1
=8 + 4 + 1
=1310	   ( So 11012 is 1310)
Convert from Decimal to Any Base
Let’s think about what you do to obtain each digit. As an example, let's start with a decimal
 number 1234 and convert it to decimal notation. To extract the last digit, you move the decimal point left by one digit, which means that you divide the given number by its base 10. 
1234/10 = 123 + 4/10 
The remainder of 4 is the last digit. To extract the next last digit, you again move the decimal point left by one digit and see what drops out.
 123/10 = 12 + 3/10 
The remainder of 3 is the next last digit. You repeat this process until there is nothing left. 
Then you stop. In summary, you do the following:
			Quotient       Remaider
 
Now, let's try a nontrivial example. Let's express a decimal number 1341 in binary notation. Note that the desired base is 2, so we repeatedly divide the given decimal number by 2.
 

### The Hexadecimal Number System

Because binary numeration requires so many bits to represent relatively small numbers
compared to the economy of the decimal system, analyzing the numerical states inside of digital electronic circuitry can be a tedious task. Computer programmers who design sequences of number codes instructing a computer what to do would have a very difficult task if they were forced to work with nothing but long strings of 1's and 0's, the "native language" of any digital circuit. To make it easier for human engineers, technicians, and programmers to "speak" this language of the digital world, other systems of place-weighted numeration have been made which are very easy to convert to and from binary. One of those numeration systems is called octal, because it is a place-weighted system with a base of eight.
Another is the hexadecimal system which is a place-weighted system with a base of sixteen. Valid digits in hex include the normal decimal symbols 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9, plus six alphabetical characters A, B, C, D, E, and F, to make a total of sixteen. As you might have guessed already,each place weight differs from the one before it by a factor of sixteen.

Let's count again from zero to twenty using decimal, binary and hexadecimal to contrast these systems of numeration:

 
 


### OCTAL NUMBER SYSTEM

Octal (base 8) uses 0,1,2,...7 only.

Conversion of Octal to Decimal

3728	= 3x82 +7x81+2x80
=3x64+7x8+2x1
=25010

Decimal to Octal

You can convert decimal to Octal using repeated division (by the base which is 8)

Eg. Convert 266 to Octal( base 8)

266/8 	=	33	 + 	remainder 	2 

33/8	 =	 4	+ 	remainder 	1

4/8	=	0	+	remainder	4

26610 	=	412 8

Octal to Binary

•	Advantage ease of conversion

Convert each digit to its binary equivalent.

Eg Convert 4728  to binary ( that is base 2).

4               1002	, 7            1112,	
2             0102

Pack the binary digits (note you have to use 3 binary digits per octal digit. Eg 2 converts to 10 but you have to write 010.)

So,	 4728 = 1001110102

### Binary to Octal Conversion

•	Group the digits in to 3s from the right and pad with 0s to the left where necessary.
•	The convert the grouped bits.







Eg     1.  Convert 1001110102to  Octal
 Solution

Group in to 3 bits 

100,111,010

Convert the grouped bits,

= 4728

2. Convert 110101102 to Octal

```
Solution
```
Group in to 3 bits from the right. You notice that you have to pad (add) leading 0 to the left to have  the last group to have 3 bits.

011,010,110  			3	2	6

011010110 = 3268

### HEXADECIMAL TO DECIMAL CONVERSION
```
Eg 1.       35616		= 3x162	+	5x161	+	6x160
		
				= 768		+	80	+	6
		
				= 85410
```

```
Eg 2.	2AF16			=2x162		+	10x161	+	15x160

				= 512	+	160	+	16

				= 68710

```











