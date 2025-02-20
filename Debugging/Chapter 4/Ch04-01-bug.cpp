// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 1/22/2025
// Desc: Uses the modulus operator to determine if a number is odd or even. If the number is evenly divisible by 2, it is an even number. A remainder indicates it is odd.
// Time: Less than 5 minutes.

#include <iostream>
using namespace std;

int bug7()
{
    int number;

    cout << "Enter an integer and I will tell you if it\n";
    cout << "is odd or even. ";
    cin  >> number;

    if (number % 2 == 0)
        cout << number << " is even.\n";
    else
        cout << number << " is odd.\n";
    return 0;
}
