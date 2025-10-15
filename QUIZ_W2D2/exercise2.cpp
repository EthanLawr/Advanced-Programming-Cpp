// Ethan Lawrence 9/4/2025
// Exercise 2 Quiz W2D2 Assignment ID 46097391
#include <iostream>

using namespace std;

// Legal Age Check
// Write a C++ program that asks the user for their age and prints:
// •    "You are an adult" if age ≥ 18
// •    "You are a minor" if age < 18

int main()
{
    cout << "===============Legal Age Check===============\n";

    // Variable initialization
    int age;
    
    // User Input
    cout << "Enter your age as an integer. ";
    cin >> age;

    // Check if the user is an adult or a minor as per program instructions
    if (age >= 18) {
        cout << "You are an adult.";
    } else {
        cout << "You are a minor.";
    }

    return 0;
}