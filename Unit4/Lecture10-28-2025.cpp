/*
    do while loop example in C++
*/

#include <iostream>
using namespace std;

int main()
{
    int count = 10;

    do {
        cout << "Number: " << count << endl;
        count ++;
    } while (count <= 5);
    return 0;
}

/*
    for loop
*/

#include <iostream>
using namespace std;

int main()
{
    for (int count = 1; count <= 5; count++) {
        cout << "Number: " << count << endl;
    }
    return 0;
}

/*
clock
*/

#include <iostream>
using namespace std;

int main()
{
    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            for (int second = 0; second < 60; second++) {
                // Display time in HH:MM:SS format
                cout << hour << ":";
                
                if (minute < 10) {
                    cout << "0"; // Leading zero for minutes less than 10
                }
                cout << minute << ":";

                if (second < 10) {
                    cout << "0"; // Leading zero for seconds less than 10
                }

            }
        }
    }
    return 0;
}

/*
Create a daily step tracker program
    track the number of steps they take each day
    - use for loop
    - for each day ask user to enter how many steps
    - ask user how may days does it  want to be tracked
    - use a variable called totalSteps to keep a running total
    - after loop finishes calculate the average
    - display the total, average, highest, and lowest
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