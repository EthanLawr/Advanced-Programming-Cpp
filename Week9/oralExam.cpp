// Exercise 15
// Ethan Lawrence 10/16/2025
// This exam was completed live in front of the professor. All code is human written.

using namespace std;
// 15 – 16.- Develop an algorithm that changes from 
// dollars to euros and euros to dollars. Enter the current currency exchange rate. 
#include <iostream>

void dollarToEuro() {
    double someAmount, newAmount;
    cout << "Please enter the amount of Dollars to convert into Euros:\t";
    cin >> someAmount;
    newAmount = someAmount * 0.86;
    cout.precision(4);
    cout << "You have converted $" << someAmount << " into " << newAmount << " euros.";
}

void euroToDollar() {
    double someAmount, newAmount;
    cout << "Please enter the amount of Dollars to convert into Euros:\t";
    cin >> someAmount;
    newAmount = someAmount * 1.17;
    cout.precision(4);
    cout << "You have converted " << someAmount << " euros into $" << newAmount;
}

int main() {
    // 1 dollar = 0.86 Euro
    // 1 Euro = 1.17 USD
    // Variable declarations
    int someChoice;

    cout << "Please enter a following option:\n\t1. Convert USD to Euro\n\t2. Convert Euro to USD";
    cin >> someChoice;

    if (someChoice = 2)
        dollarToEuro();
    else
        euroToDollar();

}
