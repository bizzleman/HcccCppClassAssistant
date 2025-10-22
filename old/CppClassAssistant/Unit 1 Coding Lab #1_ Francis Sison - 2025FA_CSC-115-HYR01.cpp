/******************************************************************************

    In this lab, you need to create a C++ program that calculates the employee's 
total annual pay by multiplying the employee's pay amount by the number of pay 
periods in a year and storing the result in the annualPay variable. Display the 
total annual pay on the screen. 

Task Senario
    Suppose an employee gets paid every two weeks and earns $2,200 each pay period. 
    In a year, the employee gets paid 26 times. Write a program that defines the 
    following variables:

    payAmount: This variable will hold the amount of pay the employee earns each pay 
                period. Initialize the variable with 2200.0. 
    payPeriods: This variable will hold the number of pay periods per year. 
                Initialize the variable with 26. 
    annualPay: This variable will hold the employee's total annual pay, which will 
                be calculated. 


*******************************************************************************/

#include <iostream>
using namespace std;

int main() 
{
    // Variables
    double payAmount = 2200.0; // Amount earned per pay period
    int payPeriods = 26;       // Number of pay periods in a year
    double annualPay;          // Total annual pay

    // Calculate total annual pay
    annualPay = payAmount * payPeriods;

    // Display the result
    cout << "The total annual pay is: $" << annualPay << endl;

    return 0;
}