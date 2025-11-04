#include <iostream>
using namespace std;
int main() {
    int choice;
    int validSelection = 0;
    cout << "1 = Chips\n2 = Cookies\n3 = Juice\n"; 
    for (int i = 1; i <= 3; i++) {
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "You selected Chips.\n";
                validSelection++;
                break;
            case 2:
                cout << "You selected Cookies.\n";
                validSelection++;
                break;
            case 3:
                cout << "You selected Juice.\n";
                validSelection++;
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
        cout << "\n";
    }
    cout << "Valid selections: " << validSelection << "\n";
    return 0;
}