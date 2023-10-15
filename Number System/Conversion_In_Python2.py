'''
Author: SK Jiyad
Github: https://github.com/ZRX-SIGMA
Date: 2023-10-07

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
No inbuilt functions(int,bin,hex) are used for the conversions.
The program can also be imported as a module and the functions can be used in other programs.

The program can be run from the command line as follows:
python3 Conversion_In_Python1.py
'''

# Function to convert decimal to binary
def decimal_to_binary(decimal):
    try:
        binary = ""
        if decimal == 0:
            return "0b0"
        while decimal > 0:
            binary = str(decimal % 2) + binary
            decimal = decimal // 2
        return "0b" + binary
    except (ValueError, KeyError, TypeError):
        return None

# Function to convert decimal to octal
def decimal_to_octal(decimal):
    try:
        octal = ""
        if decimal == 0:
            return "0o0"
        while decimal > 0:
            octal = str(decimal % 8) + octal
            decimal = decimal // 8
        return "0o" + octal
    except (ValueError, KeyError, TypeError):
        return None

# Function to convert decimal to hexadecimal
def decimal_to_hexadecimal(decimal):
    try:
        hexadecimal = ""
        if decimal == 0:
            return "0x0"
        while decimal > 0:
            remainder = decimal % 16
            if remainder < 10:
                hexadecimal = str(remainder) + hexadecimal
            else:
                hexadecimal = chr(ord('A') + remainder - 10) + hexadecimal
            decimal = decimal // 16
        return "0x" + hexadecimal
    except (ValueError, KeyError, TypeError):
        return None

# Function to convert binary to decimal
def binary_to_decimal(binary):
    try:
        if binary.startswith("0b"):
            binary = binary[2:]  # Remove '0b' prefix
        decimal = 0
        for digit in binary:
            if digit not in ('0', '1'):
                raise ValueError("Invalid binary digit: {}".format(digit))
            decimal = decimal * 2 + int(digit)
        return decimal
    except ValueError:
        return None


# Function to convert octal to decimal
def octal_to_decimal(octal):
    try:
        if octal.startswith("0o"):
            octal = octal[2:]  # Remove '0o' prefix
        decimal = 0
        for digit in octal:
            if not '0' <= digit <= '7':
                raise ValueError("Invalid octal digit: {}".format(digit))
            decimal = decimal * 8 + int(digit)
        return decimal
    except ValueError:
        return None

# Function to convert hexadecimal to decimal
def hexadecimal_to_decimal(hexadecimal):
    try:
        if hexadecimal.startswith("0x"):
            hexadecimal = hexadecimal[2:]  # Remove '0x' prefix
        decimal = 0
        for digit in hexadecimal:
            if not ('0' <= digit <= '9' or 'A' <= digit <= 'F' or 'a' <= digit <= 'f'):
                raise ValueError("Invalid hexadecimal digit: {}".format(digit))
            decimal = decimal * 16 + int(digit, 16)
        return decimal
    except ValueError:
        return None

# Function to convert binary to octal
def binary_to_octal(binary):
    try:
        if binary.startswith("0b"):
            binary = binary[2:]  # Remove '0b' prefix
        octal = ""
        while len(binary) % 3 != 0:
            binary = '0' + binary  # Pad with leading zeros to make it a multiple of 3
        for i in range(0, len(binary), 3):
            octal_digit = binary[i:i + 3]
            decimal_value = int(octal_digit, 2)
            octal += str(oct(decimal_value))[2:]  # Convert to octal without the '0o' prefix
        return "0o" + octal
    except ValueError:
        return None

# Function to convert binary to hexadecimal
def binary_to_hexadecimal(binary):
    try:
        if binary.startswith("0b"):
            binary = binary[2:]  # Remove '0b' prefix
        hexadecimal = ""
        while len(binary) % 4 != 0:
            binary = '0' + binary  # Pad with leading zeros to make it a multiple of 4
        for i in range(0, len(binary), 4):
            hex_digit = binary[i:i + 4]
            decimal_value = int(hex_digit, 2)
            hexadecimal += format(decimal_value, 'X')  # Convert to uppercase hexadecimal
        return "0x" + hexadecimal
    except ValueError:
        return None

# Function to convert octal to binary
def octal_to_binary(octal):
    try:
        if octal.startswith("0o"):
            octal = octal[2:]  # Remove '0o' prefix
        binary = ""
        for digit in octal:
            if not '0' <= digit <= '7':
                raise ValueError("Invalid octal digit: {}".format(digit))
            binary += format(int(digit, 8), '03b')  # Convert to 3-bit binary with leading zeros
        return "0b" + binary
    except ValueError:
        return None

# Function to convert octal to hexadecimal
def octal_to_hexadecimal(octal):
    try:
        if octal.startswith("0o"):
            octal = octal[2:]  # Remove '0o' prefix
        hexadecimal = ""
        while len(octal) % 3 != 0:
            octal = '0' + octal  # Pad with leading zeros to make it a multiple of 3
        for i in range(0, len(octal), 3):
            octal_group = octal[i:i + 3]
            decimal_value = int(octal_group, 8)
            hexadecimal += format(decimal_value, 'X')  # Convert to uppercase hexadecimal
        return "0x" + hexadecimal
    except ValueError:
        return None

# Function to convert hexadecimal to binary
def hexadecimal_to_binary(hexadecimal):
    try:
        if hexadecimal.startswith("0x"):
            hexadecimal = hexadecimal[2:]  # Remove '0x' prefix
        binary = ""
        for digit in hexadecimal:
            if not ('0' <= digit <= '9' or 'A' <= digit <= 'F' or 'a' <= digit <= 'f'):
                raise ValueError("Invalid hexadecimal digit: {}".format(digit))
            binary += format(int(digit, 16), '04b')  # Convert to 4-bit binary with leading zeros
        return "0b" + binary
    except ValueError:
        return None

# Function to convert hexadecimal to octal
def hexadecimal_to_octal(hexadecimal):
    try:
        if hexadecimal.startswith("0x"):
            hexadecimal = hexadecimal[2:]  # Remove '0x' prefix
        octal = ""
        while len(hexadecimal) % 3 != 0:
            hexadecimal = '0' + hexadecimal  # Pad with leading zeros to make it a multiple of 3
        for i in range(0, len(hexadecimal), 3):
            hexadecimal_group = hexadecimal[i:i + 3]
            decimal_value = int(hexadecimal_group, 16)
            octal += format(decimal_value, 'o')  # Convert to octal
        return "0o" + octal
    except ValueError:
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
