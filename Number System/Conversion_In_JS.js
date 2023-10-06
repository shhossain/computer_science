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
    let binaryNum = [];
    let i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = Math.floor(n / 2);
        i++;
    }
    console.log(binaryNum.reverse().join(''));
}

// Function to convert decimal to octal
function decToOct(n) {
    let octalNum = [];
    let i = 0;
    while (n !== 0) {
        octalNum[i] = n % 8;
        n = Math.floor(n / 8);
        i++;
    }
    console.log(octalNum.reverse().join(''));
}

// Function to convert decimal to hexadecimal
function decToHex(n) {
    let hexaDeciNum = [];
    let i = 0;
    while (n !== 0) {
        let temp = n % 16;
        if (temp < 10) {
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        i++;
        n = Math.floor(n / 16);
    }
    console.log(hexaDeciNum.reverse().join(''));
}

// Function to convert binary to decimal
function binToDec(n) {
    let decimal = 0;
    let power = 1;
    while (n > 0) {
        const lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n = Math.floor(n / 10);
    }
    console.log(decimal);
}

// Function to convert octal to decimal
function octToDec(n) {
    let decimal = 0;
    let power = 1;
    while (n > 0) {
        const lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n = Math.floor(n / 10);
    }
    console.log(decimal);
}

// Function to convert hexadecimal to decimal
function hexToDec(hexVal) {
    let len = hexVal.length;
    let base = 1;
    let dec_val = 0;
    for (let i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal.charCodeAt(i) - 48) * base;
            base = base * 16;
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (hexVal.charCodeAt(i) - 55) * base;
            base = base * 16;
        }
    }
    console.log(dec_val);
}

// Function to convert binary to octal
function binToOct(n) {
    let octal = 0;
    let decimal = 0;
    let power = 1;
    while (n > 0) {
        const lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n = Math.floor(n / 10);
    }
    power = 1;
    while (decimal > 0) {
        const lastDigit = decimal % 8;
        octal += lastDigit * power;
        power *= 10;
        decimal = Math.floor(decimal / 8);
    }
    console.log(octal);
}

// Function to convert binary to hexadecimal
function binToHex(n) {
    let decimal = 0;
    let power = 1;
    while (n > 0) {
        const lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n = Math.floor(n / 10);
    }
    let hexaDeciNum = [];
    let i = 0;
    while (decimal !== 0) {
        let temp = decimal % 16;
        if (temp < 10) {
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        i++;
        decimal = Math.floor(decimal / 16);
    }
    console.log(hexaDeciNum.reverse().join(''));
}

// Function to convert octal to binary
function octToBin(n) {
    let decimal = 0;
    let power = 1;
    while (n > 0) {
        const lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n = Math.floor(n / 10);
    }
    let binaryNum = [];
    let i = 0;
    while (decimal > 0) {
        binaryNum[i] = decimal % 2;
        decimal = Math.floor(decimal / 2);
        i++;
    }
    console.log(binaryNum.reverse().join(''));
}

// Function to convert octal to hexadecimal
function octToHex(n) {
    let decimal = 0;
    let power = 1;
    while (n > 0) {
        const lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n = Math.floor(n / 10);
    }
    let hexaDeciNum = [];
    let i = 0;
    while (decimal !== 0) {
        let temp = decimal % 16;
        if (temp < 10) {
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        i++;
        decimal = Math.floor(decimal / 16);
    }
    console.log(hexaDeciNum.reverse().join(''));
}

// Function to convert hexadecimal to binary
function hexToBin(hexVal) {
    let len = hexVal.length;
    let base = 1;
    let dec_val = 0;
    for (let i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal.charCodeAt(i) - 48) * base;
            base = base * 16;
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (hexVal.charCodeAt(i) - 55) * base;
            base = base * 16;
        }
    }
    let binaryNum = [];
    let i = 0;
    while (dec_val > 0) {
        binaryNum[i] = dec_val % 2;
        dec_val = Math.floor(dec_val / 2);
        i++;
    }
    console.log(binaryNum.reverse().join(''));
}

// Function to convert hexadecimal to octal
function hexToOct(hexVal) {
    let len = hexVal.length;
    let base = 1;
    let dec_val = 0;
    for (let i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal.charCodeAt(i) - 48) * base;
            base = base * 16;
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (hexVal.charCodeAt(i) - 55) * base;
            base = base * 16;
        }
    }
    let octalNum = [];
    let i = 0;
    while (dec_val !== 0) {
        octalNum[i] = dec_val % 8;
        dec_val = Math.floor(dec_val / 8);
        i++;
    }
    console.log(octalNum.reverse().join(''));
}

// Function to convert a number from one base to another
function convert(num, base1, base2) {
    let decimal = 0;
    let power = 1;
    let len = num.length;
    for (let i = len - 1; i >= 0; i--) {
        let digit;
        if (num[i] >= '0' && num[i] <= '9') {
            digit = num[i].charCodeAt(0) - 48;
        } else if (num[i] >= 'A' && num[i] <= 'Z') {
            digit = num[i].charCodeAt(0) - 65 + 10;
        } else if (num[i] >= 'a' && num[i] <= 'z') {
            digit = num[i].charCodeAt(0) - 97 + 10;
        } else {
            console.log("Invalid input!");
            return;
        }
        if (digit >= base1) {
            console.log("Invalid input!");
            return;
        }
        decimal += digit * power;
        power *= base1;
    }
    let result = "";
    while (decimal > 0) {
        let digit = decimal % base2;
        if (digit < 10) {
            result = String.fromCharCode(digit + 48) + result;
        } else {
            result = String.fromCharCode(digit - 10 + 65) + result;
        }
        decimal = Math.floor(decimal / base2);
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