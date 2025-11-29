/*
Write code that does the following: 
Opens an output file with the filename Numbers.txt, 
uses a loop to write the numbers 1 through 100 to the file, then closes the file.  
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile;

    // Open the file
    outputFile.open("Numbers.txt");

    // Write numbers 1–100
    for (int i = 1; i <= 100; i++) {
        outputFile << i << endl;
    }

    // Close the file
    outputFile.close();

    return 0;
}