/******************************************************************************

Your task is to find what value will be stored in a?

Defined Variables
int a, b = 2;

float c = 4.2;

Following statement: a = b * c;

b = 2
c = 4.2
b * c = 8.4
a = 8 // because a is an int, the result of b * c is truncated to 8

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
  int a, b = 2;
  float c = 4.2;

  a = b * c;

  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "b * c = " << (b * c) << endl;
  cout << "a = " << a << endl; // will be 8
}