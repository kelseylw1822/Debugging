// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 1/22/2025
// Desc: This program produces a loan amortization table for the Central Mountain Credit Union.
// Time: Less than 5 minutes.

// bug: try an interest rate of 0 and see what happens
#include <iostream>
#include <iomanip>
#include <cmath>          // Needed for the pow function
using namespace std;

int bug12()
{
    double loan,             // Loan amount
           rate,             // Annual interest rate
           moInterestRate,   // Monthly interest rate
           years,            // Years of loan
           balance,          // Monthly balance
           term,             // Used to calculate payment
           payment,          // Monthly payment
           numPayments;      // Number of payments

    // Get loan information
    cout << "Loan amount: $";
    cin  >> loan;
    cout << "Annual interest rate (entered as a decimal): ";
    cin  >> rate;
    cout << "Years of loan: ";
    cin  >> years;

    // Calculate monthly payment
    numPayments = 12 * years;
    moInterestRate = rate / 12.0;
    if (moInterestRate == 0)
    {
        payment = loan / numPayments;
    }
    else
    {
        term = pow((1 + moInterestRate), numPayments);
        payment = (loan * moInterestRate * term) / (term - 1.0);
    }

    // Display monthly payment
    cout << fixed << showpoint << setprecision(2);
    cout << "Monthly payment: $" << payment << endl;

    // Display report header
    cout << endl;
    cout << setw(5)  << "Month"     << setw(10) << "Interest";
    cout << setw(10) << "Principal" << setw(9)  << "Balance" << endl;
    cout << "----------------------------------\n";

    balance = loan;       // Remaining balance starts out as full loan amount

   // Produce a listing for each month
   for (int month = 1; month <= numPayments; month++)
    {
        double moInterest,          // Amount of pmt that pays interest
               principal;           // Amount of pmt that lowers the balance

        // Calculate amount paid for this month's interest and principal
        moInterest = moInterestRate * balance;  // Calculate interest first
        if (month != numPayments)               // If not the final month
            principal = payment - moInterest;   // rest of pmt goes to principal

        else                                    // It's the last month so
        {    principal = balance;                // pay exact final balance
            payment = balance + moInterest;
        }
        // Calculate new loan balance          // Only principal reduces the
        balance -= principal;                  // balance, not the whole pmt

        // Display this month's payment figures
        cout << setw(4)  << month     << setw(10) << moInterest;
        cout << setw(10) << principal << setw(10) << balance << endl;
    }
    return 0;
}
