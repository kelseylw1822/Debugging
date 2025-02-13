// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 1/22/2025
// Desc: determines a client's total buffet luncheon cost when the number of guests and the per person cost are known.
// Time: Less than 5 minutes.


#include <iostream>
#include <iomanip>
using namespace std;

int bug9()
{
    const double ADULT_MEAL_COST = 8.25; // Child meal cost = 60% of this

   int    numAdults,                 // Guests ages 12 and older
           numChildren;               // Guests ages 2-11
    double adultMealTotal,            // Total for all adult meals
           childMealTotal,            // Total for all child meals
           totalMealCost;

    // Get number of adults and children attending
    cout << "This program calculates total cost "
        << "for a buffet luncheon.\n";
    cout << "Enter the number of adult guests (age 12 and over): ";
    cin  >> numAdults;
    cout << "Enter the number of child guests (age 2-11): ";
    cin  >> numChildren;

    // Calculate meal costs
    adultMealTotal = numAdults * ADULT_MEAL_COST;
    childMealTotal = numChildren * ADULT_MEAL_COST * .60;
    totalMealCost  = adultMealTotal + childMealTotal;

    // Display total meal cost
    cout << fixed << showpoint << setprecision(2);
    cout << "\nTotal buffet cost is $" << totalMealCost << endl;
    return 0;
}
