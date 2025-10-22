/******************************************************************************

CONDITIONAL OPERATORS
LOGICAL OPERATORS
IF STATEMENTS
IF ELSE STATEMENTS
ELSE IF STATEMENTS

==      equal to
!=      not equal to
>       greater than
<       less than
>=      
<=      

Logical Operators

&&      AND / ^
||      OR / v
!       NOT / ~


#include <iostream>
using namespace std;

int main()
{
    int age = 20;

    bool hasID = true;


    if (age >= 18 || hasID) {
        cout << "You are eligible to vote. \n";
    }

    return 0;
}

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int age = 15;

    bool hasID = true;


    if (!(age >= 18)) {
        cout << "You are eligible to vote. \n";
    }

    return 0;
}

/******************************************************************************

#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    if (!(x > 10 || x < 0)) {
        cout << "x is between 0 and 10.";
    }

    return 0;
}

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int score = 85;

    if (score >= 95) {
        cout << "Excellent work. ";
    }
        else {
            cout << "You can do better. ";
        }

    return 0;
}

/******************************************************************************

8 mod 3 = 2
10 mod 6 = 4
94 mod 3 = 1
1047 mod 3 = 0

mod / %

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    if (num % 2 == 0) {
        cout << "It is even number. ";
    }
        else {
            cout << "It is odd number. ";
        }

    return 0;
}

/******************************************************************************

#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    if (num % 2 == 0) {
        cout << "It is even number. ";
    }
        else {
            cout << "It is odd number. ";
        }

    return 0;
}

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int score = 85;
        if (score >= 90) {
            cout << "Your grade is A. ";
        }   else if (score >= 80) {
            cout << "Your grade is B. ";
        }   else if (score >= 70) {
            cout << "Your grade is C. ";
        }   else {
                cout << "Your grade is below C. ";
            }
    return 0;
}

/******************************************************************************

#include <iostream>
using namespace std;

int main() {
    int score, attendance;

    cout << "Enter your exam score (0-100): ";
    cin >> score;

    cout << "Enter your attendance percentage (0-100): ";
    cin >> attendance;

    // Validate input
    if (score < 0 || score > 100 || attendance < 0 || attendance > 100) {
        cout << "Invalid input. Please enter values between 0 and 100.\n";
        return 0;
    }

    // Apply rules
    if (score >= 60 && attendance >= 75) {
        cout << "Result: Pass\n";
    } else if (score >= 50 && score < 60 && attendance >= 80) {
        cout << "Result: Conditional Pass\n";
    } else {
        cout << "Result: Fail\n";
    }

    return 0;
}

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
        int score, attendance;

        cout << "Enter your exam score(0-100): ";
        cin >> score;

        cout << "Enter your attendance percentage(0-100): ";
        cin >> attendance;

        if (score < 0 || score > 100 || attendance < 0 || attendance > 100) {
            cout << "Invalid input. Please enter values between 0 and 100. \n";
    return 0;
    }

        if (score >= 60 && attendance >= 75) {
            cout << "Result: Pass \n";
        }   
            else if (score >= 50 && score < 60 && attendance >= 80) {
            cout << "Result: Conditional Pass \n";
        }   
            else {
            cout << "Result: Fail \n";
    }
    return 0;
}

/******************************************************************************

#include <iostream>
using namespace std;

int main() {
    int score, attendance;

    cout << "Enter your exam score (0-100): ";
    cin >> score;

    cout << "Enter your attendance percentage (0-100): ";
    cin >> attendance;

    if (score >= 60 && attendance >= 75) {
        cout << "PASS" << endl;
    }
        else if (score >= 50 && score < 60 && attendance >= 80) {
            cout << "CONDITIONAL PASS" << endl;
    }
        else {
            cout << "FAIL" << endl;
        }


    return 0;
}

*******************************************************************************/
