#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double force;      // to store the force value
    double area;       // to store the area value
    double pressure;   // to store the calculated pressure

    // Assign values
    force = 172.5;     // store 172.5 in force
    area = 27.5;       // store 27.5 in area

    // Perform calculation: pressure = area / force
    pressure = area / force;

    // Output the result (with periods)
    cout << "Force is " << force << "." << endl;
    cout << "Area is " << area << "." << endl;
    cout << "Pressure (area / force) is " << pressure << "." << endl;

    return 0;
}