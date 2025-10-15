// Ethan Lawrence 9/2/2025
// Exercise 14
#include <iostream>
#include <cmath>
// Hypotenuse of a right triangle/Pythagoras theorem
using namespace std;

int main()
{
    // Variable initialization
    float a, b, c;

    // User Input
    cout << "Hypotenuse Calculator\nEnter the length of side A = ";
    cin >> a;
    cout << "\nEnter the length of side B = ";
    cin >> b;

    // Calculations
    c = sqrt((a * a) + (b * b));

    // Display the result
    cout << "\nThe length of the hypotenuse is " << c;

    // Prevents EXE from closing before viewing the results.
    char d;
    cout << "\nPress any key to continue...";
    cin >> d;

    return 0;
}