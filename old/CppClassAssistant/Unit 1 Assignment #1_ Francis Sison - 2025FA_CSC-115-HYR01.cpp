#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int s;      // to store the s or speed value
    int t;       // to store the t or time value
    int d;   // to store the calculated d or distance

    // Assign values
    s = 20;     // store 20 in s or speed
    t = 10;      // store 10 in t or time

    // Calculate distance
    d = s * t;  // multiply s or  speed by t or  time

    // Output the result
    cout << "Speed is " << s << "." << endl;
    cout << "Time is " << t << "." << endl;
    cout << "Distance (Speed multiply Time) is " << d << "." << endl;

    return 0;
}