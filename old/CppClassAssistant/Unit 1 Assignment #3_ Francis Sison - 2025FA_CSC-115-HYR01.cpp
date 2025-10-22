/******************************************************************************

#include iostream 
using namespace std; 
int main(); 
} 
   int a, b, c \\ Three integers 
   a = 3 
   b = 4 
   c = a + b 
   Cout < "The value of c is %d" < C; 
   return 0; 

*******************************************************************************/

#include <iostream>     // Include <>
using namespace std;

int main() // remove ;
{ // should be { and later ends with }
    int a, b, c;        // Three integers not \\ Three integers

    a = 3;              // add ;
    b = 4;              // add ;
    c = a + b;          // add ;

    cout << "The value of c is " << c << endl; 
    /*****************************************************************************************************
     case sensitive C to c this includes cout and the variable int c, remove %d too and should be << not <
    *****************************************************************************************************/
    return 0;
} // add }