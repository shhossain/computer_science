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
    const binaryNum: number[] = [];
    let i: number = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = Math.floor(n / 2);
        i++;
    }
    for (let j = i - 1; j >= 0; j--) {
        console.log(binaryNum[j]);
    }
    console.log();
}

// Function to convert decimal to octal
function decToOct(n: number): void {
    const octalNum: number[] = [];
    let i: number = 0;
    while (n !== 0) {
        octalNum[i] = n % 8;
        n = Math.floor(n / 8);
        i++;
    }
    for (let j = i - 1; j >= 0; j--) {
        console.log(octalNum[j]);
    }
    console.log();
}

// Function to convert decimal to hexadecimal
function decToHex(n: number): void {
    const hexaDeciNum: string[] = [];
    let i: number = 0;
    while (n !== 0) {
        const temp: number = n % 16;
        if (temp < 10) {
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        i++;
        n = Math.floor(n / 16);
    }
    for (let j = i - 1; j >= 0; j--) {
        console.log(hexaDeciNum[j]);
    }
    console.log();
}

// Function to convert binary to decimal
function binToDec(n: number): void {
    let decimal: number = 0;
    let power: number = 1;
    while (n > 0) {
        const lastDigit: number = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n = Math.floor(n / 10);
    }
    console.log(decimal);
    console.log();
}

// Function to convert octal to decimal
function octToDec(n: number): void {
    let decimal: number = 0;
    let power: number = 1;
    while (n > 0) {
        const lastDigit: number = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n = Math.floor(n / 10);
    }
    console.log(decimal);
    console.log();
}

// Function to convert hexadecimal to decimal
function hexToDec(hexVal: string): void {
    const len: number = hexVal.length;
    let base: number = 1;
    let dec_val: number = 0;
    for (let i = len - 1; i >= 0; i--) {
        const charCode: number = hexVal.charCodeAt(i);
        if (charCode >= 48 && charCode <= 57) {
            dec_val += (charCode - 48) * base;
            base = base * 16;
        } else if (charCode >= 65 && charCode <= 70) {
            dec_val += (charCode - 55) * base;
            base = base * 16;
        }
    }
    console.log(dec_val);
    console.log();
}

// Function to convert binary to octal
function binToOct(n: number): void {
    let octal: number = 0;
    let decimal: number = 0;
    let power: number = 1;
    while (n > 0) {
        const lastDigit: number = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n = Math.floor(n / 10);
    }
    power = 1;
    while (decimal > 0) {
        const lastDigit: number = decimal % 8;
        octal += lastDigit * power;
        power *= 10;
        decimal = Math.floor(decimal / 8);
    }
    console.log(octal);
    console.log();
}

// Function to convert binary to hexadecimal
function binToHex(n: number): void {
    let decimal: number = 0;
    let power: number = 1;
    while (n > 0) {
        const lastDigit: number = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n = Math.floor(n / 10);
    }
    const hexaDeciNum: string[] = [];
    let i: number = 0;
    while (decimal !== 0) {
        const temp: number = decimal % 16;
        if (temp < 10) {
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        i++;
        decimal = Math.floor(decimal / 16);
    }
    for (let j = i - 1; j >= 0; j--) {
        console.log(hexaDeciNum[j]);
    }
    console.log();
}

// Function to convert octal to binary
function octToBin(n: number): void {
    let decimal: number = 0;
    let power: number = 1;
    while (n > 0) {
        const lastDigit: number = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n = Math.floor(n / 10);
    }
    const binaryNum: number[] = [];
    let i: number = 0;
    while (decimal > 0) {
        binaryNum[i] = decimal % 2;
        decimal = Math.floor(decimal / 2);
        i++;
    }
    for (let j = i - 1; j >= 0; j--) {
        console.log(binaryNum[j]);
    }
    console.log();
}

// Function to convert octal to hexadecimal
function octToHex(n: number): void {
    let decimal: number = 0;
    let power: number = 1;
    while (n > 0) {
        const lastDigit: number = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n = Math.floor(n / 10);
    }
    const hexaDeciNum: string[] = [];
    let i: number = 0;
    while (decimal !== 0) {
        const temp: number = decimal % 16;
        if (temp < 10) {
            hexaDeciNum[i] = String.fromCharCode(temp + 48);
        } else {
            hexaDeciNum[i] = String.fromCharCode(temp + 55);
        }
        i++;
        decimal = Math.floor(decimal / 16);
    }
    for (let j = i - 1; j >= 0; j--) {
        console.log(hexaDeciNum[j]);
    }
    console.log();
}

// Function to convert hexadecimal to binary
function hexToBin(hexVal: string): void {
    const len: number = hexVal.length;
    let base: number = 1;
    let dec_val: number = 0;
    for (let i = len - 1; i >= 0; i--) {
        const charCode: number = hexVal.charCodeAt(i);
        if (charCode >= 48 && charCode <= 57) {
            dec_val += (charCode - 48) * base;
            base = base * 16;
        } else if (charCode >= 65 && charCode <= 70) {
            dec_val += (charCode - 55) * base;
            base = base * 16;
        }
    }
    const binaryNum: number[] = [];
    let i: number = 0;
    while (dec_val > 0) {
        binaryNum[i] = dec_val % 2;
        dec_val = Math.floor(dec_val / 2);
        i++;
    }
    for (let j = i - 1; j >= 0; j--) {
        console.log(binaryNum[j]);
    }
    console.log();
}

// Function to convert hexadecimal to octal
function hexToOct(hexVal: string): void {
    const len: number = hexVal.length;
    let base: number = 1;
    let dec_val: number = 0;
    for (let i = len - 1; i >= 0; i--) {
        const charCode: number = hexVal.charCodeAt(i);
        if (charCode >= 48 && charCode <= 57) {
            dec_val += (charCode - 48) * base;
            base = base * 16;
        } else if (charCode >= 65 && charCode <= 70) {
            dec_val += (charCode - 55) * base;
            base = base * 16;
        }
    }
    const octalNum: number[] = [];
    let i: number = 0;
    while (dec_val !== 0) {
        octalNum[i] = dec_val % 8;
        dec_val = Math.floor(dec_val / 8);
        i++;
    }
    for (let j = i - 1; j >= 0; j--) {
        console.log(octalNum[j]);
    }
    console.log();
}

// Function to convert a number from one base to another
function convert(num: string, base1: number, base2: number): void {
    let decimal: number = 0;
    let power: number = 1;
    const len: number = num.length;
    for (let i = len - 1; i >= 0; i--) {
        const charCode: number = num.charCodeAt(i);
        let digit: number;
        if (charCode >= 48 && charCode <= 57) {
            digit = charCode - 48;
        } else if (charCode >= 65 && charCode <= 90) {
            digit = charCode - 65 + 10;
        } else if (charCode >= 97 && charCode <= 122) {
            digit = charCode - 97 + 10;
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
    let result: string = "";
    while (decimal > 0) {
        const digit: number = decimal % base2;
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
const decimalNumber: number = 42;
const hexValue: string = "2A";
const binaryValue: number = 11010;
const octalValue: number = 52;

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
