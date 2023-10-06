'''
Author: SK Jiyad
Github: https://github.com/ZRX-SIGMA
Date: 2021-10-09

This program contains functions to convert a number from one base to another.
The bases supported are decimal, binary, octal and hexadecimal.

The functions are:
1. decimal_to_binary(decimal) - Convert decimal to binary
2. decimal_to_octal(decimal) - Convert decimal to octal
3. decimal_to_hexadecimal(decimal) - Convert decimal to hexadecimal
4. binary_to_decimal(binary)- Convert binary to decimal
5. octal_to_decimal(octal) - Convert octal to decimal
6. hexadecimal_to_decimal(hexadecimal) - Convert hexadecimal to decimal
7. binary_to_octal(binary) - Convert binary to octal
8. binary_to_hexadecimal(binary) - Convert binary to hexadecimal
9. octal_to_binary(octal) - Convert octal to binary
10. octal_to_hexadecimal(octal) - Convert octal to hexadecimal
11. hexadecimal_to_binary(hexadecimal) - Convert hexadecimal to binary
12. hexadecimal_to_octal(hexadecimal) - Convert hexadecimal to octal

The main function is convert_number() which is used for user interaction.
These conversions are done using the inbuilt functions bin(), oct() and hex().
The program can also be imported as a module and the functions can be used in other programs.

The program can be run from the command line as follows:
python3 Conversion_In_Python1.py
'''

# Function to convert decimal to binary
def decimal_to_binary(decimal):
    try:
        return bin(decimal)
    except (ValueError, TypeError):
        return None
# Function to convert decimal to octal
def decimal_to_octal(decimal):
    try:
        return oct(decimal)
    except (ValueError, TypeError):
        return None
# Function to convert decimal to hexadecimal
def decimal_to_hexadecimal(decimal):
    try:
        return hex(decimal)
    except (ValueError, TypeError):
        return None
# Function to convert binary to decimal
def binary_to_decimal(binary):
    try:
        return int(binary, 2)
    except (ValueError, TypeError):
        return None
# Function to convert octal to decimal
def octal_to_decimal(octal):
    try:
        return int(octal, 8)
    except (ValueError, TypeError):
        return None
# Function to convert hexadecimal to decimal
def hexadecimal_to_decimal(hexadecimal):
    try:
        return int(hexadecimal, 16)
    except (ValueError, TypeError):
        return None
# Function to convert binary to octal
def binary_to_octal(binary):
    try:
        decimal = binary_to_decimal(binary)
        return oct(decimal)
    except (ValueError, TypeError):
        return None

# Function to convert binary to hexadecimal
def binary_to_hexadecimal(binary):
    try:
        decimal = binary_to_decimal(binary)
        return hex(decimal)
    except (ValueError, TypeError):
        return None

# Function to convert octal to binary
def octal_to_binary(octal):
    try:
        decimal = octal_to_decimal(octal)
        return bin(decimal)
    except (ValueError, TypeError):
        return None

# Function to convert octal to hexadecimal
def octal_to_hexadecimal(octal):
    try:
        decimal = octal_to_decimal(octal)
        return hex(decimal)
    except (ValueError, TypeError):
        return None

# Function to convert hexadecimal to binary
def hexadecimal_to_binary(hexadecimal):
    try:
        decimal = hexadecimal_to_decimal(hexadecimal)
        return bin(decimal)
    except (ValueError, TypeError):
        return None

# Function to convert hexadecimal to octal
def hexadecimal_to_octal(hexadecimal):
    try:
        decimal = hexadecimal_to_decimal(hexadecimal)
        return oct(decimal)
    except (ValueError, TypeError):
        return None

# Main function for user interaction
def convert_number():
    print("Number Conversion Tool")
    print("1. Decimal to Binary")
    print("2. Decimal to Octal")
    print("3. Decimal to Hexadecimal")
    print("4. Binary to Decimal")
    print("5. Octal to Decimal")
    print("6. Hexadecimal to Decimal")
    print("7. Binary to Octal")
    print("8. Binary to Hexadecimal")
    print("9. Octal to Binary")
    print("10. Octal to Hexadecimal")
    print("11. Hexadecimal to Binary")
    print("12. Hexadecimal to Octal")
    print("0. Quit")

    while True:
        choice = input("Enter your choice (0-12): ")

        if choice == "0":
            print("Exiting the program.")
            break

        if choice in ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"]:
            num = input("Enter the number: ")

            if choice == "1":
                result = decimal_to_binary(int(num))
                print(f"Binary: {result}")
            elif choice == "2":
                result = decimal_to_octal(int(num))
                print(f"Octal: {result}")
            elif choice == "3":
                result = decimal_to_hexadecimal(int(num))
                print(f"Hexadecimal: {result}")
            elif choice == "4":
                result = binary_to_decimal(num)
                print(f"Decimal: {result}")
            elif choice == "5":
                result = octal_to_decimal(num)
                print(f"Decimal: {result}")
            elif choice == "6":
                result = hexadecimal_to_decimal(num)
                print(f"Decimal: {result}")
            elif choice == "7":
                result = binary_to_octal(num)
                print(f"Octal: {result}")
            elif choice == "8":
                result = binary_to_hexadecimal(num)
                print(f"Hexadecimal: {result}")
            elif choice == "9":
                result = octal_to_binary(num)
                print(f"Binary: {result}")
            elif choice == "10":
                result = octal_to_hexadecimal(num)
                print(f"Hexadecimal: {result}")
            elif choice == "11":
                result = hexadecimal_to_binary(num)
                print(f"Binary: {result}")
            elif choice == "12":
                result = hexadecimal_to_octal(num)
                print(f"Octal: {result}")
        else:
            print("Invalid choice. Please enter a valid option (0-12).")

if __name__ == "__main__":
    convert_number()
