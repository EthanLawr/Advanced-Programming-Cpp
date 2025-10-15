// Ethan Lawrence 9/4/2025
// Exercise 3 Quiz W2D2 Assignment ID 46097391
#include <iostream>

using namespace std;

// Even or Odd Number
// Write a C++ program that asks the user for an integer and tells them if it is even or odd.
// Hint: use the % operator.

int main()
{
    cout << "===============Even or Odd Number===============\n";
    // Variable initialization
    int a;
    
    // User Input
    cout << "Enter a number as an integer. ";
    cin >> a;

    // Check if the number is even or odd. Result is displayed.
    if (a%2 == 0) {
        cout << a << " is an even number.";
    } else {
        cout << a << " is an odd number.";
    }

    return 0;
}