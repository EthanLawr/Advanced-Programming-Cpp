// Ethan Lawrence 9/4/2025
// Exercise 7 Quiz W2D2 Assignment ID 46097391
#include <iostream>

using namespace std;

// Number in Range
// Write a C++ program that asks the user for a number and checks if it is between 1 and 100 (inclusive). 
// Print “In range” or “Out of range”.

int main()
{
    cout << "===============Number in Range===============\n";

    // Variable Initialization
    int num;

    // User Input
    cout << "Please enter an integer between 1 and 100\t";
    cin >> num;

    // User Input Checker and display
    if (num > 100 || num < 1) {
        cout << "Out of range";
    } else {
        cout << "In range";
    }

    return 0;
}