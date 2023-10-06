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
function decToBin(n) {
    let binaryNum = []; //create an empty array to hold the binary number
    let i = 0; //create a counter variable to keep track of the array index
    while (n > 0) { //while the decimal number is greater than zero
        binaryNum[i] = n % 2; //store the remainder of n/2 in the array (0 or 1)
        n = Math.floor(n / 2); //divide n by 2 and round down
        i++; //increase the array index counter by 1
    }
    console.log(binaryNum.reverse().join('')); //print the binary number after reversing it and converting to a string
}

// Function to convert decimal to octal
function decToOct(n) {
    // Create an empty array to store the octal digits
    let octalNum = [];
    // Create a counter variable i to keep track of the index of the octalNum array
    let i = 0;
    // Until n becomes 0, do the following:
    while (n !== 0) {
        // Store the remainder of n / 8 in the ith index of the octalNum array
        octalNum[i] = n % 8;
        // Update n to be the quotient of n / 8
        n = Math.floor(n / 8);
        // Increment i by 1
        i++;
    }
    // Print out the octalNum array in reverse order
    console.log(octalNum.reverse().join(''));
}

// Function to convert decimal to hexadecimal
function decToHex(n) {
    // Create an empty array to store the converted hexadecimal number
    let hexaDeciNum = [];
    // Create a variable to keep track of the index of the array
    let i = 0;
    // Create a while loop that runs as long as the number is not zero
    while (n !== 0) {
        // Create a temporary variable to hold the remainder of n divided by 16
        let temp = n % 16;
        // If the remainder is less than 10, convert it to a character
        if (temp < 10) {
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            // If the remainder is greater than 10, convert it to a letter
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        // Increase the index variable by 1
        i++;
        // Divide n by 16 and round down to the nearest whole number
        n = Math.floor(n / 16);
    }
    // Print the hexadecimal number
    console.log(hexaDeciNum.reverse().join(''));
}

// Function to convert binary to decimal
function binToDec(n) {
    // create a variable to store the decimal value
    let decimal = 0;
    // create a variable to store the value of the digit's place (1, 10, 100, etc.)
    let power = 1;
    // loop through the binary number
    while (n > 0) {
        // get the last digit
        const lastDigit = n % 10;
        // add the last digit's value to the decimal value
        decimal += lastDigit * power;
        // multiply the power by 2
        power *= 2;
        // remove the last digit from the binary number
        n = Math.floor(n / 10);
    }
    console.log(decimal);
}

// Function to convert octal to decimal
function octToDec(n) {
    let decimal = 0; // create a variable to store the decimal number
    let power = 1; // multiply the last digit by 1
    while (n > 0) {
        const lastDigit = n % 10; // get the last digit of the octal number
        decimal += lastDigit * power; // add the last digit multiplied by the power to the decimal number
        power *= 8; // increase the power by multiplying it by 8
        n = Math.floor(n / 10); // remove the last digit from the octal number
    }
    console.log(decimal); // print the decimal number
}

// Function to convert hexadecimal to decimal
function hexToDec(hexVal) {
    // Length of the hexadecimal number
    let len = hexVal.length;
    // Initialising base value to 1, i.e 16^0
    let base = 1;
    // Initialising decimal value to 0
    let dec_val = 0;
    // Extracting characters as digits from last character
    for (let i = len - 1; i >= 0; i--) {
        // If the character lies in the range '0'-'9', convert it to integral 0-9
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal.charCodeAt(i) - 48) * base;
            base = base * 16;
        }
        // If the character lies in the range 'A'-'F', convert it to integral 10-15
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (hexVal.charCodeAt(i) - 55) * base;
            base = base * 16;
        }
    }
    // Printing the decimal equivalent
    console.log(dec_val);
}

// Function to convert binary to octal
function binToOct(n) {
    // Initialize octal number and decimal number
    let octal = 0;
    let decimal = 0;
    // Initialize power of 2
    let power = 1;
    // Convert binary to decimal
    while (n > 0) {
        // Extract last digit
        const lastDigit = n % 10;
        // Update decimal number
        decimal += lastDigit * power;
        // Update power of 2
        power *= 2;
        // Update binary number
        n = Math.floor(n / 10);
    }
    // Initialize power of 10
    power = 1;
    // Convert decimal to octal
    while (decimal > 0) {
        // Extract last digit
        const lastDigit = decimal % 8;
        // Update octal number
        octal += lastDigit * power;
        // Update power of 10
        power *= 10;
        // Update decimal number
        decimal = Math.floor(decimal / 8);
    }
    console.log(octal);
}

// Function to convert binary to hexadecimal
function binToHex(n) {
    // Convert decimal to binary
    let decimal = 0;
    let power = 1;

    // Go through each digit of the binary number
    while (n > 0) {
        // Get the last digit
        const lastDigit = n % 10;

        // Add it to the decimal value
        decimal += lastDigit * power;

        // Increase the power of 2
        power *= 2;

        // Remove the last digit
        n = Math.floor(n / 10);
    }

    // Return the decimal value
    return decimal;

    // Convert binary to hexadecimal
    let hexaDeciNum = [];
    let i = 0;
    while (decimal !== 0) {
        let temp = decimal % 16;
        if (temp < 10) {
            // temp is a number
            // Convert temp to a string and add 48 to get the ASCII code for the
            // character 0-9
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            // temp is a letter
            // Convert temp to a string and add 55 to get the ASCII code for
            // the character A-F
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        i++;
        decimal = Math.floor(decimal / 16);
    }
    console.log(hexaDeciNum.reverse().join(''));
}

// Function to convert octal to binary
function octToBin(n) {
    // Convert octal number to decimal
    let decimal = 0;
    let power = 1;
    while (n > 0) {
        const lastDigit = n % 10; // lastDigit = 5
        decimal += lastDigit * power; // decimal = 5 * 1 = 5
        power *= 8; // power = 8
        n = Math.floor(n / 10); // n = 1
    }
    // Convert decimal number to binary
    let binaryNum = [];
    let i = 0;
    while (decimal > 0) {
        // Initialize the array to hold the binary number
        binaryNum[i] = decimal % 2;
        // Divide the decimal number by 2
        decimal = Math.floor(decimal / 2);
        // Increment the index
        i++;
    }
    console.log(binaryNum.reverse().join(''));
}

// Function to convert octal to hexadecimal
function octToHex(n) {
    // Convert octal to decimal
    let decimal = 0;
    let power = 1;
    while (n > 0) {
        // Extract the last digit.
        const lastDigit = n % 10;

        // Convert the last digit from octal to decimal.
        decimal += lastDigit * power;

        // Increase the power of 8.
        power *= 8;

        // Remove the last digit.
        n = Math.floor(n / 10);
    }
    // Convert decimal to hexadecimal
    let hexaDeciNum = [];
    let i = 0;
    while (decimal !== 0) {
        // find the remainder
        let temp = decimal % 16;
        // convert to hex digit
        if (temp < 10) {
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        i++;
        // divide by 16
        decimal = Math.floor(decimal / 16);
    }
    console.log(hexaDeciNum.reverse().join(''));
}

// Function to convert hexadecimal to binary
function hexToBin(hexVal) {
    let len = hexVal.length;  // stores the length of the input string

    let base = 1; // stores the base value to be used in converting the hex to decimal
    let dec_val = 0; // stores the decimal value of the input string

    for (let i = len - 1; i >= 0; i--) { // loops through each character in the string from right to left
        if (hexVal[i] >= '0' && hexVal[i] <= '9') { // checks if the character is a digit
            dec_val += (hexVal.charCodeAt(i) - 48) * base; // adds the decimal value of the digit to the current decimal value
            base = base * 16; // multiplies the base value by 16 to be used in the next iteration
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') { // checks if the character is a letter
            dec_val += (hexVal.charCodeAt(i) - 55) * base; // adds the decimal value of the letter to the current decimal value
            base = base * 16; // multiplies the base value by 16 to be used in the next iteration
        }
    }
    let binaryNum = []; // stores the binary value of the decimal value
    let i = 0; // stores the index of the binaryNum array
    while (dec_val > 0) { // loops until the decimal value is 0
        binaryNum[i] = dec_val % 2; // stores the remainder of the decimal value divided by 2
        dec_val = Math.floor(dec_val / 2); // divides the decimal value by 2 and rounds down
        i++; // increments the index of the binaryNum array
    }
    console.log(binaryNum.reverse().join(''));
}

// Function to convert hexadecimal to octal
function hexToOct(hexVal) {
    // The length of the hexVal string is stored in the len variable
    let len = hexVal.length;
    // The base variable is set to 1
    let base = 1;
    // The dec_val variable is set to 0
    let dec_val = 0;
    // A for loop is used to iterate through each character in the hexVal string
    for (let i = len - 1; i >= 0; i--) {
        // If the character is a number, the dec_val variable is updated with the decimal value of the hex value
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal.charCodeAt(i) - 48) * base;
            base = base * 16;
            // If the character is a letter, the dec_val variable is updated with the decimal value of the hex value
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (hexVal.charCodeAt(i) - 55) * base;
            base = base * 16;
        }
    }
    // The octalNum array is declared
    let octalNum = [];
    // The i variable is set to 0
    let i = 0;
    // A while loop is used to convert the decimal value to octal
    while (dec_val !== 0) {
        octalNum[i] = dec_val % 8;
        dec_val = Math.floor(dec_val / 8);
        i++;
    }
    console.log(octalNum.reverse().join(''));
}

// Function to convert a number from one base to another
function convert(num, base1, base2) {
    let decimal = 0; // This will be the final decimal value.
    let power = 1; // This will be the power of the current digit.
    let len = num.length; // This is the length of the input number.
    for (let i = len - 1; i >= 0; i--) { // Iterate through the input number in reverse order.
        let digit; // This will be the decimal value of the current digit.
        if (num[i] >= '0' && num[i] <= '9') { // If the current digit is a number...
            digit = num[i].charCodeAt(0) - 48; // Convert the digit to its decimal value.
        } else if (num[i] >= 'A' && num[i] <= 'Z') { // If the current digit is a capital letter...
            digit = num[i].charCodeAt(0) - 65 + 10; // Convert the digit to its decimal value.
        } else if (num[i] >= 'a' && num[i] <= 'z') { // If the current digit is a lowercase letter...
            digit = num[i].charCodeAt(0) - 97 + 10; // Convert the digit to its decimal value.
        } else { // If the current digit is not a number or letter...
            console.log("Invalid input!"); // Print an error message.
            return; // Exit the function.
        }
        if (digit >= base1) { // If the current digit is greater than or equal to the input base...
            console.log("Invalid input!"); // Print an error message.
            return; // Exit the function.
        }
        decimal += digit * power; // Add the decimal value of the current digit to the final decimal value.
        power *= base1; // Increase the power of the current digit.
    }
    // Convert the decimal number to the given base.
    let result = "";
    // Convert the decimal number to the indicated base.
    // The result is a string of digits, including leading zeros.
    // The base argument must be between 2 and 36.
    function numberToString(n, base) {
        let result = "";  // A string to hold the result.
        let sign = "";
        if (n < 0) {  // Handle negative numbers.
            sign = "-";
            n = -n;
        }
        // Convert the number to the indicated base.
        // Repeatedly divide by the base and determine the remainder.
        // This remainder is the next most significant digit.
        do {
            result = String(n % base) + result;
            n = Math.floor(n / base);
        } while (n > 0);
        return sign + result;
    }
    console.log("Result: " + result);
}

// Example usage of the conversion functions
let decimalNumber = 42;
let hexValue = "2A";
let binaryValue = 11010;
let octalValue = 52;

decToBin(decimalNumber);
decToOct(decimalNumber);
decToHex(decimalNumber);
binToDec(binaryValue);
octToDec(octalValue);
hexToDec(hexValue);
binToOct(binaryValue);
binToHex(binaryValue);
octToBin(octalValue);
octToHex(octalValue);
hexToBin(hexValue);
hexToOct(hexValue);

convert("1A", 16, 2); // Convert hex "1A" to binary
convert("1101", 2, 10); // Convert binary "1101" to decimal
convert("57", 8, 16); // Convert octal "57" to hexadecimal