/******************************************************************************

// Your task is to write a single cin statement that will read input into each
of these variables. Assume the following variables are defined:

Multiple Variables

int age;

double pay;

char section;

Answer is: cin >> age >> pay >> section;

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
  int age;
  double pay;
  char section;

  cout << "Enter age, pay, and section: ";
  cin >> age >> pay >> section; // Single cin statement to read input into each variable

  cout << "Age: " << age << endl;
  cout << "Pay: " << pay << endl;
  cout << "Section: " << section << endl;
}