#include <iostream>
using namespace std;

int main()
{
    int a;
    float b = 7.9;
    int c = 4;

    a = b / c;

    cout << "The value is stored in a is: " << a << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int number1, number2, product;

    cout << "Enter two numbers and I will multiply them for you.";

    cin >> number1 >> number2;

    product = number1 * number2;

    cout << "The product is: " << product << endl;

    return 0;
}

/******************************************************************************

How to declare string

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first = "Hello"; // initialization
    string second(" World"); // another way

    string third = first + second; // + is "computenation"

    cout << "Message: " << third << endl;

    return 0;
}

/******************************************************************************

    cout << "Length of the second is: " << first.length() << endl;

    when getting length of characters:
     - can use second.length() or third.length()

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first = "Hello"; // initialization
    string second(" World!"); // another way

    string third = first + second; // + is "computenation"

    cout << "Length of the second is: " << first.length() << endl;

    return 0;
}

/******************************************************************************

cout << "The first letter of first is: " << first[0]; // index number used for accessing character
cout << "The fifth letter of first is: " << first[4]; // starts with 0 or 1st is 0

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first = "Hello"; // initialization
    string second(" World!"); // another way

    string third = first + second; // + is "computenation"

    cout << "Length of the second is: " << first.length() << endl;
    cout << "The fifth letter of first is: " << first[4]; // index number used for accessing character

    return 0;
}

/******************************************************************************

    how to use getline
    getline(cin, name);
    cout << "Your name is " << name << endl;

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is " << name << endl;

    return 0;
}

/******************************************************************************

    string part = text.substr(0,5);

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Hudson County Community College";
    string part = text.substr(0,5);
    cout << part << endl;

    return 0;
}

/******************************************************************************

    remember to capitalize for Name like firstName, lastName, fullName

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;

    string fullName = firstName + " " + lastName;
    cout << "Hello, " << fullName << "! Your name has " << fullName.length() << " characters." << endl;

    return 0;
}

/******************************************************************************

    using getline for fullName gets the full line this would be a problem when 
    using length because cin reads only until encounters a space or a tab

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    cout << "Please enter your full name: ";
    getline(cin, fullName);

    cout << "Hello, " << fullName << "! Your name has " << fullName.length() << " characters." << endl;

    return 0;
}

/******************************************************************************

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string school = "Hudson County Community College";
    int number = school.find("Community");

    cout << number;

    return 0;

}

    school.replace(0,6, "Bergen");

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string school = "Hudson County Community College";
    school.replace(0,6, "Bergen");
    cout << school << endl;

    return 0;

}

/******************************************************************************

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    cout << "Please enter the sentence: ";
    getline(cin, sentence);
    int number = sentence.find(" ");
    string part = text.substr(0,);

    cout << part << endl;

    return 0;

}

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    cout << "Please enter a sentence: ";
    getline(cin, sentence);

    int space = sentence.find(" ");
    string firstWord = sentence.substr(0, space);

    cout << "The first word is: " << firstWord << endl;

    return 0;

}

