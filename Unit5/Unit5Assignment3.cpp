#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    int number;
    int total = 0;

    inputFile.open("Numbers.txt");

    while (inputFile >> number) {
        total += number;
    }

    inputFile.close();

    cout << "Total: " << total << endl;

    return 0;
}
