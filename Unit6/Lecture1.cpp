/*
FUNCTION BASICS IN C++
A function is a block of code that performs a specific task. It is defined once and can be called multiple times from different parts of a program.
Functions help in organizing code, improving readability, and promoting code reuse.
Function Structure:
1. Function Header: This includes the return type, function name, and parameters (if any).
   Example: 
   ```cpp
   void functionName(int parameter1, string parameter2)
   ```
2. Function Body: This contains the code that defines what the function does, enclosed in curly braces `{}`.
3. Function Call: This is where the function is invoked or executed in the program.
Example:
```cpp
#include <iostream>
using namespace std;
void greet() { // function header
    cout << "Hello, World!" << endl; // function body
}
int main() {
    greet(); // function call
    return 0;
}
*/


/*
#include <iostream>
using namespace std;

void showAge() {
    int age = 20; // local variable
    cout << "Your age is: " << age << endl;
}

int main() {
    showAge();
    return 0;
}
*/


#include <iostream>
using namespace std;

// function header
void printSquare(int num) { // parameter
    cout << "The square of " << num << " is " << num * num << endl;
} // function body

int main() {
    printSquare(5); // passing an argument
    return 0;
}



#include <iostream>
using namespace std;

void showInfo(string name, int age) {
    string message = "Name: " + name;
    cout << message << endl;
    cout << "Age: " << age << endl;
}

int main() {
    showInfo("Ben", 32);
    return 0;
}


/* Function Prototype Example */

#include <iostream>
using namespace std;

void showInfo(string name, int age); // prototype function declaration

int main() {
    showInfo("Ben", 32);
    return 0;
}

void showInfo(string name, int age) {
    string message = "Name: " + name;
    cout << message << endl;
    cout << "Age: " << age << endl;
}


/*
Create a void function named welcomeMessage()
This function will print your name.
Call it in the main() function.
*/


#include <iostream>
using namespace std;

// function header need 
void welcomeMessage(string firstName,string lastName) {
    cout << "First Name: " << firstName << "\nLast Name: " << lastName << endl;
}
int main() {
    welcomeMessage("Francis","Sison"); // two parameters or two arguments
    return 0;
}



#include <iostream>
using namespace std;

void welcomeMessage(string firstName,string lastName);

int main() {
    welcomeMessage("Francis","Sison");
    return 0;
}

void welcomeMessage(string firstName,string lastName) {
    cout << "First Name: " << firstName << "\nLast Name: " << lastName << endl;
}


/*
Write a program that includes a function called calculateShipping() which determines the cost of an online order.
The function should:
Take the weight in pounds and distance in miles as parameters.
Return the shipping cost using the rules below:
0-2 lbs = cost per mile is $0.02 per mile
2.1-6 lbs = cost per mile is $0.04 per mile
6.1-10 lbs = cost per mile is $0.06 per mile
10.1+ lbs = cost per mile is $0.10 per mile
Ask the user to enter the weight
Ask the user to enter the distance
Call the function
Display the result, which is the totalcost.
*/

// MY ANSWER

/*
#include <iostream>
using namespace std;

void calculateShipping(double weight, double distance) {
    double costPerMile;

    if (weight <= 2) {
        costPerMile = 0.02;
    } else if (weight <= 6) {
        costPerMile = 0.04;
    } else if (weight <= 10) {
        costPerMile = 0.06;
    } else {
        costPerMile = 0.10;
    }

    double totalCost = costPerMile * distance;
    cout << "The total shipping cost is: $" << totalCost << endl;
}

int main() {
    double weight, distance;

    cout << "Enter the weight of the package (in pounds): ";
    cin >> weight;

    cout << "Enter the distance to be shipped (in miles): ";
    cin >> distance;

    calculateShipping(weight, distance);

    return 0;
}
*/

/*

#include <iostream>
using namespace std;

// function to calculate shipping cost
double calculateShipping(double weight, double distance) {
    double costPerMile;

    if (weight <= 2) {
        costPerMile = 0.02;
    } else if (weight <= 6) {
        costPerMile = 0.04;
    } else if (weight <= 10) {
        costPerMile = 0.06;
    } else {
        costPerMile = 0.10;
    }

    return costPerMile * distance; // return total cost
}
int main() {
    double weight, distance;

    cout << "Enter the weight of the package (in pounds): ";
    cin >> weight;

    cout << "Enter the distance to be shipped (in miles): ";
    cin >> distance;

    double totalCost = calculateShipping(weight, distance); // call the function

    cout << "The total shipping cost is: $" << totalCost << endl; // display result

    return 0;
}
*/