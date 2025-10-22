/*
In this lab, you need to create a C++ program that will give you an output of the listed item below. 

Task Scenario: Write a program that calculates the balance of a savings account at the end of a period of time. 
It should ask the user for the annual interest rate, the starting balance, and the number of months that have passed since the account was established. 
A loop should then iterate once for every month, performing the following: 

Ask the user for the amount deposited into the account during the month. (Do not accept negative numbers.) This amount should be added to the balance. 
Ask the user for the amount withdrawn from the account during the month. (Do not accept negative numbers.) This amount should be subtracted from the balance. 
Calculate the monthly interest. The monthly interest rate is the annual interest rate divided by 12. Multiply the monthly interest rate by the balance, and add the result to the balance. 
After the last iteration, the program should display the ending balance, the total amount of deposits, the total amount of withdrawals, and the total interest earned. 

Note: 
If a negative balance is calculated at any point, a message should be displayed indicating the account has been closed and the loop should terminate.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double annualInterestRate, startingBalance;
    int numberOfMonths;

    // Get user input
    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> annualInterestRate;
    cout << "Enter the starting balance: ";
    cin >> startingBalance;
    cout << "Enter the number of months since the account was established: ";
    cin >> numberOfMonths;

    double monthlyInterestRate = annualInterestRate / 12 / 100;
    double balance = startingBalance;
    double totalDeposits = 0.0;
    double totalWithdrawals = 0.0;
    double totalInterestEarned = 0.0;

    for (int month = 1; month <= numberOfMonths; ++month) {
        double deposit, withdrawal;

        // Get deposit amount
        cout << "Month " << month << " - Enter amount deposited: ";
        cin >> deposit;
        while (deposit < 0) {
            cout << "Deposit cannot be negative. Please enter again: ";
            cin >> deposit;
        }
        balance += deposit;
        totalDeposits += deposit;

        // Get withdrawal amount
        cout << "Month " << month << " - Enter amount withdrawn: ";
        cin >> withdrawal;
        while (withdrawal < 0) {
            cout << "Withdrawal cannot be negative. Please enter again: ";
            cin >> withdrawal;
        }
        balance -= withdrawal;
        totalWithdrawals += withdrawal;

        // Check for negative balance
        if (balance < 0) {
            cout << "Account has been closed due to negative balance." << endl;
            break;
        }

        // Calculate monthly interest
        double monthlyInterest = balance * monthlyInterestRate;
        balance += monthlyInterest;
        totalInterestEarned += monthlyInterest;
    }

    // Display results
    cout << fixed << setprecision(2);
    cout << "Ending balance: $" << balance << endl;
    cout << "Total deposits: $" << totalDeposits << endl;
    cout << "Total withdrawals: $" << totalWithdrawals << endl;
    cout << "Total interest earned: $" << totalInterestEarned << endl;

    return 0;
}
