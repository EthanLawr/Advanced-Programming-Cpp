// Ethan Lawrence 9/2/2025
// Exercise 11-23?
#include <iostream>
#include <cmath>
// Create an algorithm that makes the multiplication table of 2 from 1 to 12.
using namespace std;

int main()
{
    // Multiplication Loop
    for (int i = 1; i <= 12; i++) {
        cout << "2 * " << i << " = " << 2 * i << endl;
    }

    // Prevents EXE from closing before viewing the results.
    char c;
    cout << "\nPress any key to continue...";
    cin >> c;

    return 0;
}