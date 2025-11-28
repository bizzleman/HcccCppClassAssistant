#include <iostream>
using namespace std;

// function to calculate shipping cost, prototype
double calculateShipping(double weight, double distance);

int main() {
    double weight, distance;

    cout << "Enter the package weight (lb): ";
    cin >> weight;

    cout << "Enter the distance (miles): ";
    cin >> distance;

    double totalCost = calculateShipping(weight, distance); // call the function

    cout << "The total shipping cost is: $" << totalCost << endl; // display result

    return 0;
}

double calculateShipping(double weight, double distance) {
    double costPerMile;

    if (weight >= 0 && weight <=2) {
        costPerMile = 0.02;
    } else if (weight > 2 && weight <= 6) {
        costPerMile = 0.04;
    } else if (weight > 6 && weight <= 10) {
        costPerMile = 0.06;
    } else {
        costPerMile = 0.10;
    }

    return costPerMile * distance; // return total cost
}