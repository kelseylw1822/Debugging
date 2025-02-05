// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 1/16/2025
// Desc: prints a character from its ASCII code.
// Time: Less than 5 minutes.

// This program prints a character from its ASCII code.
#include <iostream>
using namespace std;

int bug6()
{
    int number = 65;

    // Display the value of the number variable
    cout << number << endl;

    // Needs a type cast to display the value of number
    // converted to the char data type
    cout << static_cast<char>(number) << endl;
    return 0;
}
