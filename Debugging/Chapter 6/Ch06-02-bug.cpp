// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 1/28/2025
// Desc: This program uses a function that returns true or false.
// Time: Less than 5 minutes.

#include <iostream>
using namespace std;

// Function prototype
bool isEven(int);

/*******************************************************
 *                     isEven                          *
 * This Boolean function tests if the integer argument *
 * it receives is even or odd. It returns true if the  *
 * argument is even and false if it is odd.            *
 *******************************************************/
bool isEven(int number)
{
    if (number % 2 == 0)
        return true;   // The number is even if there's no remainder
    else
        return false;  // Otherwise, the number is odd
}

int bug14()
{
    int val;        // the value to be tested

    // Get a number from the user
    cout << "Enter an integer and I will tell you ";
    cout << "if it is even or odd: ";
    cin  >> val;

    // Indicate whether it is even or odd
    if (isEven(val))
        cout << val << " is even.\n";
    else
        cout << val << " is odd.\n";
    return 0;
}

