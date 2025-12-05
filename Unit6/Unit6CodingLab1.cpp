/*
In this lab, you need to create a C++ program that will give you an output of the listed item below. 

Task Scenario
The cost to become a member of a fitness center is as follows: 
(a) the senior citizens discount is 30%; 
(b) if the membership is bought and paid for 12 or more months, the discount is 15%; and 
(c) if more than five personal training sessions are bought and paid for, the discount on each session is 20%. 
Write a menu-driven program that determines the cost of a new membership. 
Your program must contain a function that displays the general information about the fitness center and its charges, 
a function to get all of the necessary information to determine the membership cost, 
and a function to determine the membership cost. Use appropriate parameters to pass information in and out of a function. 
(Do not use any global variables.) 
*/
#include <iostream>
using namespace std;

void displayInfo() {
    cout << "\nSenior citizen discount: 30%\n";
    cout << "12 or more months discount: 15%\n";
    cout << "More than 5 sessions discount: 20%\n\n";
}

double computeCost(int senior, int months, int sessions, double rate, double sessionRate) {
    double membershipCost = rate * months;
    double trainingCost = sessionRate * sessions;

    if (senior == 1) {
        membershipCost = membershipCost * 0.70;
    }
    if (months >= 12) {
        membershipCost = membershipCost * 0.85;
    }
    if (sessions > 5) {
        trainingCost = trainingCost * 0.80;
    }

    return membershipCost + trainingCost;
}

int main() {
    int choice = 0;

    while (choice != 2) {
        cout << "1. Display Fitness Center Info\n";
        cout << "2. Calculate Membership Cost\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            displayInfo();
        }
    }

    int senior, months, sessions;
    double rate, sessionRate;

    cout << "Enter monthly membership rate: ";
    cin >> rate;

    cout << "Enter session rate: ";
    cin >> sessionRate;

    cout << "Is the customer a senior? (1=yes, 0=no): ";
    cin >> senior;

    cout << "Enter number of months: ";
    cin >> months;

    cout << "Enter number of sessions: ";
    cin >> sessions;

    double total = computeCost(senior, months, sessions, rate, sessionRate);

    cout << "Total Membership Cost: $" << total << endl;

    return 0;
}
