/******************************************************************************

In this lab, you need to create a C++ program that will give you an output of the listed item below. 

Task Scenario
A new author is in the process of negotiating a contract for a new romance novel. The publisher is offering three options. 
In the first option, the author is paid $5,000 upon delivery of the final manuscript and $20,000 when the novel is published. 
In the second option, the author is paid 12.5% of the net price of the novel for each copy of the novel sold. 
In the third option, the author is paid 10% of the net price for the first 4000 copies sold, and 14% of the net price for the copies sold over 4000. 
The author has some idea about the number of copies that will be sold and would like to have an estimate of the royalties generated under each option. 
Write a program that prompts the author to enter the net price of each copy of the novel and the estimated number of copies that will be sold. 
The program then outputs the royalties under each option and the best option the author could choose. 
(Use appropriate named constants to store the special values such as royalties rates and fixed royalties.) 

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Named constants
    const double OPTION1_UPON_DELIVERY = 5000.0;    // $5000 upon delivery
    const double OPTION1_UPON_PUBLISH = 20000.0;    // $20000 upon publish
    const double OPTION2_RATE = 0.125;              // 12.5%
    const double OPTION3_RATE1 = 0.10;              // 10% for first 4000
    const double OPTION3_RATE2 = 0.14;              // 14% for copies over 4000
    const int OPTION3_THRESHOLD = 4000;

    // Variables for user input
    double netPrice;
    int copiesSold;

    // Prompt the user
    cout << "Enter the net price of each copy of the novel: $";
    cin >> netPrice;
    cout << "Enter the estimated number of copies to be sold: ";
    cin >> copiesSold;

    // Calculate royalties for each option
    double royalties1 = OPTION1_UPON_DELIVERY + OPTION1_UPON_PUBLISH;
    double royalties2 = OPTION2_RATE * netPrice * copiesSold;

    double royalties3;
    if (copiesSold <= OPTION3_THRESHOLD) {
        royalties3 = OPTION3_RATE1 * netPrice * copiesSold;
    } else {
        royalties3 = (OPTION3_RATE1 * netPrice * OPTION3_THRESHOLD) +
                     (OPTION3_RATE2 * netPrice * (copiesSold - OPTION3_THRESHOLD));
    }

    // Determine the best option
    double bestRoyalty = royalties1;
    string bestOption = "Option 1";
    if (royalties2 > bestRoyalty) {
        bestRoyalty = royalties2;
        bestOption = "Option 2";
    }
    if (royalties3 > bestRoyalty) {
        bestRoyalty = royalties3;
        bestOption = "Option 3";
    }

    // Display the results
    cout << "\nRoyalties under Option 1: $" << royalties1 << endl;
    cout << "Royalties under Option 2: $" << royalties2 << endl;
    cout << "Royalties under Option 3: $" << royalties3 << endl;
    cout << "The best option for the author is " << bestOption 
         << " with royalties of $" << bestRoyalty << endl;

    return 0;
}