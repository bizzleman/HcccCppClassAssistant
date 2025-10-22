/*  
Convert the following do-while to a while loop.

char sure; 
do 
{ 
  cout << "Are you sure you want to quit? "; 
  cin >> sure; 
} while (sure != 'Y' && sure != 'N'); 
*/

#include <iostream>
using namespace std;
int main() {
    char sure;
    cout << "Are you sure you want to quit? (Y/N) ";
    cin >> sure;
    while (sure != 'Y' && sure != 'N') {
        cout << "Are you sure you want to quit? (Y/N) ";
        cin >> sure;
    }
    return 0;
}
