/*
Author: Sarthak Sharma 
Github: https://github.com/Sarthak950
Website: https://sarthak950.netlify.app/

This program contains functions to convert a number from one base to another.
The bases supported are decimal, binary, octal and hexadecimal.

The functions are:
1. decToBin(int n) - Convert decimal to binary
2. decToOct(int n) - Convert decimal to octal
3. decToHex(int n) - Convert decimal to hexadecimal
4. binToDec(int n) - Convert binary to decimal
5. octToDec(int n) - Convert octal to decimal
6. hexToDec(string hexVal) - Convert hexadecimal to decimal
7. binToOct(int n) - Convert binary to octal
8. binToHex(int n) - Convert binary to hexadecimal
9. octToBin(int n) - Convert octal to binary
10. octToHex(int n) - Convert octal to hexadecimal
11. hexToBin(string hexVal) - Convert hexadecimal to binary
12. hexToOct(string hexVal) - Convert hexadecimal to octal

There is a special function 
* convert(string num, int base1, int base2)
which takes a number as a string and converts it from base1 to base2.
aka Universal converter

*/


#include <iostream>
#include <string>
using namespace std;

// Function to convert decimal to binary
void decToBin(int n) {
    int binaryNum[32]; // array to store the binary number
    int i = 0; // counter to keep track of the index
    while (n > 0) { // while the number is greater than 0
        binaryNum[i] = n % 2; // store the remainder of dividing n by 2
        n = n / 2; // update n to be the quotient of dividing n by 2
        i++; // increment i
    }
    for (int j = i - 1; j >= 0; j--) { // loop through the binary number array backwards
        cout << binaryNum[j]; // print each digit
    }
    cout << endl; // print a newline
}

// Function to convert decimal to octal
void decToOct(int n) { // function declaration
    int octalNum[100]; // array to store octal number
    int i = 0; // counter for octal number array
    while (n != 0) { // while loop to get octal number
        octalNum[i] = n % 8; // get remainder
        n = n / 8; // get quotient
        i++; // increment counter
    }
    for (int j = i - 1; j >= 0; j--) { // for loop to print octal number
        cout << octalNum[j]; // print octal number
    }
    cout << endl; // print new line
}

// Function to convert decimal to hexadecimal
void decToHex(int n) {
    // Creates a character array to store the hexadecimal number
    char hexaDeciNum[100];
    // Creates a counter for the array
    int i = 0;
    // While loop to check if n is not equal to 0
    while (n != 0) {
        // Creates a temporary integer variable
        int temp = 0;
        // Sets the value of temp to be the remainder of n divided by 16
        temp = n % 16;
        // If statement to check if temp is less than 10
        if (temp < 10) {
            // Sets the value of hexaDeciNum at index i to be temp + 48
            hexaDeciNum[i] = temp + 48;
            // Increment i by 1
            i++;
        } else {
            // Sets the value of hexaDeciNum at index i to be temp + 55
            hexaDeciNum[i] = temp + 55;
            // Increment i by 1
            i++;
        }
        // Divide n by 16
        n = n / 16;
    }
    // For loop to iterate through the array
    for (int j = i - 1; j >= 0; j--) {
        // Print the value at index j in the array
        cout << hexaDeciNum[j];
    }
    // Print a new line
    cout << endl;
}

// Function to convert binary to decimal
void binToDec(int n) {
    // Initialize decimal and power variables
    int decimal = 0, power = 1;

    // While n is not 0
    while (n > 0) {
        // Get last digit of n
        int lastDigit = n % 10;

        // Add last digit times power to decimal
        decimal += lastDigit * power;

        // Update power
        power *= 2;

        // Update n
        n /= 10;
    }

    // Print decimal
    cout << decimal << endl;
}

// Function to convert octal to decimal
void octToDec(int n) {
    // Initialize decimal and power variables
    int decimal = 0, power = 1;

    // While n is not 0
    while (n > 0) {
        // Get last digit of n
        int lastDigit = n % 10;

        // Add last digit times power to decimal
        decimal += lastDigit * power;

        // Update power
        power *= 8;

        // Update n
        n /= 10;
    }

    // Print decimal
    cout << decimal << endl;
}

// Function to convert hexadecimal to decimal
void hexToDec(string hexVal) {
    int len = hexVal.length();
    int base = 1;
    int dec_val = 0;
    for (int i = len - 1; i >= 0; i--) {
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value.
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal[i] - 48) * base;
            base = base * 16;
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            // if character lies in 'A'-'F' , converting
            // it to integral 10 - 15 by subtracting 55
            // from ASCII value
            dec_val += (hexVal[i] - 55) * base;
            base = base * 16;
        }
    }
    cout << dec_val << endl;
}

#include <iostream>
using namespace std;

// Function to convert binary to octal
void binToOct(int n) {
    int octal = 0, decimal = 0, power = 1;
    // convert binary to decimal
    while (n > 0) {
        // get last digit of binary
        int lastDigit = n % 10;
        // add last digit times power of 2 to decimal
        decimal += lastDigit * power;
        // increase power of 2
        power *= 2;
        // remove last digit from binary
        n /= 10;
    }
    // convert decimal to octal
    power = 1;
    while (decimal > 0) {
        // get last digit of decimal
        int lastDigit = decimal % 8;
        // add last digit times power of 10 to octal
        octal += lastDigit * power;
        // increase power of 10
        power *= 10;
        // remove last digit from decimal
        decimal /= 8;
    }
    // print octal number
    cout << octal << endl;
}

// Function to convert binary to hexadecimal
void binToHex(int n) {
    // Convert binary to decimal
    int decimal = 0, power = 1;
    // Initialize decimal number to 0
    int decimal = 0;

    // Initialize power to 1
    int power = 1;

    // While n is greater than 0 do the following:
    while (n > 0) {
        // Get the last digit of n
        int lastDigit = n % 10;

        // Add the last digit times the power to the decimal number
        decimal += lastDigit * power;

        // Multiply power by 2
        power *= 2;

        // Divide n by 10
        n /= 10;
    }
    
    // Convert decimal to hexadecimal
    char hexaDeciNum[100];
    // start with the first digit in the rightmost position
    int i = 0;
    // while the decimal number is not zero
    while (decimal != 0) {
        // create a temporary variable to store the remainder
        int temp = 0;
        // divide the decimal number by 16 and store the remainder
        temp = decimal % 16;
        // if the remainder is less than 10, add 48 to the remainder and store it in the array
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        // otherwise, add 55 to the remainder and store it in the array
        } else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        // divide the decimal number by 16 to get the next remainder
        decimal = decimal / 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << hexaDeciNum[j];
    }
    cout << endl;
}

// Function to convert octal to binary
void octToBin(int n) {
    // Initialize variables
    int decimal = 0, power = 1;
    // Convert octal to decimal
    // The final decimal number.
    int decimal = 0;
    // The power of 8 that we are currently at.
    int power = 1;
    // While there are still digits in the octal number.
    while (n > 0) {
        // Get the last digit.
        int lastDigit = n % 10;
        // Add the last digit to the decimal number.
        decimal += lastDigit * power;
        // Move to the next power of 8.
        power *= 8;
        // Remove the last digit.
        n /= 10;
    }
    // Convert decimal to binary
    int binaryNum[32];
    int i = 0;
    // Initialize a counter to track the array index
    i = 0;

    // While the decimal number is greater than 0
    while (decimal > 0) {

        // Calculate the remainder of decimal / 2
        binaryNum[i] = decimal % 2;

        // Calculate the new value of decimal by dividing it by 2
        decimal = decimal / 2;

        // Increment the counter
        i++;
    }
    // Print binary number
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;
}

// Function to convert octal to hexadecimal
void octToHex(int n) {
    // Declare and initialize variables
    int decimal = 0, power = 1;

    // Convert octal to decimal
    while (n > 0) { // While there are still digits to process
        int lastDigit = n % 10; // Extract the last digit
        decimal += lastDigit * power; // Add to the decimal number
        power *= 8; // Increase the power of 8
        n /= 10; // Remove the last digit
    }

    // Convert decimal to hexadecimal
    char hexaDeciNum[100];
    int i = 0;
    while (decimal != 0) {
        int temp = 0;
        temp = decimal % 16; // Get the remainder
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48; // 48 is ASCII for 0
            i++;
        } else {
            hexaDeciNum[i] = temp + 55; // 55 is ASCII for A
            i++;
        }
        decimal = decimal / 16; // Get the quotient
    }

    // Print hexadecimal number
    for (int j = i - 1; j >= 0; j--) {
        cout << hexaDeciNum[j];
    }
    cout << endl;
}

// Function to convert hexadecimal to binary
void hexToBin(string hexVal) {
    // Get the length of the string
    int len = hexVal.length();
    // Base value for the hexadecimal
    int base = 1;
    // Decimal value
    int dec_val = 0;
    // Iterate through the string
    for (int i = len - 1; i >= 0; i--) {
        // Check if the character is a number
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            // Calculate the decimal value
            dec_val += (hexVal[i] - 48) * base;
            // Increment the base
            base = base * 16;
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            // Calculate the decimal value
            dec_val += (hexVal[i] - 55) * base;
            // Increment the base
            base = base * 16;
        }
    }
    // Create an array to store the binary value
    int binaryNum[32];
    // Iterate through the decimal value
    int i = 0;
    while (dec_val > 0) {
        // Add the remainder to the binary array
        binaryNum[i] = dec_val % 2;
        // Divide the decimal value by 2
        dec_val = dec_val / 2;
        // Increment the index
        i++;
    }
    // Iterate through the binary array
    for (int j = i - 1; j >= 0; j--) {
        // Print the binary value
        cout << binaryNum[j];
    }
    // Print a new line
    cout << endl;
}

// Function to convert hexadecimal to octal
void hexToOct(string hexVal) {
    // Get the length of the hexadecimal number
    int len = hexVal.length();
    // Initialize the base to 1
    int base = 1;
    // Initialize the decimal value to 0
    int dec_val = 0;
    // Loop through the hexadecimal number from right to left
    for (int i = len - 1; i >= 0; i--) {
        // If the current digit is between 0 and 9, add it to the decimal value
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal[i] - 48) * base;
            base = base * 16;
        }
        // If the current digit is between A and F, add it to the decimal value
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (hexVal[i] - 55) * base;
            base = base * 16;
        }
    }
    // Declare an array to store the octal number
    int octalNum[100];
    // Initialize the index to 0
    int i = 0;
    // Loop until the decimal value is 0
    while (dec_val != 0) {
        // Store the remainder when the decimal value is divided by 8
        octalNum[i] = dec_val % 8;
        // Update the decimal value
        dec_val = dec_val / 8;
        // Increment the index
        i++;
    }
    // Loop through the octal number in reverse
    for (int j = i - 1; j >= 0; j--) {
        // Print the octal number
        cout << octalNum[j];
    }
    // Print a new line
    cout << endl;
}

// Function to convert a number from one base to another
void convert(string num, int base1, int base2) {
    // Convert the number from base1 to base 10
    int decimal = 0, power = 1, len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        // Convert the current digit from a character to an int.
        int digit;
        if (num[i] >= '0' && num[i] <= '9') {
            digit = num[i] - '0';
        } else if (num[i] >= 'A' && num[i] <= 'Z') {
            digit = num[i] - 'A' + 10;
        } else if (num[i] >= 'a' && num[i] <= 'z') {
            digit = num[i] - 'a' + 10;
        } else {
            cout << "Invalid input!" << endl;
            return;
        }
        // If the digit is greater than the base, it's invalid.
        if (digit >= base1) {
            cout << "Invalid input!" << endl;
            return;
        }
        // Add the contribution of the current digit to the total.
        decimal += digit * power;
        // Update the power of the base.
        power *= base1;
    }
    // Convert the number from base 10 to base2
    // STEP 1: Initialize result string to empty string
    string result = "";

    // STEP 2: Repeat until decimal value is 0
    while (decimal > 0) {
        // STEP 2a: Get last digit of decimal value
        int digit = decimal % base2;

        // STEP 2b: If digit is less than 10, convert to decimal digit,
        //          otherwise convert to capital letter
        if (digit < 10) {
            result = char(digit + '0') + result;
        } else {
            result = char(digit - 10 + 'A') + result;
        }

        // STEP 2c: Divide decimal value by base2
        decimal /= base2;
    }
    cout << "Result: " << result << endl;
}

int main() {
    // Example usage of the conversion functions
    int decimalNumber = 42; // 42 in decimal
    string hexValue = "2A"; // 42 in hexadecimal
    int binaryValue = 11010; // 42 in binary
    int octalValue = 52; // 42 in octal
    
    // add comments here
    decToBin(decimalNumber);
    // add comments here
    decToOct(decimalNumber);
    // add comments here
    decToHex(decimalNumber);
    // add comments here
    binToDec(binaryValue);
    // add comments here
    octToDec(octalValue);
    // add comments here
    hexToDec(hexValue);
    // add comments here
    binToOct(binaryValue);
    // add comments here
    binToHex(binaryValue);
    // add comments here
    octToBin(octalValue);
    // add comments here
    octToHex(octalValue);
    // add comments here
    hexToBin(hexValue);
    // add comments here
    hexToOct(hexValue);
    
    convert("1A", 16, 2); // Convert hex "1A" to binary
    convert("1101", 2, 10); // Convert binary "1101" to decimal
    convert("57", 8, 16); // Convert octal "57" to hexadecimal
    
    return 0;
}
