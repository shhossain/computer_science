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
    -- Create a table to hold the binary number
    local binaryNum = {}
    -- Loop through the steps of the algorithm
    local i = 1
    while n > 0 do
        -- Get the remainder of n/2 and add it to the table
        binaryNum[i] = n % 2
        -- Divide n by 2
        n = math.floor(n / 2)
        -- Increment i
        i = i + 1
    end
    -- Loop through the table backwards and print each element
    for j = #binaryNum, 1, -1 do
        io.write(binaryNum[j])
    end
    -- Add a newline at the end
    io.write("\n")
end

-- Function to convert decimal to octal
function decToOct(n)
    local octalNum = {}
    local i = 1
    -- This loop divides the input number by 8 until it is 0.
    -- The remainder of each division is stored in an array.
    while n ~= 0 do
        octalNum[i] = n % 8
        n = math.floor(n / 8)
        i = i + 1
    end
    -- This loop prints the octal number in reverse order.
    for j = #octalNum, 1, -1 do
        io.write(octalNum[j])
    end
    io.write("\n")
end

-- Function to convert decimal to hexadecimal
function decToHex(n)
    local hexaDeciNum = {} -- Create an empty table to store the hexadecimal number
    local i = 1 -- Set the index to 1
    -- Loop until n is 0
    while n ~= 0 do
        local temp = n % 16 -- Find the remainder of n / 16
        -- If the remainder is less than 10, store the ASCII value of the remainder plus 48 in the table
        if temp < 10 then
            hexaDeciNum[i] = string.char(temp + 48)
        -- Otherwise, store the ASCII value of the remainder plus 55 in the table
        else
            hexaDeciNum[i] = string.char(temp + 55)
        end
        i = i + 1 -- Increment the index by 1
        n = math.floor(n / 16) -- Divide n by 16 and round down
    end
    -- Loop through the table in reverse order and print the hexadecimal number
    for j = #hexaDeciNum, 1, -1 do
        io.write(hexaDeciNum[j])
    end
    io.write("\n")
end

-- Function to convert binary to decimal
function binToDec(n)
    local decimal = 0
    local power = 1

    -- Loop over the binary digits
    while n > 0 do
        -- n is the binary number to convert
        -- decimal is the decimal number being created
        -- power is the current power of 2
        local n = 101101
        local decimal = 0
        local power = 1
        -- repeat until all digits of n have been processed
        while n > 0 do
            -- extract the last digit from n
            local lastDigit = n % 10
            -- add the digit to decimal
            decimal = decimal + lastDigit * power
            -- update power of 2
            power = power * 2
            -- remove the last digit from n
            n = math.floor(n / 10)
        end
    end

    -- Return the decimal value
    print(decimal)
end

-- Function to convert octal to decimal
function octToDec(n)
    local decimal = 0 -- decimal number
    local power = 1 -- power of 8
    while n > 0 do -- loop while n is greater than 0
        local lastDigit = n % 10 -- get the last digit
        decimal = decimal + lastDigit * power -- add last digit times power to decimal
        power = power * 8 -- multiply power by 8
        n = math.floor(n / 10) -- divide n by 10 and round down
    end
    print(decimal) -- print decimal number
end

-- Function to convert hexadecimal to decimal
function hexToDec(hexVal)
    -- Get the length of the hex value
    local len = string.len(hexVal)
    -- Set the base value to 1
    local base = 1
    -- Set the decimal value to 0
    local dec_val = 0
    -- Loop through each character of the hex value
    for i = len, 1, -1 do
        -- Get the character code of the character
        local charCode = string.byte(hexVal, i)
        -- If the character code is 0-9
        if charCode >= 48 and charCode <= 57 then
            -- Get the decimal value of the character and add it to the decimal value
            dec_val = dec_val + (charCode - 48) * base
            -- Multiply the base by 16
            base = base * 16
        -- If the character code is A-F
        elseif charCode >= 65 and charCode <= 70 then
            -- Get the decimal value of the character and add it to the decimal value
            dec_val = dec_val + (charCode - 55) * base
            -- Multiply the base by 16
            base = base * 16
        end
    end
    -- Print the decimal value
    print(dec_val)
end

-- Function to convert binary to octal
function binToOct(n)
    local octal = 0
    local decimal = 0
    local power = 1
    -- convert binary to decimal
    while n > 0 do
        local lastDigit = n % 10
        decimal = decimal + lastDigit * power
        power = power * 2
        n = math.floor(n / 10)
    end
    -- convert decimal to octal
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
    -- Convert binary to decimal
    local decimal = 0
    local power = 1
    while n > 0 do
        local lastDigit = n % 10
        decimal = decimal + lastDigit * power
        power = power * 2
        n = math.floor(n / 10)
    end
    -- Convert decimal to hexadecimal
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
    -- Print hexadecimal
    for j = #hexaDeciNum, 1, -1 do
        io.write(hexaDeciNum[j])
    end
    io.write("\n")
end

-- Function to convert octal to binary
function octToBin(n)
    local decimal = 0 -- initialize decimal as 0
    local power = 1 -- initialize power as 1
    while n > 0 do -- while n is greater than 0
        local lastDigit = n % 10 -- take the last digit of n
        decimal = decimal + lastDigit * power -- add the last digit times the power to decimal
        power = power * 8 -- multiply power by 8
        n = math.floor(n / 10) -- divide n by 10 and take the floor
    end
    local binaryNum = {} -- initialize binaryNum as an empty table
    local i = 1 -- initialize i as 1
    while decimal > 0 do -- while decimal is greater than 0
        binaryNum[i] = decimal % 2 -- set the ith element of binaryNum to the last digit of decimal
        decimal = math.floor(decimal / 2) -- divide decimal by 2 and take the floor
        i = i + 1 -- increment i
    end
    for j = #binaryNum, 1, -1 do -- for each element in binaryNum in reverse
        io.write(binaryNum[j]) -- write the jth element of binaryNum
    end
    io.write("\n") -- write a newline
end

-- Function to convert octal to hexadecimal
function octToHex(n)
    -- Convert octal to decimal
    local decimal = 0
    local power = 1
    while n > 0 do
        local lastDigit = n % 10
        decimal = decimal + lastDigit * power
        power = power * 8
        n = math.floor(n / 10)
    end

    -- Convert decimal to hexadecimal
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
    -- Get the length of the hex value
    local len = string.len(hexVal)
    -- Create a variable to store the base value
    local base = 1
    -- Create a variable to store the decimal value
    local dec_val = 0
    -- Loop through the hex value starting with the last character
    for i = len, 1, -1 do
        -- Get the ASCII code of the character
        local charCode = string.byte(hexVal, i)
        -- If the ASCII code is between 0 and 9 (ASCII codes 48 to 57)
        if charCode >= 48 and charCode <= 57 then
            -- Add the decimal value of the character to the decimal value
            dec_val = dec_val + (charCode - 48) * base
            -- Multiply the base value by 16
            base = base * 16
        -- If the ASCII code is between A and F (ASCII codes 65 to 70)
        elseif charCode >= 65 and charCode <= 70 then
            -- Add the decimal value of the character to the decimal value
            dec_val = dec_val + (charCode - 55) * base
            -- Multiply the base value by 16
            base = base * 16
        end
    end
    -- Create a table to store the binary number
    local binaryNum = {}
    -- Create a variable to store the index of the table
    local i = 1
    -- Loop while the decimal value is greater than 0
    while dec_val > 0 do
        -- Add the remainder of the decimal value divided by 2 to the table
        binaryNum[i] = dec_val % 2
        -- Update the decimal value
        dec_val = math.floor(dec_val / 2)
        -- Increment the index of the table
        i = i + 1
    end
    -- Loop through the binary number table starting with the last element
    for j = #binaryNum, 1, -1 do
        -- Print the binary number
        io.write(binaryNum[j])
    end
    -- Print a newline

-- Function to convert hexadecimal to octal
function hexToOct(hexVal)
    -- Get the length of the string
    local len = string.len(hexVal)
    -- Initialize the base to 1 and the decimal value to 0
    local base = 1
    local dec_val = 0
    -- Loop through each character in the string
    for i = len, 1, -1 do
        -- Get the character code of the current character
        local charCode = string.byte(hexVal, i)
        -- If the character is a number (0-9), convert to decimal
        if charCode >= 48 and charCode <= 57 then
            dec_val = dec_val + (charCode - 48) * base
            base = base * 16
        -- If the character is a letter (A-F), convert to decimal
        elseif charCode >= 65 and charCode <= 70 then
            dec_val = dec_val + (charCode - 55) * base
            base = base * 16
        end
    end
    -- Convert the decimal value to octal
    local octalNum = {}
    local i = 1
    while dec_val ~= 0 do
        octalNum[i] = dec_val % 8
        dec_val = math.floor(dec_val / 8)
        i = i + 1
    end
    -- Print the octal number
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
