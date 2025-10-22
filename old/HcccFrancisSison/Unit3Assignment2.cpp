/******************************************************************************

Write an if statement that prints the message “The number is valid” if the variable grade is within the range 0 through 100. 

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter a grade (0-100): ";
    cin >> grade;

    if (grade >= 0 && grade <= 100) {
        cout << "The number is valid" << endl;
    }

    return 0;
}