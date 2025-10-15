// Ethan Lawrence 9/4/2025
// Exercise 1 Quiz W2D2 Assignment ID 46097391
#include <iostream>

using namespace std;

// Positive, Negative, or Zero
// Write a C++ program that asks the user to enter a number and displays whether it is 
// positive, negative, or zero.

int main()
{
    cout << "===============Positive, Negative, or Zero===============\n";

    // Variable initialization
    int a;

    // User Input
    cout << "Enter a number as an integer ";
    cin >> a;

    // Check if the number is positive, negative, or zero. Result is displayed once determined.
    if (a == 0) {
        cout << a << " is zero.";
    } else if (a > 0) {
        cout << a << " is positive.";
    } else {
        cout << a << " is negative.";
    }

    return 0;
}