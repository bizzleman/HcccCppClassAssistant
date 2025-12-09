/*
Array

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5; // Uppercase constant for array size
    int numbers[SIZE] = {10, 20, 30, 40, 50}; // Declare an array of integers

    cout << "The 3rd element is: " << numbers[2] << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int scores[SIZE] = {85, 90, 66, 100, 80};

    int total = 0;

    string names[SIZE] = {"Alice", "Bob", "Cindy", "David", "Emma"};

    for (int i = 0; i < SIZE; i++) {
        cout << names[i] << " scored " << scores[i] << "." << endl;
        total += scores[i];
    }

    double average = static_cast<double>(total) / SIZE;

    cout << "\nClass Average: " << average << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int scores[SIZE] = {85, 90, 66, 100, 80};

    int total = 0;

    string names[SIZE] = {"Alice", "Bob", "Cindy", "David", "Emma"};

    cout << "Enter the student name: ";
    string targetName;
    cin >> targetName;

    int index = -1;

    for (int i = 0; i < SIZE; i++) {
        if (names[i] == targetName) {
            cout << targetName << " is at " << i+1 << " of the element in the array." << endl;
            index = i;
        }
    }

    if (index != -1)
        cout << targetName << "'s score is " << scores[index] << "." << endl;
    else
        cout << "Student not found.\n" << endl;

    return 0;
}
*/

// How find max and min in an array
/*
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int scores[SIZE] = {85, 90, 66, 100, 80};

    int total = 0;

    string names[SIZE] = {"Alice", "Bob", "Cindy", "David", "Emma"};
    int highest = 0;
    int lowest = 0;

    for (int i = 0; i < SIZE; i++) {

        //check for the max
        if (scores[i] > scores[highest]) 
            highest = i;


        //check for the min
        if (scores[i] < scores[lowest])
            lowest = i;
        
    }

    cout << "Highest score: " << scores[highest] << " by " << names[highest] << "." << endl;
    cout << "Lowest score: " << scores[lowest] << " by " << names[lowest] << "." << endl;

    return 0;
}
    */
#include <iostream>
using namespace std;

int getHighestIndex(int scores[], int SIZE) {
    int highest = 0;
    for (int i = 1; i < SIZE; i++) {
        if (scores[i] > scores[highest]) {
            highest = i;
        }
    }
    return highest;
}

int main() {
    const int SIZE = 5;
    int scores[SIZE] = {85, 90, 66, 100, 80};

    string names[SIZE] = {"Alice", "Bob", "Cindy", "David", "Emma"};

    int index = getHighestIndex(scores, SIZE);

    cout << "Top student: " << names[index] << " with a score of " << scores[index] << "." << endl;

    return 0;
}

