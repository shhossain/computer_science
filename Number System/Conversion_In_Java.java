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
        int[] binaryNum = new int[32];
        int i = 0;
        while (n > 0) {
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(binaryNum[j]);
        }
        System.out.println();
    }

    // Function to convert decimal to octal
    public static void decToOct(int n) {
        int[] octalNum = new int[100];
        int i = 0;
        while (n != 0) {
            octalNum[i] = n % 8;
            n = n / 8;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(octalNum[j]);
        }
        System.out.println();
    }

    // Function to convert decimal to hexadecimal
    public static void decToHex(int n) {
        char[] hexaDeciNum = new char[100];
        int i = 0;
        while (n != 0) {
            int temp = 0;
            temp = n % 16;
            if (temp < 10) {
                hexaDeciNum[i] = (char) (temp + 48);
                i++;
            } else {
                hexaDeciNum[i] = (char) (temp + 55);
                i++;
            }
            n = n / 16;
        }
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(hexaDeciNum[j]);
        }
        System.out.println();
    }

    // Function to convert binary to decimal
    public static void binToDec(int n) {
        int decimal = 0;
        int power = 1;
        while (n > 0) {
            int lastDigit = n % 10;
            decimal += lastDigit * power;
            power *= 2;
            n /= 10;
        }
        System.out.println(decimal);
    }

    // Function to convert octal to decimal
    public static void octToDec(int n) {
        int decimal = 0;
        int power = 1;
        while (n > 0) {
            int lastDigit = n % 10;
            decimal += lastDigit * power;
            power *= 8;
            n /= 10;
        }
        System.out.println(decimal);
    }

    // Function to convert hexadecimal to decimal
    public static void hexToDec(String hexVal) {
        int len = hexVal.length();
        int base = 1;
        int dec_val = 0;
        for (int i = len - 1; i >= 0; i--) {
            if (hexVal.charAt(i) >= '0' && hexVal.charAt(i) <= '9') {
                dec_val += (hexVal.charAt(i) - 48) * base;
                base = base * 16;
            } else if (hexVal.charAt(i) >= 'A' && hexVal.charAt(i) <= 'F') {
                dec_val += (hexVal.charAt(i) - 55) * base;
                base = base * 16;
            }
        }
        System.out.println(dec_val);
    }

    // Function to convert binary to octal
    public static void binToOct(int n) {
        int octal = 0;
        int decimal = 0;
        int power = 1;
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
        System.out.println(octal);
    }

    // Function to convert binary to hexadecimal
    public static void binToHex(int n) {
        int decimal = 0;
        int power = 1;
        while (n > 0) {
            int lastDigit = n % 10;
            decimal += lastDigit * power;
            power *= 2;
            n /= 10;
        }
        char[] hexaDeciNum = new char[100];
        int i = 0;
        while (decimal != 0) {
            int temp = 0;
            temp = decimal % 16;
            if (temp < 10) {
                hexaDeciNum[i] = (char) (temp + 48);
                i++;
            } else {
                hexaDeciNum[i] = (char) (temp + 55);
                i++;
            }
            decimal = decimal / 16;
        }
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(hexaDeciNum[j]);
        }
        System.out.println();
    }

    // Function to convert octal to binary
    public static void octToBin(int n) {
        int decimal = 0;
        int power = 1;
        while (n > 0) {
            int lastDigit = n % 10;
            decimal += lastDigit * power;
            power *= 8;
            n /= 10;
        }
        int[] binaryNum = new int[32];
        int i = 0;
        while (decimal > 0) {
            binaryNum[i] = decimal % 2;
            decimal = decimal / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(binaryNum[j]);
        }
        System.out.println();
    }

    // Function to convert octal to hexadecimal
    public static void octToHex(int n) {
        int decimal = 0;
        int power = 1;
        while (n > 0) {
            int lastDigit = n % 10;
            decimal += lastDigit * power;
            power *= 8;
            n /= 10;
        }
        char[] hexaDeciNum = new char[100];
        int i = 0;
        while (decimal != 0) {
            int temp = 0;
            temp = decimal % 16;
            if (temp < 10) {
                hexaDeciNum[i] = (char) (temp + 48);
                i++;
            } else {
                hexaDeciNum[i] = (char) (temp + 55);
                i++;
            }
            decimal = decimal / 16;
        }
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(hexaDeciNum[j]);
        }
        System.out.println();
    }

    // Function to convert hexadecimal to binary
    public static void hexToBin(String hexVal) {
        int len = hexVal.length();
        int base = 1;
        int dec_val = 0;
        for (int i = len - 1; i >= 0; i--) {
            if (hexVal.charAt(i) >= '0' && hexVal.charAt(i) <= '9') {
                dec_val += (hexVal.charAt(i) - 48) * base;
                base = base * 16;
            } else if (hexVal.charAt(i) >= 'A' && hexVal.charAt(i) <= 'F') {
                dec_val += (hexVal.charAt(i) - 55) * base;
                base = base * 16;
            }
        }
        int[] binaryNum = new int[32];
        int i = 0;
        while (dec_val > 0) {
            binaryNum[i] = dec_val % 2;
            dec_val = dec_val / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(binaryNum[j]);
        }
        System.out.println();
    }

    // Function to convert hexadecimal to octal
    public static void hexToOct(String hexVal) {
        int len = hexVal.length();
        int base = 1;
        int dec_val = 0;
        for (int i = len - 1; i >= 0; i--) {
            if (hexVal.charAt(i) >= '0' && hexVal.charAt(i) <= '9') {
                dec_val += (hexVal.charAt(i) - 48) * base;
                base = base * 16;
            } else if (hexVal.charAt(i) >= 'A' && hexVal.charAt(i) <= 'F') {
                dec_val += (hexVal.charAt(i) - 55) * base;
                base = base * 16;
            }
        }
        int[] octalNum = new int[100];
        int i = 0;
        while (dec_val != 0) {
            octalNum[i] = dec_val % 8;
            dec_val = dec_val / 8;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(octalNum[j]);
        }
        System.out.println();
    }

    // Function to convert a number from one base to another
    public static void convert(String num, int base1, int base2) {
        int decimal = 0;
        int power = 1;
        int len = num.length();
        for (int i = len - 1; i >= 0; i--) {
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
            if (digit >= base1) {
                System.out.println("Invalid input!");
                return;
            }
            decimal += digit * power;
            power *= base1;
        }
        StringBuilder result = new StringBuilder();
        while (decimal > 0) {
            int digit = decimal % base2;
            if (digit < 10) {
                result.insert(0, (char) (digit + '0'));
            } else {
                result.insert(0, (char) (digit - 10 + 'A'));
            }
            decimal = decimal / base2;
        }
        System.out.println("Result: " + result);
    }

    public static void main(String[] args) {
        // Example usage of the conversion functions
        int decimalNumber = 42;
        String hexValue = "2A";
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
    }
}
