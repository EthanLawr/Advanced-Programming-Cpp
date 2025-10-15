// Ethan Lawrence 9/2/2025
// Exercise 10
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // Variable initialization
    int a, b;
    int perimeter, area;
    // User Input
    cout << "Area and Perimeter Calculator (Rectangle)\nEnter the first number = ";
    cin >> a;
    cout << "\nEnter the second number = ";
    cin >> b;
    // Calculations
    perimeter = 2 * (a + b);
    area = a * b;
    // Display the result
    cout << "\nThe perimeter is: " << perimeter;
    cout << "\nThe area is: " << area;
    // Prevents EXE from closing before viewing the results.
    char c;
    cout << "\nPress any key to continue...";
    cin >> c;

    return 0;
}