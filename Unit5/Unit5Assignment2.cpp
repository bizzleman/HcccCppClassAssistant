/*
Opens the Numbers.txt file that was created by the code you wrote in Unit 5 Assignment 1, 
reads all of the numbers from the file and displays them, then closes the file.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    int number;

    inputFile.open("Numbers.txt");

    while (inputFile >> number) {
        cout << number << endl;
    }

    inputFile.close();

    return 0;
}