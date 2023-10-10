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
6. hexToDec(String hexVal) - Convert hexadecimal to decimal
7. binToOct(int n) - Convert binary to octal
8. binToHex(int n) - Convert binary to hexadecimal
9. octToBin(int n) - Convert octal to binary
10. octToHex(int n) - Convert octal to hexadecimal
11. hexToBin(String hexVal) - Convert hexadecimal to binary
12. hexToOct(String hexVal) - Convert hexadecimal to octal

There is a special function:
* convert(String num, int base1, int base2) 
This function convert any base from one to another 
aka universal converter

*/


public class NumberConverter {

    // Function to convert decimal to binary
    public static void decToBin(int n) {
        // define an array of int with 32 elements
        int[] binaryNum = new int[32];
        // define an int variable i and set it to 0
        int i = 0;
        // while n is greater than 0
        while (n > 0) {
            // set the current element of binaryNum to the remainder of n / 2
            binaryNum[i] = n % 2;
            // divide n by 2 (integer division)
            n = n / 2;
            // increment i by 1
            i++;
        }
        // for each element in binaryNum starting at the end
        for (int j = i - 1; j >= 0; j--) {
            // print the current element in binaryNum
            System.out.print(binaryNum[j]);
        }
        // print a new line
        System.out.println();
    }

    // Function to convert decimal to octal
    public static void decToOct(int n) {
        // create an array of ints to hold the octal digits
        int[] octalNum = new int[100];
        // create a variable to hold the number of octal digits
        int i = 0;
        // while n is not equal to zero, do the following
        while (n != 0) {
            // set the ith element of the octalNum array to the remainder of n / 8
            octalNum[i] = n % 8;
            // set n to n / 8
            n = n / 8;
            // increment i
            i++;
        }
        // for each element in the octalNum array, starting from the last one
        for (int j = i - 1; j >= 0; j--) {
            // print the jth element in the array
            System.out.print(octalNum[j]);
        }
        // print a new line
        System.out.println();
    }

    // Function to convert decimal to hexadecimal
    public static void decToHex(int n) {
        // Initialize a char array to store the hexadecimal digits
        char[] hexaDeciNum = new char[100];
        // Initialize a variable to keep track of the position in the array
        int i = 0;
        // Repeatedly divide the decimal number by 16 and store the remainder in the array
        while (n != 0) {
            // Initialize a variable to store the remainder
            int temp = 0;
            // Find the remainder of the number divided by 16
            temp = n % 16;
            // If the remainder is less than 10, store the remainder as a character in the array
            if (temp < 10) {
                hexaDeciNum[i] = (char) (temp + 48);
                i++;
            } else {
                // If the remainder is greater than 10, store the remainder as a character in the array
                hexaDeciNum[i] = (char) (temp + 55);
                i++;
            }
            // Divide the number by 16
            n = n / 16;
        }
        // Print each character in the array in reverse order
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(hexaDeciNum[j]);
        }
        System.out.println();
    }

    // Function to convert binary to decimal
    public static void binToDec(int n) {
        // initialize decimal to 0
        int decimal = 0;
        // initialize power to 1
        int power = 1;
        // repeat until n is 0
        while (n > 0) {
            // get the last digit
            int lastDigit = n % 10;
            // add lastDigit times power to decimal
            decimal += lastDigit * power;
            // multiply power by 2
            power *= 2;
            // divide n by 10
            n /= 10;
        }
        // print decimal
        System.out.println(decimal);
    }

    // Function to convert octal to decimal
    public static void octToDec(int n) {
        int decimal = 0;
        int power = 1;
        while (n > 0) {
            // Get the last digit of n
            int lastDigit = n % 10;
            // Add lastDigit * power to decimal
            decimal += lastDigit * power;
            // Multiply power by 8
            power *= 8;
            // Remove the last digit from n
            n /= 10;
        }
        System.out.println(decimal);
    }

    // Function to convert hexadecimal to decimal
    public static void hexToDec(String hexVal) {
        // Get length of the hexadecimal string
        int len = hexVal.length();
        // Initialize the base value for the hexadecimal number
        int base = 1;
        // Initialize the decimal value
        int dec_val = 0;
        // Iterate from the end of the string to the beginning
        for (int i = len - 1; i >= 0; i--) {
            // If the character at the current index is a digit
            if (hexVal.charAt(i) >= '0' && hexVal.charAt(i) <= '9') {
                // Add the value of the current digit to the decimal value
                dec_val += (hexVal.charAt(i) - 48) * base;
                // Multiply the base value by 16
                base = base * 16;
            }
            // If the character at the current index is a letter
            else if (hexVal.charAt(i) >= 'A' && hexVal.charAt(i) <= 'F') {
                // Add the value of the current digit to the decimal value
                dec_val += (hexVal.charAt(i) - 55) * base;
                // Multiply the base value by 16
                base = base * 16;
            }
        }
        // Print the decimal value
        System.out.println(dec_val);
    }

    // Function to convert binary to octal
    public static void binToOct(int n) {
        int octal = 0;
        // Convert binary to decimal
        int decimal = 0;
        int power = 1;
        // Repeat until there are no more digits to process
        while (n > 0) {

            // Get the last digit
            int lastDigit = n % 10;

            // Add the last digit to the decimal number
            decimal += lastDigit * power;

            // Move to the next power of 2
            power *= 2;

            // Remove the last digit
            n /= 10;
        }
        // Convert decimal to octal
        power = 1;
        while (decimal > 0) {// keep going until decimal is 0
            int lastDigit = decimal % 8; // get the last digit of decimal
            octal += lastDigit * power; // add last digit times power to octal
            power *= 10; // increase the power by a factor of 10
            decimal /= 8; // divide decimal by 8
        }
        System.out.println(octal);
    }

    // Function to convert binary to hexadecimal
    public static void binToHex(int n) {
        // convert binary to decimal

        // Set up a variable to hold the decimal value
        int decimal = 0;

        // Set up a variable to hold the power of 2. This starts at 1.
        int power = 1;

        // Loop through the binary number
        while (n > 0) {
            // Get the last digit of the binary number
            int lastDigit = n % 10;

            // Add the value of the last digit to the decimal value
            decimal += lastDigit * power;

            // Multiply the power of 2 by 2
            power *= 2;

            // Remove the last digit of the binary number
            n /= 10;
        }
        // Convert decimal to hexadecimal
        char[] hexaDeciNum = new char[100];
        int i = 0;
        // while the decimal number is not zero
        while (decimal != 0) {
            // define a temporary variable
            int temp = 0;
            // get the remainder of the decimal number divided by 16
            temp = decimal % 16;
            // if the remainder is less than 10
            if (temp < 10) {
                // add 48 to get the ASCII value of the remainder
                // and store it in the array
                hexaDeciNum[i] = (char) (temp + 48);
                // increment the index variable
                i++;
            } else {
                // add 55 to get the ASCII value of the remainder
                // and store it in the array
                hexaDeciNum[i] = (char) (temp + 55);
                // increment the index variable
                i++;
            }
            // divide the decimal number by 16
            decimal = decimal / 16;
        }
        // Print the hexadecimal number
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(hexaDeciNum[j]);
        }
        System.out.println();
    }

    // Function to convert octal to binary
    public static void octToBin(int n) {
        // Convert octal to decimal
        int decimal = 0;
        int power = 1;
        // Decimal number
        int decimal = 0;

        // Power of 8
        int power = 1;

        // Iterate through each digit
        while (n > 0) {
            // Get the last digit
            int lastDigit = n % 10;

            // Add the digit to the decimal number
            decimal += lastDigit * power;

            // Multiply the power by 8
            power *= 8;

            // Remove the last digit
            n /= 10;
        }
        // Convert decimal to binary
        // Create an array of 32 integers. Initialize them to 0.
        int[] binaryNum = new int[32];
        // Create a variable to keep track of the index of the array.
        int i = 0;
        // Convert the decimal number to binary.
        while (decimal > 0) {
            // Get the current binary digit.
            binaryNum[i] = decimal % 2;
            // Remove the current binary digit from the number.
            decimal = decimal / 2;
            // Increment the index of the array.
            i++;
        }
        // Print out binary number
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(binaryNum[j]);
        }
        System.out.println();
    }

    // Function to convert octal to hexadecimal
    public static void octToHex(int n) {
        // convert octal to decimal
        // Initialize decimal number to 0
        int decimal = 0;
        // Initialize power of 8 to 1
        int power = 1;
        // Loop through each digit
        while (n > 0) {
            // Get the last digit
            int lastDigit = n % 10;
            // Add last digit to decimal
            decimal += lastDigit * power;
            // Multiply power by 8
            power *= 8;
            // Remove the last digit from n
            n /= 10;
        }
        // convert decimal to hexadecimal
        // hexadecimal number
        char[] hexaDeciNum = new char[100];

        // counter for hexadecimal number array
        int i = 0;
        // While decimal value is not zero
while (decimal != 0) {
            // Create a temporary variable to store the remainder of the decimal value divided by 16
            int temp = 0;
            temp = decimal % 16;

            // If the remainder is less than 10, the character value is the remainder + 48
            if (temp < 10) {
                hexaDeciNum[i] = (char) (temp + 48);
                i++;
            }
            // Otherwise, the character value is the remainder + 55
            else {
                hexaDeciNum[i] = (char) (temp + 55);
                i++;
            }

            // Divide the decimal value by 16
            decimal = decimal / 16;
        }
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(hexaDeciNum[j]);
        }
        System.out.println();
    }

    // Function to convert hexadecimal to binary
    public static void hexToBin(String hexVal) {
        // Get the length of the hexadecimal number
        int len = hexVal.length();
        // Set the base to 1
        int base = 1;
        // Set the decimal value to 0
        int dec_val = 0;
        // Loop through the hexadecimal number
        for (int i = len - 1; i >= 0; i--) {
            // If the character is a number
            if (hexVal.charAt(i) >= '0' && hexVal.charAt(i) <= '9') {
                // Calculate the decimal value
                dec_val += (hexVal.charAt(i) - 48) * base;
                // Multiple the base by 16
                base = base * 16;
            // If the character is a letter
            } else if (hexVal.charAt(i) >= 'A' && hexVal.charAt(i) <= 'F') {
                // Calculate the decimal value
                dec_val += (hexVal.charAt(i) - 55) * base;
                // Multiple the base by 16
                base = base * 16;
            }
        }
        // Create an array to store the binary number
        int[] binaryNum = new int[32];
        // Set the index to 0
        int i = 0;
        // While the decimal value is greater than 0
        while (dec_val > 0) {
            // Store the remainder of the decimal value divided by 2 in the array
            binaryNum[i] = dec_val % 2;
            // Divide the decimal value by 2
            dec_val = dec_val / 2;
            // Increment the index
            i++;
        }
        // Loop through the array
        for (int j = i - 1; j >= 0; j--) {
            // Print the binary number
            System.out.print(binaryNum[j]);
        }
        // Print a new line
        System.out.println();
    }

    // Function to convert hexadecimal to octal
    public static void hexToOct(String hexVal) {
        // Get the length of the string
        int len = hexVal.length();
        // Set the base to 1
        int base = 1;
        // Set the decimal value to 0
        int dec_val = 0;
        // Iterate through the string from the end
        for (int i = len - 1; i >= 0; i--) {
            // Check if the character is a number
            if (hexVal.charAt(i) >= '0' && hexVal.charAt(i) <= '9') {
                // Add the digit to the decimal value
                dec_val += (hexVal.charAt(i) - 48) * base;
                // Increment the base by 16
                base = base * 16;
            } else if (hexVal.charAt(i) >= 'A' && hexVal.charAt(i) <= 'F') {
                // Add the digit to the decimal value
                dec_val += (hexVal.charAt(i) - 55) * base;
                // Increment the base by 16
                base = base * 16;
            }
        }
        // Create an array to store the octal digits
        int[] octalNum = new int[100];
        // Set the index to 0
        int i = 0;
        // While the decimal value is not 0
        while (dec_val != 0) {
            // Add the remainder of the decimal value divided by 8 to the array
            octalNum[i] = dec_val % 8;
            // Divide the decimal value by 8
            dec_val = dec_val / 8;
            // Increment the index
            i++;
        }
        // Iterate through the array from the end
        for (int j = i - 1; j >= 0; j--) {
            // Print the octal digits
            System.out.print(octalNum[j]);
        }
        // Print a new line
        System.out.println();
    }

    // Function to convert a number from one base to another
    public static void convert(String num, int base1, int base2) {
        // Convert the input number from the first base to a decimal number
        // Convert a string of digits to an integer
        int decimal = 0;    // the integer value of the string
        int power = 1;      // the power of 10 for the current digit
        int len = num.length(); // the number of digits in the string

        // Convert to decimal
        for (int i = len - 1; i >= 0; i--) {
            // Get the current digit
            int digit;
            if (num.charAt(i) >= '0' && num.charAt(i) <= '9') {
                digit = num.charAt(i) - '0';
            } else if (num.charAt(i) >= 'A' && num.charAt(i) <= 'Z') {
                digit = num.charAt(i) - 'A' + 10;
            } else if (num.charAt(i) >= 'a' && num.charAt(i) <= 'z') {
                digit = num.charAt(i) - 'a' + 10;
            } else {
                System.out.println("Invalid input!");
                return;
            }
            // Check that the digit is valid
            if (digit >= base1) {
                System.out.println("Invalid input!");
                return;
            }
            // Add the digit to the decimal value
            decimal += digit * power;
            // Calculate the next power of the base
            power *= base1;
        }
        // Convert the decimal number to the second base
        StringBuilder result = new StringBuilder();
        while (decimal > 0) {
            int digit = decimal % base2; // Get the rightmost digit
            if (digit < 10) {
                result.insert(0, (char) (digit + '0'));
            } else {
                result.insert(0, (char) (digit - 10 + 'A'));
            }
            decimal = decimal / base2; // Remove the rightmost digit
        }
        System.out.println("Result: " + result);
    }

    public static void main(String[] args) {
        // Example usage of the conversion functions
        int decimalNumber = 42; // A decimal number
        String hexValue = "2A"; // A hexadecimal number
        int binaryValue = 11010; // A binary number
        int octalValue = 52; // An octal number

        decToBin(decimalNumber); //Convert decimal to binary.
        decToOct(decimalNumber); //Convert decimal to octal.
        decToHex(decimalNumber); //Convert decimal to hexadecimal.
        binToDec(binaryValue); //Convert binary to decimal.
        octToDec(octalValue); //Convert octal to decimal.
        hexToDec(hexValue); //Convert hexadecimal to decimal.
        binToOct(binaryValue); //Convert binary to octal.
        binToHex(binaryValue); //Convert binary to hexadecimal.
        octToBin(octalValue); //Convert octal to binary.
        octToHex(octalValue); //Convert octal to hexadecimal.
        hexToBin(hexValue); //Convert hexadecimal to binary.
        hexToOct(hexValue); //Convert hexadecimal to octal.

        convert("1A", 16, 2); // Convert hex "1A" to binary
        convert("1101", 2, 10); // Convert binary "1101" to decimal
        convert("57", 8, 16); // Convert octal "57" to hexadecimal
    }
}
