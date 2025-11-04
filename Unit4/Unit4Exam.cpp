/* 
Question 1 – Convert If-Else to Switch 

#include <iostream> 
using namespace std; 
int main() { 
    int choice; 
    cout << "1 = Chips\n2 = Cookies\n3 = Juice\nEnter choice: "; 
    cin >> choice; 

    if (choice == 1) { 

        cout << "You selected Chips.\n"; 

    } 

    else if (choice == 2) { 

        cout << "You selected Cookies.\n"; 

    } 

    else if (choice == 3) { 

        cout << "You selected Juice.\n"; 

    } 

    else { 

        cout << "Invalid choice.\n"; 

    } 
    return 0; 
} 

Your task: 
- Rewrite the if-else code using a switch(choice) statement 
- Put the switch inside a for loop that repeats 3 times
- Use an accumulator to count how many valid selections (1,2,3) 
- At the end, print: 
    "Valid selections: X" 
*/
#include <iostream>
using namespace std;
int main() {
    int choice;
    int validSelection = 0;
    cout << "1 = Chips\n2 = Cookies\n3 = Juice\n"; 
    for (int i = 1; i <= 3; i++) {
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "You selected Chips.\n";
                validSelection++;
                break;
            case 2:
                cout << "You selected Cookies.\n";
                validSelection++;
                break;
            case 3:
                cout << "You selected Juice.\n";
                validSelection++;
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
        cout << "\n";
    }
    cout << "Valid selections: " << validSelection << "\n";
    return 0;
}
/*
Question 2 – Do-While Loop 
Write a program that: 
- Uses a do-while loop 
- Repeatedly asks the user to enter a positive number 
- Adds all positive numbers to a total 
- Counts how many positive numbers were entered 
- Stops only when the user enters 0 
- If the user enters a negative number, print: Negative ignored 
At the end, display: 
- Total of the numbers 
- Count of positive numbers entered 
Output Sample: 
Enter number: 5 
Enter number: -3 
Negative ignored 
Enter number: 10 
Enter number: 0 
Total = 15 
Count = 2 
*/
#include <iostream>
using namespace std;
int main() {
    int number;
    int total = 0;
    int count = 0;
    do {
        cout << "Enter number: ";
        cin >> number;
        if (number > 0) {
            total += number;
            count++;
        } 
        else if (number < 0) {
            cout << "Negative ignored\n";
        }
    } while (number != 0);
    cout << "Total = " << total << "\n";
    cout << "Count = " << count << "\n";
    return 0;
}
/*
Question 3 – For Loop with Min/Max 
Write a program that: 
- Asks the user how many test scores will be entered (N) 
- Uses a for loop to read N scores
- Uses an accumulator to find the total
- Finds the highest score and lowest score
At the end, print: 
Total score =  
Highest score = 
Lowest score =  
*/
#include <iostream>
using namespace std;
int main() {
    int N;             // number of test scores
    int score;         
    int total = 0;    
    int highest;       
    int lowest;        
    cout << "How many test scores will be entered? ";
    cin >> N;
    if (N <= 0) {
        cout << "Invalid number of scores.\n";
        return 0;
    }
    for (int i = 1; i <= N; i++) {
        cout << "Enter score " << i << ": ";
        cin >> score;
        if (i == 1) {
            highest = score;
            lowest = score;
        }
        total += score;
        if (score > highest) highest = score;
        if (score < lowest) lowest = score;
    }
    cout << "Total score = " << total << "\n";
    cout << "Highest score = " << highest << "\n";
    cout << "Lowest score = " << lowest << "\n";
    return 0;
}