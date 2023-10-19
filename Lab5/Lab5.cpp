// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

// Cipher we are using in this assignment
std::vector<char> cypher = { 'V', 'F', 'X', 'B', 'L' ,'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D',
                             'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };

char translate(char c)
{   // Capital letter
    if (c >= 65 && c <= 90)
    {
        return cypher[c - 65];
    }
    // Lower case letter
    else if (c >= 97 && c <= 122)
    {
        // converts the number to upper case number
        char upperCaseLetter = c - 32;
        // get upper case code
        char upperCaseCode = cypher[upperCaseLetter - 65];
        // convert code back to lower case
        return upperCaseCode + 32;
    }
    else
    {
        // Not letter
        return c;
    }
}

int main()
{
    std::string text;
    std::cout << "Input text to cypher: ";
    getline(std::cin, text);

    for (char& c : text)
    {
        c = translate(c);
    }

    std::cout << "Encodes Message: " << text << "..." << std::endl;

    return 0;
}