#include <iostream>                                     // input output stream
using namespace std;                                    // standard namespace
int main() {                                            // main function
  constexpr int daysInWeek = 7;                         // constant value evaluated at the compile-time
  cout << "Days in a week: " << daysInWeek << endl;     // output
  return 0;                                             // return 0 to the operating system
}                                                       // end of main function

#include <iostream>
using namespace std;
int main() {
  int userInput;
  cout << "Enter a number:";
  cin >> userInput; // input from the user

  const int VALUE = userInput; // constant value evaluated at the run-time
  cout << "You entered:" << VALUE << endl;

  return 0;
}

#include <iostream>
using namespace std;
int main() {
  const double TAX_RATE = 0.07; // constant value evaluated at the compile-time
  double price = 100;           // variable value evaluated at the run-time
  cout << "Total with tax:" << (price * (1 + TAX_RATE)) << endl;
  return 0;
}

#include <iostream>
using namespace std;
int main() {
  double pi = 3.14159;
  int x = static_cast<int>(pi);       // converts double to int and assigns to x
                                      // static_cast is a type cast operator
  cout << "pi as int " << x << endl;  // output
  return 0;
}

#include <iostream>
using namespace std;
int main() {
  int age;
  cout << "Enter age: ";
  cin >> age;
  string result = (age >= 18) ? "Adult" : "Minor";
  cout << "You are a " << result << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int exam1;
  int exam2;
  int exam3;
  cout << "Enter First Exam: ";
  cin >> exam1;
  cout << "Enter Second Exam: ";
  cin >> exam2;
  cout << "Enter Third Exam: ";
  cin >> exam3;
  cout << "Average Exam Score: " << ((exam1 + exam2 + exam3) / 3) << endl;

  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int exam1, exam2, exam3;
  cout << "This program calculates the average of your exam scores." << endl;
  cout << "Enter the 3 exam scores seperated by spaces." << endl;
  cin >> exam1 >> exam2 >> exam3;

  cout << "You entered: " << exam1 << ", " << exam2 << ", " << exam3 << endl;

  cout << "The average is " << (exam1 + exam2 + exam3) / 3 << "." << endl;
  return 0;
}

// write a program to calculate the area of a circle

// pi = 3.14159

// area = pi * radius * radius

// input will be entered by the user which is radius

#include <iostream>
using namespace std;

int main() {
  double radius;
  double pi = 3.14159;
  cout << "This program calculates the area of a circle when pi is 3.14159." << endl;
  cout << "Enter the radius:" << endl;
  cin >> radius;
  cout << "The area is " << (pi * radius * radius) << "." << endl;

  return 0;
}

/******************************************************************************

#include <iostream>
using namespace std;

int main()
{
    int exam1;
    int exam2;
    int exam3;
    cout << "Enter First Exam: ";
    cin >> exam1;
    cout << "Enter Second Exam: ";
    cin >> exam2;
    cout << "Enter Third Exam: ";
    cin >> exam3;
    cout << "Average Exam Score: " << ((exam1 + exam2 + exam3)/3) << endl;

    return 0;
}

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
  int exam1, exam2, exam3;
  cout << "This program calculates the average of your exam scores." << endl;
  cout << "Enter the 3 exam scores seperated by spaces." << endl;
  cin >> exam1 >> exam2 >> exam3;

  cout << "You entered: " << exam1 << ", " << exam2 << ", " << exam3 << endl;

  cout << "The average is " << (exam1 + exam2 + exam3) / 3 << "." << endl;
  return 0;
}

/******************************************************************************

write a program to calculate the area of a circle

pi = 3.14159

area = pi * radius * radius

input will be entered by the user which is radius

#include <iostream>
using namespace std;

int main()
{
    double radius;
    double pi = 3.14159;
    cout << "This program calculates the area of a circle when pi is 3.14159."
<< endl; cout << "Enter the radius:" << endl; cin >> radius; cout << "The area
is " << (pi * radius * radius) << "." << endl;

    return 0;
}

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
  const double PI = 3.14159;
  double radius, area;

  cout << "Enter the radius of the circle: " << endl;
  cin >> radius;

  area = PI * radius * radius;

  cout << "The area of the circle with radius " << radius << " is " << area
       << endl;
  return 0;
}