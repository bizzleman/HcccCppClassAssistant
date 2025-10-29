/*
Create a daily step tracker program
    track the number of steps they take each day
    - use for loop
    - for each day ask user to enter how many steps
    - ask user how may days does it  want to be tracked
    - use a variable called totalSteps to keep a running total
    - after loop finishes calculate the average
    - display the total, average, highest, and lowest


#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter the number of days to track: ";
    cin >> days;

    int totalSteps = 0;
    int highestSteps = 0;
    int lowestSteps = INT_MAX;

    for (int i = 1; i <= days; i++) {
        int dailySteps;
        cout << "Enter steps for day " << i << ": ";
        cin >> dailySteps;

        totalSteps += dailySteps; // totalSteps = totalSteps + dailySteps

        if (dailySteps > highestSteps) {
            highestSteps = dailySteps;
        }
        if (dailySteps < lowestSteps) {
            lowestSteps = dailySteps;
        }
    }

    double averageSteps = static_cast<double>(totalSteps) / days;

    cout << "Total steps: " << totalSteps << endl;
    cout << "Average steps: " << averageSteps << endl;
    cout << "Highest steps: " << highestSteps << endl;
    cout << "Lowest steps: " << lowestSteps << endl;

    return 0;
}

*/


#include <iostream>
using namespace std;

int main()
{
    int numDays; // number of numDays
    int steps; // number of steps
    int totalSteps; // the total steps
    int highest;
    int lowest;
    double average;

    cout << "How many days do you want to track? " << endl;
    cin >> numDays;

    for (int day = 1; day <= numDays; day++) {
        cout << "Enter the steps for day " << day << ": ";
        cin >> steps;
        
        // Accumulator, it holds the total
        totalSteps += steps; // accumulate the total steps or totalSteps = totalSteps + steps;

        if (day == 1) {
            highest = steps;
            lowest = steps;
        } else {
            if (steps > highest) {
                highest = steps;
            }
            if (steps < lowest) {
                lowest = steps;
            }
        }
    }

    average = static_cast<double>(totalSteps) / numDays;

    cout << "Total steps: " << totalSteps << endl;
    cout << "Average steps: " << average << endl;
    cout << "Highest step count: " << highest << endl;
    cout << "Lowest step count: " << lowest << endl;

    return 0;
}