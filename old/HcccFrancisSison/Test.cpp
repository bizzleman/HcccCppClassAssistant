/*

3.  Even or Odd Number Checker using if	(30 Points)
Write a C++ program that asks the user to enter an integer. 
The program should then determine if the number is even or odd using an if-else statement.
If the number is divisible by 2, it is even.
If the number is not divisible by 2, it is odd.
The program should output whether the number is even or odd.

*/

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Even or Odd Number Checker" << endl;
    cout << "Enter an integer: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}