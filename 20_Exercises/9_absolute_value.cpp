// Ethan Lawrence 9/2/2025
// Exercise 9
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Variable initialization
    float a;
    float absolute;
    // User Input
    cout << "Absolute Value Calculator\nEnter the first number = ";
    cin >> a;
    // Calculations
    absolute = abs(a);
    // Display the result
    cout << "\nThe absolute value of the first number is: " << absolute;
    // Prevents EXE from closing before viewing the results.
    char c;
    cout << "\nPress any key to continue...";
    cin >> c;

    return 0;
}