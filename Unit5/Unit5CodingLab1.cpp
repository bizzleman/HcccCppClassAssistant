#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream inputFile;
    ofstream outputFile;

    string lastName, firstName;
    double salary, percent, newSalary;

    inputFile.open("Ch3_Ex6Data.txt");
    outputFile.open("Ch3_Ex6Output.dat");

    outputFile << fixed << setprecision(2);

    while (inputFile >> lastName >> firstName >> salary >> percent) {
        newSalary = salary + (salary * percent / 100);
        outputFile << firstName << " " << lastName << " " << newSalary << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
