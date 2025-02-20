// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 2/19/2025
// Desc: This program demonstrates how an overloaded constructor that accepts an argument can be invoked for multiple objects when an array of objects is created.
// Time: Less than 5 minutes.

#include <iostream>
#include <iomanip>
#include <vector>
#include "Circle.h"         // Circle class declaration file
using namespace std;

int main()
{
    // Define a vector of  Circle objects. Use an initialization list
    // to call the 1-argument constructor for the objects.
    vector<Circle> circles = {0.0, 2.0, 2.5, 56.0, 75.0, 5.0};

    // Display the area of each object
    cout << "\nHere are the areas of the " << circles.size()
         << " circles.\n";
    double average = 0.0;
    for (Circle x : circles) {
      cout << "circle " << setw(8)<< fixed << setprecision(2) << x.findArea() << endl;
        average += x.findArea();
    }
    average /= circles.size();

    cout << "The average area of these circles is: " << fixed << setprecision(2) << average << endl;
    return 0;
}
