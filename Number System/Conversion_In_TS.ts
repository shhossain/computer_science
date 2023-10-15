/*
Author: Sarthak Sharma 
Github: https://github.com/Sarthak950
Website: https://sarthak950.netlify.app/

This program contains functions to convert a number from one base to another.
The bases supported are decimal, binary, octal and hexadecimal.

The functions are:
1. decToBin(n) - Convert decimal to binary
2. decToOct(n) - Convert decimal to octal
3. decToHex(n) - Convert decimal to hexadecimal
4. binToDec(n) - Convert binary to decimal
5. octToDec(n) - Convert octal to decimal
6. hexToDec(hexVal) - Convert hexadecimal to decimal
7. binToOct(n) - Convert binary to octal
8. binToHex(n) - Convert binary to hexadecimal
9. octToBin(n) - Convert octal to binary
10. octToHex(n) - Convert octal to hexadecimal
11. hexToBin(hexVal) - Convert hexadecimal to binary
12. hexToOct(hexVal) - Convert hexadecimal to octal

There is a special function
* convert(num, base1, base2) - Convert a number from one base to another
This function converts any number from base1 to base2.
aka Universal converter

*/
// Function to convert decimal to binary
function decToBin(n: number): void {
    //Create an empty array to store the binary digits
    const binaryNum: number[] = [];
    //Initialize a counter to keep track of the binary digits
    let i: number = 0;
    //While the decimal number is greater than 0, divide by 2 and store the remainder (0 or 1) in the array
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = Math.floor(n / 2);
        i++;
    }
    //Loop through the array backwards to print the binary digits
    for (let j = i - 1; j >= 0; j--) {
        console.log(binaryNum[j]);
    }
    //Add a line break after printing the binary number
    console.log();
}

// Function to convert decimal to octal
function decToOct(n: number): void {
    // create array to store octal number
    const octalNum: number[] = [];

    // counter for octal number array
    let i: number = 0;

    // dividing the number by 8 until it is 0
    while (n !== 0) {
        // storing remainder in octal array
        octalNum[i] = n % 8;
        // dividing the number by 8
        n = Math.floor(n / 8);
        // increase counter
        i++;
    }

    // printing octal number array in reverse order
    for (let j = i - 1; j >= 0; j--) {
        console.log(octalNum[j]);
    }
    console.log();
}

// Function to convert decimal to hexadecimal
function decToHex(n: number): void {
    const hexaDeciNum: string[] = [];
    let i: number = 0;
    // While n is not equal to zero
    while (n !== 0) {
        // Find the remainder of n divided by 16
        const temp: number = n % 16;
        // If the remainder is less than 10
        if (temp < 10) {
            // Store the character representation of the remainder
            // plus 48 in the array
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            // Store the character representation of the remainder
            // plus 55 in the array
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        // Increment i
        i++;
        // Divide n by 16 and round down
        n = Math.floor(n / 16);
    }
    // Loop through the array in reverse order
    for (let j = i - 1; j >= 0; j--) {
        // Print the value at index j
        console.log(hexaDeciNum[j]);
    }
    // Print a new line
    console.log();
}

// Function to convert binary to decimal
function binToDec(n: number): void {
    let decimal: number = 0; // The decimal number we are building up
    let power: number = 1; // The current power of 2 we are using
    while (n > 0) {
        const lastDigit: number = n % 10; // Get the last digit of n
        decimal += lastDigit * power; // Add last digit to decimal
        power *= 2; // Increase power of 2
        n = Math.floor(n / 10); // Remove last digit from n
    }
    console.log(decimal); // Print out the decimal number
    console.log(); // Print a blank line
}

// Function to convert octal to decimal
function octToDec(n: number): void {
    // Initialize decimal number and power
    let decimal: number = 0;
    let power: number = 1;

    // Extracting last digit and adding to decimal
    while (n > 0) {
        const lastDigit: number = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n = Math.floor(n / 10);
    }

    // Printing result
    console.log(decimal);
    console.log();
}

// Function to convert hexadecimal to decimal
function hexToDec(hexVal: string): void {
    const len: number = hexVal.length;
    let base: number = 1;
    let dec_val: number = 0;
    for (let i = len - 1; i >= 0; i--) {
        // Get the character code of the current hex character
        const charCode: number = hexVal.charCodeAt(i);
        // If the character code is between '0' and '9', convert it to decimal
        if (charCode >= 48 && charCode <= 57) {
            // Add to the decimal value by multiplying the character code by the base
            dec_val += (charCode - 48) * base;
            base = base * 16;
        // If the character code is between 'A' and 'F', convert it to decimal
        } else if (charCode >= 65 && charCode <= 70) {
            // Add to the decimal value by multiplying the character code by the base
            dec_val += (charCode - 55) * base;
            base = base * 16;
        }
    }
    console.log(dec_val);
    console.log();
}

// Function to convert binary to octal
function binToOct(n: number): void {
    // Initialize octal number
    let octal: number = 0;

    // Initialize decimal number
    let decimal: number = 0;

    // Initialize power
    let power: number = 1;

    // Convert binary to decimal
    while (n > 0) {
        // Extract the last digit of binary number
        const lastDigit: number = n % 10;

        // Update decimal number
        decimal += lastDigit * power;

        // Update power
        power *= 2;

        // Remove last digit of binary number
        n = Math.floor(n / 10);
    }

    // Convert decimal to octal
    power = 1;
    while (decimal > 0) {
        // Extract the last digit of decimal number
        const lastDigit: number = decimal % 8;

        // Update octal number
        octal += lastDigit * power;

        // Update power
        power *= 10;

        // Remove last digit of decimal number
        decimal = Math.floor(decimal / 8);
    }

    // Print the octal number
    console.log(octal);
    console.log();
}

// Function to convert binary to hexadecimal
function binToHex(n: number): void {
    // Initialize decimal number to zero
    let decimal: number = 0;
    // Initialize power to 1
    let power: number = 1;
    // Loop through each digit of the binary number
    while (n > 0) {
        // Get the last digit of the binary number
        const lastDigit: number = n % 10;
        // Add the last digit multiplied by the power to the decimal number
        decimal += lastDigit * power;
        // Multiply the power by 2
        power *= 2;
        // Remove the last digit from the binary number
        n = Math.floor(n / 10);
    }
    // Initialize array to store hexadecimal digits
    const hexaDeciNum: string[] = [];
    // Initialize index to zero
    let i: number = 0;
    // Loop through each digit of the decimal number
    while (decimal !== 0) {
        // Get the remainder of dividing the decimal number by 16
        const temp: number = decimal % 16;
        // If remainder is less than 10
        if (temp < 10) {
            // Store the remainder plus 48 in the array
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            // Store the remainder plus 55 in the array
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        // Increment index
        i++;
        // Remove the last digit from the decimal number
        decimal = Math.floor(decimal / 16);
    }
    // Loop backward through the array
    for (let j = i - 1; j >= 0; j--) {
        // Print the hexadecimal digit
        console.log(hexaDeciNum[j]);
    }
    console.log();
}

// Function to convert octal to binary
function octToBin(n: number): void {
    // Initialize decimal to 0 and power to 1
    let decimal: number = 0;
    let power: number = 1;
    // While n is greater than 0:
    while (n > 0) {
        // Set lastDigit to the last digit of n
        const lastDigit: number = n % 10;
        // Add lastDigit * power to decimal
        decimal += lastDigit * power;
        // Multiply power by 8
        power *= 8;
        // Set n to n / 10
        n = Math.floor(n / 10);
    }
    // Initialize binaryNum to an empty array
    const binaryNum: number[] = [];
    // Initialize i to 0
    let i: number = 0;
    // While decimal > 0:
    while (decimal > 0) {
        // Set binaryNum[i] to decimal % 2
        binaryNum[i] = decimal % 2;
        // Set decimal to decimal / 2
        decimal = Math.floor(decimal / 2);
        // Increment i
        i++;
    }
    // For j from i - 1 down to 0:
    for (let j = i - 1; j >= 0; j--) {
        // Print binaryNum[j]
        console.log(binaryNum[j]);
    }
    // Print a newline
    console.log();
}

// Function to convert octal to hexadecimal
function octToHex(n: number): void {
    // Declare a variable to store the decimal value
    let decimal: number = 0;
    // Declare a variable to store the power value
    let power: number = 1;
    // While the octal number is greater than 0:
    while (n > 0) {
        // Calculate the last digit of the octal number
        const lastDigit: number = n % 10;
        // Add the last digit to the decimal value
        decimal += lastDigit * power;
        // Multiply the power by 8
        power *= 8;
        // Remove the last digit from the octal number
        n = Math.floor(n / 10);
    }
    // Declare an array to store the hexadecimal number
    const hexaDeciNum: string[] = [];
    // Declare a variable to store the index of the array
    let i: number = 0;
    // While the decimal number is greater than 0:
    while (decimal !== 0) {
        // Calculate the last digit of the decimal number
        const temp: number = decimal % 16;
        // If the last digit is less than 10:
        if (temp < 10) {
            // Store the last digit in the array
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            // Store the last digit in the array
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        // Increment the index
        i++;
        // Remove the last digit from the decimal number
        decimal = Math.floor(decimal / 16);
    }
    // For each digit in the array:
    for (let j = i - 1; j >= 0; j--) {
        // Print the digit
        console.log(hexaDeciNum[j]);
    }
    // Print a blank line
    console.log();
}

// Function to convert hexadecimal to binary
function hexToBin(hexVal: string): void {
    // Get the length of the input string
    const len: number = hexVal.length;
    // Set the base value to 1
    let base: number = 1;
    // Set the decimal value to 0
    let dec_val: number = 0;

    // Loop through the input string from right to left
    for (let i = len - 1; i >= 0; i--) {
        // Get the character code of the current character
        const charCode: number = hexVal.charCodeAt(i);
        // If the character code is between 48 and 57, it is a number
        if (charCode >= 48 && charCode <= 57) {
            // Add the value of the number to the decimal value
            dec_val += (charCode - 48) * base;
            // Multiply the base value by 16
            base = base * 16;
        // If the character code is between 65 and 70, it is a letter
        } else if (charCode >= 65 && charCode <= 70) {
            // Add the value of the letter to the decimal value
            dec_val += (charCode - 55) * base;
            // Multiply the base value by 16
            base = base * 16;
        }
    }

    // Create an array to hold the binary digits
    const binaryNum: number[] = [];
    // Set the index to 0
    let i: number = 0;
    // Loop until the decimal value is 0
    while (dec_val > 0) {
        // Get the remainder when the decimal value is divided by 2
        binaryNum[i] = dec_val % 2;
        // Divide the decimal value by 2
        dec_val = Math.floor(dec_val / 2);
        // Increment the index
        i++;
    }

    // Loop through the binary digits
    for (let j = i - 1; j >= 0; j--) {
        // Print the binary digit
        console.log(binaryNum[j]);
    }
    console.log();
}

// Function to convert hexadecimal to octal
function hexToOct(hexVal: string): void {

    // Get the length of the hex value
    const len: number = hexVal.length;

    // Set the base to 1
    let base: number = 1;

    // Set the decimal value to 0
    let dec_val: number = 0;

    // Loop through each character of the hex value
    for (let i = len - 1; i >= 0; i--) {

        // Get the numeric value of the character
        const charCode: number = hexVal.charCodeAt(i);

        // If the character is a digit
        if (charCode >= 48 && charCode <= 57) {

            // Add the digit to the decimal value
            dec_val += (charCode - 48) * base;

            // Multiply the base by 16
            base = base * 16;

        // If the character is a letter
        } else if (charCode >= 65 && charCode <= 70) {

            // Add the digit to the decimal value
            dec_val += (charCode - 55) * base;

            // Multiply the base by 16
            base = base * 16;
        }
    }

    // Create an array to store the octal values
    const octalNum: number[] = [];

    // Set the index to 0
    let i: number = 0;

    // Loop through each digit and convert to octal
    while (dec_val !== 0) {

        // Get the remainder
        octalNum[i] = dec_val % 8;

        // Divide the decimal value by 8
        dec_val = Math.floor(dec_val / 8);

        // Increment the index
        i++;
    }

    // Print out the octal value
    for (let j = i - 1; j >= 0; j--) {
        console.log(octalNum[j]);
    }
    console.log();
}

// Function to convert a number from one base to another
function convert(num: string, base1: number, base2: number): void {
    let decimal: number = 0; // Decimal value of the number in base1
    let power: number = 1; // Power of base1
    const len: number = num.length; // Length of the number
    for (let i = len - 1; i >= 0; i--) {
        const charCode: number = num.charCodeAt(i); // Character code of the digit
        let digit: number; // Value of the digit
        if (charCode >= 48 && charCode <= 57) { // Digit is between 0 and 9
            digit = charCode - 48;
        } else if (charCode >= 65 && charCode <= 90) { // Digit is between A and Z
            digit = charCode - 65 + 10;
        } else if (charCode >= 97 && charCode <= 122) { // Digit is between a and z
            digit = charCode - 97 + 10;
        } else { // Invalid input
            console.log("Invalid input!");
            return;
        }
        if (digit >= base1) { // Digit is not valid in base1
            console.log("Invalid input!");
            return;
        }
        decimal += digit * power; // Add the digit to decimal
        power *= base1; // Multiply the power of base1 by base1
    }
    let result: string = ""; // Result
    while (decimal > 0) {
        const digit: number = decimal % base2; // Digit in base2
        if (digit < 10) { // Digit is between 0 and 9
            result = String.fromCharCode(digit + 48) + result;
        } else { // Digit is between A and Z
            result = String.fromCharCode(digit - 10 + 65) + result;
        }
        decimal = Math.floor(decimal / base2); // Divide decimal by base2
    }
    console.log("Result: " + result);
}

// Example usage of the conversion functions
const decimalNumber: number = 42;
const hexValue: string = "2A";
const binaryValue: number = 11010;
const octalValue: number = 52;

// Convert decimal to binary
decToBin(decimalNumber);
// Convert decimal to octal
decToOct(decimalNumber);
// Convert decimal to hexadecimal
decToHex(decimalNumber);
// Convert binary to decimal
binToDec(binaryValue);
// Convert octal to decimal
octToDec(octalValue);
// Convert hexadecimal to decimal
hexToDec(hexValue);
// Convert binary to octal
binToOct(binaryValue);
// Convert binary to hexadecimal
binToHex(binaryValue);
// Convert octal to binary
octToBin(octalValue);
// Convert octal to hexadecimal
octToHex(octalValue);
// Convert hexadecimal to binary
hexToBin(hexValue);
// Convert hexadecimal to octal
hexToOct(hexValue);

convert("1A", 16, 2); // Convert hex "1A" to binary
convert("1101", 2, 10); // Convert binary "1101" to decimal
convert("57", 8, 16); // Convert octal "57" to hexadecimal
