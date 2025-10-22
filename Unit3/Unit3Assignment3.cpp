/******************************************************************************

Convert the following if/else statement into a switch statement


if (choice == 1) 
{ 
cout << fixed << showpoint << setprecision(2); 
} 
else if (choice == 2 || choice == 3) 
{ 
cout << fixed << showpoint << setprecision(4); 
} 
else if (choice == 4) 
{ 
cout << fixed << showpoint << setprecision(6); 
} 
else 
{ 
cout << fixed << showpoint << setprecision(8); 
} 

switch (choice) {
    case 1:
        cout << setprecision(2);
        break;
    case 2:    // case 2 and case 3 have the same output
    case 3:
        cout << setprecision(4);
        break;
    case 4:
        cout << setprecision(6);
        break;
    default:
        cout << setprecision(8);
}

P.S. not sure if I need a running code for this one. But I tried.
*******************************************************************************/

#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int choice;
    double pi = 3.141592653589793;

    cout << "Pi: 3.141592653589793" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << fixed << showpoint;

    switch (choice) {
        case 1:
            cout << setprecision(2);
            break;
        case 2:    // case 2 and case 3 have the same output
        case 3:
            cout << setprecision(4);
            break;
        case 4:
            cout << setprecision(6);
            break;
        default:
            cout << setprecision(8);
    }

    cout << "Pi: " << pi << endl;

    return 0;
}