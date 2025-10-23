/******************************************************************************

Find as many errors as you can in the following Code

 using namespace std;
 int main ()
 {
   double number1, number2, sum;
   Cout << "Enter a number: ";
   Cin << number1;
   Cout << "Enter another number: ";
   Cin << number2;
   number1 + number2 = sum;
   Cout "The sum of the two numbers is " << sum
   return 0;
 }

*******************************************************************************/

#include <iostream> // Required for cin and cout
using namespace std;

int main() {
  double number1, number2, sum;

  // Ask for first number
  cout << "Enter a number: ";
  cin >> number1;

  // Ask for second number
  cout << "Enter another number: ";
  cin >> number2;

  // Calculate sum
  sum = number1 + number2;

  // Display result
  cout << "The sum of the two numbers is " << sum << endl;

  return 0;
}