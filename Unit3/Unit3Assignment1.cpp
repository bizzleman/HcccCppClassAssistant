#include <iostream>
using namespace std;

int main() {
    double amount1, amount2;

    cout << "Enter amount1: ";
    cin >> amount1;
    cout << "Enter amount2: ";
    cin >> amount2;

    // Check if both conditions are true
    if (amount1 > 10) {
        if (amount2 < 100) {
            // Both conditions true → show greater amount
            if (amount1 > amount2) {
                cout << "The greater amount is: " << amount1 << endl;
            } else if (amount2 > amount1) {
                cout << "The greater amount is: " << amount2 << endl;
            } else {
                cout << "Both amounts are equal." << endl;
            }
        } else {
            cout << "Condition not met: amount2 is not less than 100." << endl;
        }
    } else {
        if (amount2 >= 100) {
            cout << "Conditions not met: amount1 is not greater than 10 and amount2 is not less than 100." << endl;
        } else {
            cout << "Condition not met: amount1 is not greater than 10." << endl;
        }
    }
    return 0;
}
