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
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;
}

// Function to convert decimal to octal
void decToOct(int n) {
    int octalNum[100];
    int i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << octalNum[j];
    }
    cout << endl;
}

// Function to convert decimal to hexadecimal
void decToHex(int n) {
    char hexaDeciNum[100];
    int i = 0;
    while (n != 0) {
        int temp = 0;
        temp = n % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        } else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << hexaDeciNum[j];
    }
    cout << endl;
}

// Function to convert binary to decimal
void binToDec(int n) {
    int decimal = 0, power = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n /= 10;
    }
    cout << decimal << endl;
}

// Function to convert octal to decimal
void octToDec(int n) {
    int decimal = 0, power = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n /= 10;
    }
    cout << decimal << endl;
}

// Function to convert hexadecimal to decimal
void hexToDec(string hexVal) {
    int len = hexVal.length();
    int base = 1;
    int dec_val = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal[i] - 48) * base;
            base = base * 16;
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (hexVal[i] - 55) * base;
            base = base * 16;
        }
    }
    cout << dec_val << endl;
}

// Function to convert binary to octal
void binToOct(int n) {
    int octal = 0, decimal = 0, power = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n /= 10;
    }
    power = 1;
    while (decimal > 0) {
        int lastDigit = decimal % 8;
        octal += lastDigit * power;
        power *= 10;
        decimal /= 8;
    }
    cout << octal << endl;
}

// Function to convert binary to hexadecimal
void binToHex(int n) {
    int decimal = 0, power = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 2;
        n /= 10;
    }
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
    for (int j = i - 1; j >= 0; j--) {
        cout << hexaDeciNum[j];
    }
    cout << endl;
}

// Function to convert octal to binary
void octToBin(int n) {
    int decimal = 0, power = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n /= 10;
    }
    int binaryNum[32];
    int i = 0;
    while (decimal > 0) {
        binaryNum[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;
}

// Function to convert octal to hexadecimal
void octToHex(int n) {
    int decimal = 0, power = 1;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;
        power *= 8;
        n /= 10;
    }
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
    for (int j = i - 1; j >= 0; j--) {
        cout << hexaDeciNum[j];
    }
    cout << endl;
}

// Function to convert hexadecimal to binary
void hexToBin(string hexVal) {
    int len = hexVal.length();
    int base = 1;
    int dec_val = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal[i] - 48) * base;
            base = base * 16;
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (hexVal[i] - 55) * base;
            base = base * 16;
        }
    }
    int binaryNum[32];
    int i = 0;
    while (dec_val > 0) {
        binaryNum[i] = dec_val % 2;
        dec_val = dec_val / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;
}

// Function to convert hexadecimal to octal
void hexToOct(string hexVal) {
    int len = hexVal.length();
    int base = 1;
    int dec_val = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (hexVal[i] - 48) * base;
            base = base * 16;
        } else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (hexVal[i] - 55) * base;
            base = base * 16;
        }
    }
    int octalNum[100];
    int i = 0;
    while (dec_val != 0) {
        octalNum[i] = dec_val % 8;
        dec_val = dec_val / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << octalNum[j];
    }
    cout << endl;
}

// Function to convert a number from one base to another
void convert(string num, int base1, int base2) {
    int decimal = 0, power = 1, len = num.length();
    for (int i = len - 1; i >= 0; i--) {
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
        if (digit >= base1) {
            cout << "Invalid input!" << endl;
            return;
        }
        decimal += digit * power;
        power *= base1;
    }
    string result = "";
    while (decimal > 0) {
        int digit = decimal % base2;
        if (digit < 10) {
            result = char(digit + '0') + result;
        } else {
            result = char(digit - 10 + 'A') + result;
        }
        decimal /= base2;
    }
    cout << "Result: " << result << endl;
}

int main() {
    // Example usage of the conversion functions
    int decimalNumber = 42;
    string hexValue = "2A";
    int binaryValue = 11010;
    int octalValue = 52;
    
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
    
    return 0;
}
