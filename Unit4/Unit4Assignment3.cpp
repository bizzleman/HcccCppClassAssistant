/*
Convert the following while loop to a for loop.
 int count = 0; 
 while (count < 50) 
 { 
   cout << "count is " << count << endl; 
   count++; 
}
*/

#include <iostream>
using namespace std;
int main() {
    for (int count = 0; count < 50; count++) {
        cout << "count is " << count << endl;
    }
    return 0;
}
