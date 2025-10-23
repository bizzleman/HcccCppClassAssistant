/******************************************************************************

Find as many errors as you can in the following Code.

#include ;
  using namespace std;
  int main()
  {
    const int number1, number2, product;
    cout << "Enter two numbers and I will multiply\n";
    cout << "them for you.\n";
    cin >> number1 >> number2;
    product = number1 * number2;
    cout << product
    return 0;
  }

*******************************************************************************/

#include <iostream> // Include the correct header file
using namespace std;

int main() {
  int number1, number2, product; // Remove 'const' because we will assign values

  // Prompt user for input
  cout << "Enter two numbers and I will multiply\n";
  cout << "them for you.\n";

  // Read input
  cin >> number1 >> number2;

  // Calculate product
  product = number1 * number2;

  // Display result
  cout << "The product is: " << product << endl; // Added endl for newline

  return 0;
}