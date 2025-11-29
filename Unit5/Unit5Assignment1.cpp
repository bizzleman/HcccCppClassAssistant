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

    outputFile.open("Numbers.txt");

    for (int i = 1; i <= 100; i++) {
        outputFile << i << endl;
    }

    outputFile.close();

    return 0;
}