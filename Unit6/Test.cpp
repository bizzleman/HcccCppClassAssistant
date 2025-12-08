#include <iostream>
#include <fstream>
using namespace std;

// Function that returns the highest of three numbers
int highest(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    ifstream file("numbers.txt");
    int x, y, z;

    if (!file) {
        cout << "Cannot open file.\n";
        return 0;
    }

    file >> x >> y >> z;

    cout << "The highest number is: " << highest(x, y, z);
    return 0;
}
