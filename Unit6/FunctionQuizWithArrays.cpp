/*
Please create a function for each task, input, output(display), max, min, average, total and call these functions in the main method.

 

#include <iostream>
#include <fstream>
#include <string>


// This program will get input, give output, calculate the total, average number, min and max values

using namespace std;

int main() {
    
    int SIZE;
    int numbers[SIZE];        // Array Declaration
    int total = 0;          // running totals or accumulator
    int highest, lowest;
    double average;
    
    cout <<"How many numbers do you want to enter?: "<< endl;
    cin >> SIZE;
    
    cout << "Enter " << SIZE << " numbers:" << endl;
    for (int i=0; i<SIZE; i++) {
        cout << "Number " << (i+1) << ": ";
        cin >> numbers[i];
        total += numbers[i];     // total = total + numbers[i];
    }
    
    average = total/(double)SIZE;   // casting applied, SIZE is double to get double result
    highest = numbers[0];
    lowest = numbers[0];
    
    // find the max and min
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > highest)
           highest = numbers[i];
        
        if (numbers[i] < lowest)
           lowest = numbers[i];
    }
    
    // Display the results
    for (int i=0; i<SIZE; i++) {
        cout <<"numbers[" <<i<< "] is"<< " " << numbers[i] << endl;
    }
    
    cout << "The total is: " << total << endl;
    cout << "The average is: " << average << endl;
    cout << "The max value is: " << highest << endl;
    cout << "The min value is: " << lowest << endl;
    
    return 0;
}
*/

#include <iostream>
using namespace std;

void inputNumbers(int numbers[], int size) {
    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Number " << (i+1) << ": ";
        cin >> numbers[i];
    }
}

void displayNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "numbers[" << i << "] is " << numbers[i] << endl;
    }
}

int findTotal(int numbers[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += numbers[i];
    }
    return total;
}

double findAverage(int total, int size) {
    return total / (double)size;
}

int findMax(int numbers[], int size) {
    int highest = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > highest)
            highest = numbers[i];
    }
    return highest;
}

int findMin(int numbers[], int size) {
    int lowest = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < lowest)
            lowest = numbers[i];
    }
    return lowest;
}

int main() {

    int size;

    cout << "How many numbers do you want to enter?: ";
    cin >> size;

    int numbers[size];

    inputNumbers(numbers, size);

    cout << endl;

    displayNumbers(numbers, size);

    int total = findTotal(numbers, size);
    double average = findAverage(total, size);
    int highest = findMax(numbers, size);
    int lowest = findMin(numbers, size);

    cout << "The total is: " << total << endl;
    cout << "The average is: " << average << endl;
    cout << "The max value is: " << highest << endl;
    cout << "The min value is: " << lowest << endl;

    return 0;
}
