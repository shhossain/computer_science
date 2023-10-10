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
6. hexToDec(char *hexVal) - Convert hexadecimal to decimal
7. binToOct(int n) - Convert binary to octal
8. binToHex(int n) - Convert binary to hexadecimal
9. octToBin(int n) - Convert octal to binary
10. octToHex(int n) - Convert octal to hexadecimal
11. hexToBin(char *hexVal) - Convert hexadecimal to binary
12. hexToOct(char *hexVal) - Convert hexadecimal to octal

Also this is a special function that convert ant number from one base to another aka universal convertor
* convert(char *num, int base1, int base2) - Convert a number from one base to another

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function to convert decimal to binary
void decToBin(int n) {
    // array to store binary number
    int binaryNum[32];
    // counter for binary array
    int i = 0;
    // divide n by 2, store remainder in array, and increment counter
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    // print binaryNum array in reverse
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    // print newline
    printf("\n");
}

// Function to convert decimal to octal
void decToOct(int n) {
    // Create an array of integers to hold the octal digits
    int octalNum[100];
    // Create a counter variable to keep track of the current digit
    int i = 0;
    // While n is not equal to 0, keep dividing by 8 and storing the remainder in the array
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    // Print the digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNum[j]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decToHex(int n) {
    // create a character array to store the hexadecimal number
    char hexaDeciNum[100];

    // create a variable to store the index of the array
    int i = 0;

    // while the decimal number is not 0, convert it to hexadecimal
    while (n != 0) {
        // create a temporary variable to store the remainder of the division
        // between the decimal number and 16
        int temp = 0;
        temp = n % 16;
        // if the remainder is less than 10, add 48 to it and store it in the array
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        // otherwise, add 55 to it and store it in the array
        } else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        // divide the decimal number by 16
        n = n / 16;
    }
    // loop through the array backwards and print each character
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexaDeciNum[j]);
    }
    printf("\n");
}

// Function to convert binary to decimal
void binToDec(int n) {
    // Initialize decimal to 0 and power to 1
    int decimal = 0, power = 1;
    // While n is greater than 0
    while (n > 0) {
        // Get the last digit of n
        int lastDigit = n % 10;
        // Add the last digit times the power to decimal
        decimal += lastDigit * power;
        // Multiply power by 2
        power *= 2;
        // Divide n by 10
        n /= 10;
    }
    // Print decimal
    printf("%d\n", decimal);
}

// Function to convert octal to decimal
void octToDec(int n) {
    // Initialize decimal to 0, and power to 1
    int decimal = 0, power = 1;

    // While n is greater than 0
    while (n > 0) {
        // Get the last digit of n
        int lastDigit = n % 10;

        // Add the last digit times power to decimal
        decimal += lastDigit * power;

        // Multiply power by 8
        power *= 8;

        // Divide n by 10
        n /= 10;
    }

    // Print decimal
    printf("%d\n", decimal);
}

// Function to convert hexadecimal to decimal
void hexToDec(char *hexVal) {
    int len = strlen(hexVal); // get the length of the hex number
    int base = 1; // set the base value to 1
    int dec_val = 0; // set the decimal value to 0
    for (int i = len - 1; i >= 0; i--) { // loop through each digit in the hex number
        if (hexVal[i] >= '0' && hexVal[i] <= '9') { // if the digit is between 0 and 9
            dec_val += (hexVal[i] - 48) * base; // add the value of the digit to the decimal value
            base = base * 16; // multiply the base by 16
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') { // if the digit is between A and F
            dec_val += (hexVal[i] - 55) * base; // add the value of the digit to the decimal value
            base = base * 16; // multiply the base by 16
        }
    }
    printf("%d\n", dec_val); // print the decimal value
}

// Function to convert binary to octal
void binToOct(int n) {
    // Convert binary to decimal
    int octal = 0, decimal = 0, power = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n /= 10;
    }
    // Convert decimal to octal
    power = 1;
    while (decimal > 0) {
        int lastDigit = decimal % 8;
        octal += lastDigit * power;
        power *= 10;
        decimal /= 8;
    }
    printf("%d\n", octal);
}

// Function to convert binary to hexadecimal
void binToHex(int n) {
    // Convert from binary to decimal
    int decimal = 0, power = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n /= 10;
    }
    // Convert from decimal to hexadecimal
    char hexaDeciNum[100];
    int i = 0;
    while (decimal != 0) {
        int temp = 0;
        temp = decimal % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        } else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        decimal = decimal / 16;
    }
    // Print the hexadecimal number
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexaDeciNum[j]);
    }
    printf("\n");
}

// Function to convert octal to binary
void octToBin(int n) {
    // Convert octal to decimal
    int decimal = 0, power = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n /= 10;
    }
    // Convert decimal to binary
    int binaryNum[32];
    int i = 0;
    while (decimal > 0) {
        binaryNum[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    // Print binary
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

// Function to convert octal to hexadecimal
void octToHex(int n) {
    // Convert octal to decimal
    int decimal = 0, power = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n /= 10;
    }
    // Convert decimal to hexadecimal
    char hexaDeciNum[100];
    int i = 0;
    while (decimal != 0) {
        int temp = 0;
        temp = decimal % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        } else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        decimal = decimal / 16;
    }
    // Print hexadecimal equivalent
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexaDeciNum[j]);
    }
    printf("\n");
}

// Function to convert hexadecimal to binary
void hexToBin(char *hexVal) {
    // Get the length of the hexadecimal number
    int len = strlen(hexVal);
    // Set the base value to 1
    int base = 1;
    // Set the decimal value to 0
    int dec_val = 0;
    // Iterate through the hexadecimal number
    for (int i = len - 1; i >= 0; i--) {
        // If the current digit is between 0 and 9, add the decimal value to the current digit multiplied by the base
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal[i] - 48) * base;
            base = base * 16;
        // Else if the current digit is between A and F, add the decimal value to the current digit multiplied by the base
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (hexVal[i] - 55) * base;
            base = base * 16;
        }
    }
    // Create an array to store the binary number
    int binaryNum[32];
    // Set the index to 0
    int i = 0;
    // While the decimal value is greater than 0
    while (dec_val > 0) {
        // Set the current index of the binary number array to the remainder of the decimal value divided by 2
        binaryNum[i] = dec_val % 2;
        // Divide the decimal value by 2
        dec_val = dec_val / 2;
        // Increment the index
        i++;
    }
    // Iterate through the binary number array from the end to the beginning
    for (int j = i - 1; j >= 0; j--) {
        // Print the current digit of the binary number
        printf("%d", binaryNum[j]);
    }
    // Print a new line
    printf("\n");
}

// Function to convert hexadecimal to octal
void hexToOct(char *hexVal) {
    int len = strlen(hexVal);
    int base = 1;
    int dec_val = 0;
    // loop through each character in hexVal
    for (int i = len - 1; i >= 0; i--) {
        // if the character is a number
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            // convert to decimal and add to dec_val
            dec_val += (hexVal[i] - 48) * base;
            base = base * 16;
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            // convert to decimal and add to dec_val
            dec_val += (hexVal[i] - 55) * base;
            base = base * 16;
        }
    }
    // convert dec_val to octal
    int octalNum[100];
    int i = 0;
    while (dec_val != 0) {
        octalNum[i] = dec_val % 8;
        dec_val = dec_val / 8;
        i++;
    }
    // print octalNum
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNum[j]);
    }
    printf("\n");
}



// Function to convert a number from one base to another
void convert(char *num, int base1, int base2) {
    int decimal = 0, power = 1, len = strlen(num); // declare variables
    for (int i = len - 1; i >= 0; i--) { // loop through each digit of the number
        int digit;
        if (num[i] >= '0' && num[i] <= '9') { // if digit is from 0 to 9
            digit = num[i] - '0'; // convert digit to its corresponding decimal value
        } else if (num[i] >= 'A' && num[i] <= 'Z') { // if digit is from A to Z
            digit = num[i] - 'A' + 10; // convert digit to its corresponding decimal value
        } else if (num[i] >= 'a' && num[i] <= 'z') { // if digit is from a to z
            digit = num[i] - 'a' + 10; // convert digit to its corresponding decimal value
        } else {
            printf("Invalid input!\n"); // if digit is not a valid digit, print error message
            return -1; // exit function
        }
        if (digit >= base1) { // if digit is greater than the base, print error message
            printf("Invalid input!\n");
            return -1; // exit function
        }
        decimal += digit * power; // add digit to decimal value
        power *= base1; // multiply power by base
    }
    char *result = malloc(sizeof(char) * 100); // allocate memory for result
    int i = 0;
    while (decimal > 0) { // convert decimal number to base2
        int digit = decimal % base2;
        if (digit < 10) {
            result[i++] = digit + '0'; // convert digit to its corresponding ASCII value
        } else {
            result[i++] = digit - 10 + 'A'; // convert digit to its corresponding ASCII value
        }
        decimal /= base2;
    }
    result[i] = '\0';
    strrev(result); // reverse result string
    printf("Result: %s\n", result); // print result
    free(result); // free memory
    return; // exit function
}

int main() {

    int decimalNumber = 42; // an integer with a decimal value
    char *hexValue = "2A"; // a string with a hexadecimal value
    int binaryValue = 11010; // an integer with a binary value
    int octalValue = 52; // an integer with an octal value
    
    decToBin(decimalNumber); // Convert decimal number to binary
    decToOct(decimalNumber); // Convert decimal number to octal
    decToHex(decimalNumber); // Convert decimal number to hexadecimal
    binToDec(binaryValue);   // Convert binary number to decimal
    octToDec(octalValue);    // Convert octal number to decimal
    hexToDec(hexValue);      // Convert hexadecimal number to decimal
    binToOct(binaryValue);   // Convert binary number to octal
    binToHex(binaryValue);   // Convert binary number to hexadecimal
    octToBin(octalValue);    // Convert octal number to binary
    octToHex(octalValue);    // Convert octal number to hexadecimal
    hexToBin(hexValue);      // Convert hexadecimal number to binary
    hexToOct(hexValue);      // Convert hexadecimal number to octal
    
    convert("1A", 16, 2); // Convert hex "1A" to binary
    convert("1101", 2, 10); // Convert binary "1101" to decimal
    convert("57", 8, 16); // Convert octal "57" to hexadecimal
    
    return 0;
}
