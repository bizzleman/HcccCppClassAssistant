#include <iostream>
using namespace std;

int main()
{
    int age, income;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your monthly income: ";
    cin >> income;
    if (age >= 18) {
        if (income >= 3000) {
            cout << "You are eligible for the loan. " << endl; }
        else {
            cout << "You must earn at least $3000 per month to qualify. " << endl; }}
        else {
            cout << "You must be at least 18 years old to qualify. " << endl; 
        }
    return 0;
}

/******************************************************************************

NOTES:

        if (){if (){} else {}}
        else {}

*******************************************************************************/

/******************************************************************************

#include <iostream>
using namespace std;

int main()
{
    int age, mathScore, englishScore, interviewScore;
    char reccommendation;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your math score (0-100): ";
    cin >> mathScore;

    cout << "Enter your English score (0-100): ";
    cin >> englishScore;

    cout << "Enter your interview score (0-100): ";
    cin >> interviewScore;

    cout << "Do you have a recommendation letter? (Y/N): ";
    cin >> reccommendation;

    if (age >= 18) 
    {
        if (mathScore >= 70) 
        {
            if (englishScore >= 65) 
            {
                if (interviewScore >= 60) 
                {
                    if (reccommendation == 'Y' || reccommendation == 'y') {
                        cout << "Congrats! You are eligible for admission!" < endl;
                    }    else {
                        cout << "You need a recommendation letter to qualify." << endl;
                    }}
                    else {
                        cout << "Interview score is too low. " << endl;
                    }}
                    else {
                        cout << "English score is too low. " << endl;
                    }}
                    else {
                        cout << "Math score is too low. " << endl;
                    }}
                    else {
                        cout << "You must be at least 18 years old to qualify. " << endl;
                    }}
    return 0;
}

// LEARN MORE NESTED IF STATEMENTS

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int age, mathScore, englishScore, interviewScore;
    char recommendation;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your math score (0-100): ";
    cin >> mathScore;

    cout << "Enter your English score (0-100): ";
    cin >> englishScore;

    cout << "Enter your interview score (0-100): ";
    cin >> interviewScore;

    cout << "Do you have a recommendation letter? (Y/N): ";
    cin >> recommendation;

    if (age >= 18) 
    {
        if (mathScore >= 70) 
        {
            if (englishScore >= 65) 
            {
                if (interviewScore >= 60) 
                {
                    if (recommendation == 'Y' || recommendation == 'y') {
                        cout << "Congrats! You are eligible for admission!" << endl;
                    } else {
                        cout << "You need a recommendation letter to qualify." << endl;
                    }
                }
                else {
                    cout << "Interview score is too low." << endl;
                }
            }
            else {
                cout << "English score is too low." << endl;
            }
        }
        else {
            cout << "Math score is too low." << endl;
        }
    }
    else {
        cout << "You must be at least 18 years old to qualify." << endl;
    }

    return 0;
}

/******************************************************************************

NOTES:

Add breaks at the end of each case to prevent fall-through.

*******************************************************************************/
        
#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter a day (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day! Please enter 1-7" << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operator: (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            }
            else {
                cout << "Error: Division by zero is not possible! " << endl;
            }
            break;
        case '%':
            cout << "Result: " << num1 % num2 << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
        }
    return 0;
    }

// EXAM COVERAGE ENDS HERE FOR UNIT 1, 2, AND 3 FOR PROGRAMMING IN C++ FOR MR. YAVUZ GUNER