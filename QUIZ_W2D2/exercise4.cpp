// Ethan Lawrence 9/4/2025
// Exercise 4 Quiz W2D2 Assignment ID 46097391
#include <iostream>

using namespace std;

// Compare Two Numbers
// Write a C++ program that asks the user for two numbers 
// and displays which one is greater or if they are equal.

int main()
{
    // Variable initialization
    int a, b;
    
    // User Input
    cout << "Enter the first number as an integer ";
    cin >> a;
    cout << "Enter the second number as an integer ";
    cin >> b;

    // Check which number is greater or if they are equal. Result is displayed once determined.
    if (a > b) {
        cout << a << " is greater than " << b << ".";
    } else if (a < b) {
        cout << b << " is greater than " << a << ".";
    } else {
        cout << a << " is equal to " << b << ".";
    }

    return 0;
}