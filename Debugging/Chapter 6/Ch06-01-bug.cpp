// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 1/28/2025
// Desc: This program demonstrates a function with a parameter.
// Time: Less than 5 minutes.

#include <iostream>
using namespace std;

// Function prototype
void displayValue(int);

/********************************************
 *               displayValue               *
 *  This function uses an integer parameter *
 *  whose value is displayed.               *
 ********************************************/
void displayValue(int num)
{
    cout << "The value is " << num << endl;
}

int bug13()
{
    cout << "I am passing several values to displayValue.\n";
    displayValue(5);          // Call displayValue with argument 5
    displayValue(10);         // Call displayValue with argument 10
    displayValue(2);          // Call displayValue with argument 2
    displayValue(16);         // Call displayValue with argument 16
    cout << "Now I am back in main.\n";
    return 0;
}


