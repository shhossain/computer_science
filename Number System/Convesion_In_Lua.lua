/*
Author: Sarthak Sharma 
Github: https://github.com/Sarthak950
Website: https://sarthak950.netlify.app/

This program contains functions to convert a number from one base to another.
The bases supported are decimal, binary, octal and hexadecimal.

The functions are:
decToBin(n) - Convert decimal to binary
decToOct(n) - Convert decimal to octal
decToHex(n) - Convert decimal to hexadecimal
binToDec(n) - Convert binary to decimal
octToDec(n) - Convert octal to decimal
hexToDec(hexVal) - Convert hexadecimal to decimal
binToOct(n) - Convert binary to octal
binToHex(n) - Convert binary to hexadecimal
octToBin(n) - Convert octal to binary
octToHex(n) - Convert octal to hexadecimal
hexToBin(hexVal) - Convert hexadecimal to binary
hexToOct(hexVal) - Convert hexadecimal to octal

There is also a function to convert a number from one base to another.
* convert(num, base1, base2) - Convert a number from one base to another
aka universal converter

*/


-- Function to convert decimal to binary
function decToBin(n)
    local binaryNum = {}
    local i = 1
    while n > 0 do
        binaryNum[i] = n % 2
        n = math.floor(n / 2)
        i = i + 1
    end
    for j = #binaryNum, 1, -1 do
        io.write(binaryNum[j])
    end
    io.write("\n")
end

-- Function to convert decimal to octal
function decToOct(n)
    local octalNum = {}
    local i = 1
    while n ~= 0 do
        octalNum[i] = n % 8
        n = math.floor(n / 8)
        i = i + 1
    end
    for j = #octalNum, 1, -1 do
        io.write(octalNum[j])
    end
    io.write("\n")
end

-- Function to convert decimal to hexadecimal
function decToHex(n)
    local hexaDeciNum = {}
    local i = 1
    while n ~= 0 do
        local temp = n % 16
        if temp < 10 then
            hexaDeciNum[i] = string.char(temp + 48)
        else
            hexaDeciNum[i] = string.char(temp + 55)
        end
        i = i + 1
        n = math.floor(n / 16)
    end
    for j = #hexaDeciNum, 1, -1 do
        io.write(hexaDeciNum[j])
    end
    io.write("\n")
end

-- Function to convert binary to decimal
function binToDec(n)
    local decimal = 0
    local power = 1
    while n > 0 do
        local lastDigit = n % 10
        decimal = decimal + lastDigit * power
        power = power * 2
        n = math.floor(n / 10)
    end
    print(decimal)
end

-- Function to convert octal to decimal
function octToDec(n)
    local decimal = 0
    local power = 1
    while n > 0 do
        local lastDigit = n % 10
        decimal = decimal + lastDigit * power
        power = power * 8
        n = math.floor(n / 10)
    end
    print(decimal)
end

-- Function to convert hexadecimal to decimal
function hexToDec(hexVal)
    local len = string.len(hexVal)
    local base = 1
    local dec_val = 0
    for i = len, 1, -1 do
        local charCode = string.byte(hexVal, i)
        if charCode >= 48 and charCode <= 57 then
            dec_val = dec_val + (charCode - 48) * base
            base = base * 16
        elseif charCode >= 65 and charCode <= 70 then
            dec_val = dec_val + (charCode - 55) * base
            base = base * 16
        end
    end
    print(dec_val)
end

-- Function to convert binary to octal
function binToOct(n)
    local octal = 0
    local decimal = 0
    local power = 1
    while n > 0 do
        local lastDigit = n % 10
        decimal = decimal + lastDigit * power
        power = power * 2
        n = math.floor(n / 10)
    end
    power = 1
    while decimal > 0 do
        local lastDigit = decimal % 8
        octal = octal + lastDigit * power
        power = power * 10
        decimal = math.floor(decimal / 8)
    end
    print(octal)
end

-- Function to convert binary to hexadecimal
function binToHex(n)
    local decimal = 0
    local power = 1
    while n > 0 do
        local lastDigit = n % 10
        decimal = decimal + lastDigit * power
        power = power * 2
        n = math.floor(n / 10)
    end
    local hexaDeciNum = {}
    local i = 1
    while decimal ~= 0 do
        local temp = decimal % 16
        if temp < 10 then
            hexaDeciNum[i] = string.char(temp + 48)
        else
            hexaDeciNum[i] = string.char(temp + 55)
        end
        i = i + 1
        decimal = math.floor(decimal / 16)
    end
    for j = #hexaDeciNum, 1, -1 do
        io.write(hexaDeciNum[j])
    end
    io.write("\n")
end

-- Function to convert octal to binary
function octToBin(n)
    local decimal = 0
    local power = 1
    while n > 0 do
        local lastDigit = n % 10
        decimal = decimal + lastDigit * power
        power = power * 8
        n = math.floor(n / 10)
    end
    local binaryNum = {}
    local i = 1
    while decimal > 0 do
        binaryNum[i] = decimal % 2
        decimal = math.floor(decimal / 2)
        i = i + 1
    end
    for j = #binaryNum, 1, -1 do
        io.write(binaryNum[j])
    end
    io.write("\n")
end

-- Function to convert octal to hexadecimal
function octToHex(n)
    local decimal = 0
    local power = 1
    while n > 0 do
        local lastDigit = n % 10
        decimal = decimal + lastDigit * power
        power = power * 8
        n = math.floor(n / 10)
    end
    local hexaDeciNum = {}
    local i = 1
    while decimal ~= 0 do
        local temp = decimal % 16
        if temp < 10 then
            hexaDeciNum[i] = string.char(temp + 48)
        else
            hexaDeciNum[i] = string.char(temp + 55)
        end
        i = i + 1
        decimal = math.floor(decimal / 16)
    end
    for j = #hexaDeciNum, 1, -1 do
        io.write(hexaDeciNum[j])
    end
    io.write("\n")
end

-- Function to convert hexadecimal to binary
function hexToBin(hexVal)
    local len = string.len(hexVal)
    local base = 1
    local dec_val = 0
    for i = len, 1, -1 do
        local charCode = string.byte(hexVal, i)
        if charCode >= 48 and charCode <= 57 then
            dec_val = dec_val + (charCode - 48) * base
            base = base * 16
        elseif charCode >= 65 and charCode <= 70 then
            dec_val = dec_val + (charCode - 55) * base
            base = base * 16
        end
    end
    local binaryNum = {}
    local i = 1
    while dec_val > 0 do
        binaryNum[i] = dec_val % 2
        dec_val = math.floor(dec_val / 2)
        i = i + 1
    end
    for j = #binaryNum, 1, -1 do
        io.write(binaryNum[j])
    end
    io.write("\n")
end

-- Function to convert hexadecimal to octal
function hexToOct(hexVal)
    local len = string.len(hexVal)
    local base = 1
    local dec_val = 0
    for i = len, 1, -1 do
        local charCode = string.byte(hexVal, i)
        if charCode >= 48 and charCode <= 57 then
            dec_val = dec_val + (charCode - 48) * base
            base = base * 16
        elseif charCode >= 65 and charCode <= 70 then
            dec_val = dec_val + (charCode - 55) * base
            base = base * 16
        end
    end
    local octalNum = {}
    local i = 1
    while dec_val ~= 0 do
        octalNum[i] = dec_val % 8
        dec_val = math.floor(dec_val / 8)
        i = i + 1
    end
    for j = #octalNum, 1, -1 do
        io.write(octalNum[j])
    end
    io.write("\n")
end

-- Function to convert a number from one base to another
function convert(num, base1, base2)
    local decimal = 0
    local power = 1
    local len = string.len(num)
    for i = len, 1, -1 do
        local charCode = string.byte(num, i)
        local digit
        if charCode >= 48 and charCode <= 57 then
            digit = charCode - 48
        elseif charCode >= 65 and charCode <= 90 then
            digit = charCode - 65 + 10
        elseif charCode >= 97 and charCode <= 122 then
            digit = charCode - 97 + 10
        else
            print("Invalid input!")
            return
        end
        if digit >= base1 then
            print("Invalid input!")
            return
        end
        decimal = decimal + digit * power
        power = power * base1
    end
    local result = ""
    while decimal > 0 do
        local digit = decimal % base2
        if digit < 10 then
            result = string.char(digit + 48) .. result
        else
            result = string.char(digit - 10 + 65) .. result
        end
        decimal = math.floor(decimal / base2)
    end
    print("Result: " .. result)
end

-- Example usage of the conversion functions
local decimalNumber = 42
local hexValue = "2A"
local binaryValue = 11010
local octalValue = 52

decToBin(decimalNumber)
decToOct(decimalNumber)
decToHex(decimalNumber)
binToDec(binaryValue)
octToDec(octalValue)
hexToDec(hexValue)
binToOct(binaryValue)
binToHex(binaryValue)
octToBin(octalValue)
octToHex(octalValue)
hexToBin(hexValue)
hexToOct(hexValue)

convert("1A", 16, 2) -- Convert hex "1A" to binary
convert("1101", 2, 10) -- Convert binary "1101" to decimal
convert("57", 8, 16) -- Convert octal "57" to hexadecimal
