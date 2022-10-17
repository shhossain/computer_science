#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    char* array_point;
    char c1;
    int count = 0, alp = 0, digt = 0, spcchr = 0, oth = 0;
    char string_array[100];
    string str1;

    cout << "\n\n Count the letters, spaces, numbers and other characters:\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Enter a string: ";
    getline(cin, str1);
    cout << endl;
    strcpy_s(string_array, str1.c_str());
    for (array_point = string_array; *array_point != '\0'; array_point++)
    {
        c1 = *array_point;
        count++;
        if (isalpha(c1))
        {
            alp++;
        }
        else
            if (isdigit(c1))
            {
                digt++;
            }
            else
                if (isspace(c1))
                {
                    spcchr++;
                }
                else
                {
                    oth++;;
                }
    }
    cout << " The number of characters in the string is: " << count << endl;
    cout << " The number of alphabets are: " << alp << endl;
    cout << " The number of digits are: " << digt << endl;
    cout << " The number of spaces are: " << spcchr << endl;
    cout << " The number of other characters are: " << oth << endl << endl;
    return 0;
}