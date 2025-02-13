// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 02/04/2025
// Desc: This program demonstrates a simple class with member functions defined outside the class declaration.
// Time: Less than 5 minutes.

#include <iostream>
#include <cmath>
using namespace std;

// Circle class declaration
class Circle
{  private:
      double radius;             // This is a member variable.

   public:
      void  setRadius(double);   // These are just prototypes
      double calcArea();         // for the member functions.
};

// The member function implementation section follows. It contains the
// actual function definitions for the Circle class member functions.

/******************************************************************
 *                      Circle::setRadius                         *
 * This function copies the argument passed into the parameter to *
 * the private member variable radius.                            *
 ******************************************************************/
void Circle::setRadius(double r)
{    radius = r;
}

/******************************************************************
 *                        Circle::calcArea                        *
 * This function calculates and returns the Circle object's area. *
 * It does not need any parameters because it already has access  *
 * to the member variable radius.                                 *
 ******************************************************************/
double Circle::calcArea()
{    return 3.14 * pow(radius, 2);
}

/******************************************************************
 *                            main                                *
 ******************************************************************/
int bug16()
{
    Circle circle1,          // Define 2 Circle objects
           circle2;

    circle1.setRadius(1);    // This sets circle1's radius to 1.0
    circle2.setRadius(2.5);  // This sets circle2's radius to 2.5

    // Get and display each circle's area
    cout << "The area of circle1 is " << circle1.calcArea() << endl;
    cout << "The area of circle2 is " << circle2.calcArea() << endl;

    return 0;
}

