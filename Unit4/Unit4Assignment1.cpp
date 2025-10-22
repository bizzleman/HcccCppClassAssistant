/*  
Convert the following for loop to a while loop

  for (int x = 50; x > 0; x−−) 
  { 
    cout << x << " seconds to go.\n"; 
  } 
*/

#include <iostream>
using namespace std;

int main() {
    int x = 50;
    while (x > 0) {
        cout << x << " seconds to go.\n";
        x--;
    }
    return 0;
}