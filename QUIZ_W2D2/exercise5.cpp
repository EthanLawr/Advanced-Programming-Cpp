// Ethan Lawrence 9/4/2025
// Exercise 5 Quiz W2D2 Assignment ID 46097391
#include <iostream>

using namespace std;

// Leap Year Checker
// Write a C++ program that asks the user for a year and checks if it is a leap year.
// Reminder: divisible by 4 and not by 100, or divisible by 400.

int main()
{
    cout << "===============Leap Year Checker===============\n";

    // Variable initialization
    int someYear;

    // User Input
    cout << "Enter a year: ";
    cin >> someYear;

    // Check if the year is a leap year. Result is displayed after the check.
    if ((someYear % 4 == 0 && someYear % 100 != 0) || (someYear % 400 == 0)) {
        cout << someYear << " is a leap year.";
    } else {
        cout << someYear << " is not a leap year.";
    }

    return 0;
}