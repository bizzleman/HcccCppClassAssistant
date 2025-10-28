/*
    do while loop example in C++
*/

#include <iostream>
using namespace std;

int main()
{
    int count = 10;

    do {
        cout << "Number: " << count << endl;
        count ++;
    } while (count <= 5);
    return 0;
}

/*
    for loop
*/

#include <iostream>
using namespace std;

int main()
{
    for (int count = 1; count <= 5; count++) {
        cout << "Number: " << count << endl;
    }
    return 0;
}

/*
clock
*/

#include <iostream>
using namespace std;

int main()
{
    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            for (int second = 0; second < 60; second++) {
                // Display time in HH:MM:SS format
                cout << hour << ":" << minute << ":" << second << endl;
            }
        }
    }
    return 0;
}   