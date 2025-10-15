/******************************************************************************

In this lab, you need to create a C++ program that will give you an output of
the listed item below.

Task Scenario
A movie theater only keeps a percentage of the revenue earned from ticket sales.
The remainder goes to the movie distributor. Write a program that calculates a
theater’s gross and net box office profit for a night. The program should ask
for the name of the movie, how many adult and child tickets were sold, and the
price of the adult tickets. The price of a child ticket is 60% of that of an
adult ticket. Assume the theater keeps 20 percent of the gross box office
profit.

Your program must display the following output:

Adult Tickets Sold:
Child Tickets Sold:
Gross Box Office Profit:
Net Box Office Profit:
Amount Paid to Distributor:

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
  const double CHILD_TICKET_PERCENT = 0.6;
  const double THEATER_SHARE = 0.2;

  string movieName;
  int adultTickets, childTickets;
  double adultPrice;
  double childPrice, grossProfit, netProfit, distributorAmount;

  cout << "Enter the name of the movie: ";
  getline(cin, movieName);

  cout << "Enter number of adult tickets sold: ";
  cin >> adultTickets;

  cout << "Enter number of child tickets sold: ";
  cin >> childTickets;

  cout << "Enter price of adult ticket: $";
  cin >> adultPrice;

  childPrice = adultPrice * CHILD_TICKET_PERCENT;
  grossProfit = (adultTickets * adultPrice) + (childTickets * childPrice);
  netProfit = grossProfit * THEATER_SHARE;
  distributorAmount = grossProfit - netProfit;

  cout << "Adult Tickets Sold: " << adultTickets << endl;
  cout << "Child Tickets Sold: " << childTickets << endl;
  cout << "Gross Box Office Profit: $" << grossProfit << endl;
  cout << "Net Box Office Profit: $" << netProfit << endl;
  cout << "Amount Paid to Distributor: $" << distributorAmount << endl;

  return 0;
}