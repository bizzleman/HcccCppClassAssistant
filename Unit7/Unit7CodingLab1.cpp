#include <iostream>
using namespace std;

void showInfo() {
    cout << "\nFitness Center Information:\n";
    cout << "Membership: $50 per month\n";
    cout << "Training Session: $30 each\n";
    cout << "Discounts:\n";
    cout << "  Seniors: 30%\n";
    cout << "  12+ months: 15%\n";
    cout << "  More than 5 sessions: 20%\n";
}

int getSeniorStatus() {
    int s;
    cout << "\nAre you a senior citizen? (1 = Yes, 0 = No): ";
    cin >> s;
    return s;
}

int getMonths() {
    int m;
    cout << "Enter number of months: ";
    cin >> m;
    return m;
}

int getSessions() {
    int t;
    cout << "Enter number of training sessions: ";
    cin >> t;
    return t;
}

double computeCost(int seniorStatus, int months, int sessions) {
    double membershipCost = months * 50.0;
    double sessionCost = sessions * 30.0;

    if (seniorStatus == 1)
        membershipCost = membershipCost * 0.70;

    if (months >= 12)
        membershipCost = membershipCost * 0.85;

    if (sessions > 5)
        sessionCost = sessionCost * 0.80;

    return membershipCost + sessionCost;
}

int main() {
    int choice;

    do {
        cout << "\n1. View Membership Info\n";
        cout << "2. Calculate Membership Cost\n";
        cout << "3. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            showInfo();
        }
        else if (choice == 2) {
            int senior = getSeniorStatus();
            int months = getMonths();
            int sessions = getSessions();

            double total = computeCost(senior, months, sessions);

            cout << "\nTotal Membership Cost: $" << total << endl;
        }

    } while (choice != 3);

    return 0;
}
