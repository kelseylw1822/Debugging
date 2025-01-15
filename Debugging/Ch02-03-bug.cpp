// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 1/15/2025
// Desc: shows variable initialization.
// Time: Less than 5 minutes.


// This program shows variable initialization.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string month = "February";    // month is initialized to "February"
    int year;                     // year is not initialized
    int days  = 29;               // days is initialized to 29

    year = 1776;                  // Now year is assigned a value

    cout << "In "   << year << " " << month
         << " had " << days << " days.\n";

    return 0;
}

