// Ethan Lawrence 9/4/2025
// Exercise 6 Quiz W2D2 Assignment ID 46097391
#include <iostream>

using namespace std;

// Pass or Fail Grade
// Write a C++ program that asks the user for a grade (0–10). 
// Print “Pass” if the grade ≥ 6, otherwise print “Fail”.

int main()
{
    cout << "===============Pass or Fail Grader===============\n";

    // Variable initialization
    int a = -1;
    bool passing;
    string result;

    // User Input.
    cout << "Enter your grade as an integer from 0 to 10\t";
    cin >> a;

    while (a < 0 || a > 10) {
        // User Input. Makes sure that the integer is correct. 
        cout << "Enter your grade as a VALID integer from 0 to 10\t";
        cin >> a;
    }

    // Check if the user has passed or failed
    if (a >= 6) {
        passing = true;
    } else {
        passing = false;
    }
    
    // Choose Passing Grade Text
    if (passing) {
        result = "passed";
    } else {
        result = "failed";
    }

    // Display the result
    cout << "You have received a grade of " << a << ". You have " << result;

    return 0;
}