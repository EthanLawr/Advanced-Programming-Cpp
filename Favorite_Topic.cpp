// Ethan Lawrence 09/09/2025

// /Write a C++ program that asks 5 multiple-choice questions about the Philadelphia Eagles, or another topic.
// Each question should have two possible answers.
// Use if statements to check if the user’s response is correct:
// Award 20 points for a correct answer.
// Award 0 points for an incorrect answer.

// Display the total score at the end of the quiz.

// Use an if statement to evaluate the final score and display a message:

// If the score is greater than 80, display: "You are a champion!"

// 50 & 80 "You are almost a champion. Study more about the Philadelphia Eagles or....!"

// Otherwise, display: "Try again!. Study more about the Philadelphia Eagles or....!"
#include <algorithm>
#include <array>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
int main()
{
    // Variable initialization
    int score = 0;
    char answer = 'c';

    // Title
    cout<<"=====Favorite Topic: Philadelphia Eagles=====";

    // Question 1
    do {
        // Question and Input
        cout << "Question 1 : What was their first Super Bowl appearance?\n";
        cout << "a) Super Bowl XV" << endl << "b) Super Bowl XVI" << endl;
        cout << "Enter your answer (a/b): ";
        cin >> answer;
        // Input validation
    } while (answer != 'a' && answer != 'b' && answer != 'A' && answer != 'B');

    // Score Adjustment 1
    if (answer == 'a' || answer == 'A') {
        // Correct answer
        score += 20;
        cout << "Correct!\nYou earned 20 points. Your total score is " << score << " points.\n";
    } else {
        // Incorrect answer
        score += 0;
        cout << "Incorrect. The correct answer is a) Super Bowl XV.\n You currently have " << score << " points.\n";
    }
    // Reset answer for next question
    answer = 'c';

    // Question 2
    do {
        // Question and Input
        cout << "Question 2 : What was the Philadelphia Eagles first season in the NFL\n";
        cout << "a) 1932" << endl << "b) 1933" << endl;
        cout << "Enter your answer (a/b): ";
        cin >> answer;
        // Input validation
    } while (answer != 'a' && answer != 'b' && answer != 'A' && answer != 'B');

    // Score Adjustment 2
    if (answer == 'b' || answer == 'B') {
        // Correct answer
        score += 20;
        cout << "Correct!\nYou earned 20 points. Your total score is " << score << " points.\n";
    } else {
        // Incorrect answer
        score += 0;
        cout << "Incorrect. The correct answer is b) 1933.\n You currently have " << score << " points.\n";
    }
    // Reset answer for next question
    answer = 'c';

    // Question 3
    do {
        // Question and Input
        cout << "Question 3 : Who was the starting quarterback for the 1973 Eagles?\n";
        cout << "a) Roman Gabriel" << endl << "b) Mike Boryla" << endl;
        cout << "Enter your answer (a/b): ";
        cin >> answer;
        // Input validation
    } while (answer != 'a' && answer != 'b' && answer != 'A' && answer != 'B');

    // Score Adjustment 3
    if (answer == 'a' || answer == 'A') {
        // Correct answer
        score += 20;
        cout << "Correct!\nYou earned 20 points. Your total score is " << score << " points.\n";
    } else {
        // Incorrect answer
        score += 0;
        cout << "Incorrect. The correct answer is a) Roman Gabriel.\n You currently have " << score << " points.\n";
    }
    // Reset answer for next question
    answer = 'c';

    // Question 4
    do {
        // Question and Input
        cout << "Question 4 : Who did the Eagles play in Super Bowl XXXIX?\n";
        cout << "a) New England Patriots" << endl << "b) Pittsburgh Steelers" << endl;
        cout << "Enter your answer (a/b): ";
        cin >> answer;
        // Input validation
    } while (answer != 'a' && answer != 'b' && answer != 'A' && answer != 'B');

    // Score Adjustment 4
    if (answer == 'a' || answer == 'A') {
        // Correct answer
        score += 20;
        cout << "Correct!\nYou earned 20 points. Your total score is " << score << " points.\n";
    } else {
        // Incorrect answer
        score += 0;
        cout << "Incorrect. The correct answer is a) New England Patriots.\n You currently have " << score << " points.\n";
    }
    // Reset answer for next question
    answer = 'c';

    // Question 5
    do {
        // Question and Input
        cout << "Question 5 : Who is the owner of the Philadelphia Eagles?\n";
        cout << "a) Don Smolenski" << endl << "b) Jeffrey Lurie" << endl;
        cout << "Enter your answer (a/b): ";
        cin >> answer;
        // Input validation
    } while (answer != 'a' && answer != 'b' && answer != 'A' && answer != 'B');

    // Score Adjustment 5
    if (answer == 'b' || answer == 'B') {
        // Correct answer
        score += 20;
        cout << "Correct!\nYou earned 20 points. Your total score is " << score << " points.\n";
    } else {
        // Incorrect answer
        score += 0;
        cout << "Incorrect. The correct answer is b) Jeffrey Lurie.\n You currently have " << score << " points.\n";
    }
    // Reset answer for next question
    answer = 'c';

    // Final Score Display
    if (score > 80) {
        cout << "You are a champion!";
    } else if (score <= 80 && score > 50) {
        cout << "You are almost a champion. Study more about the Philadelphia Eagles!";
    } else {
        cout << "Try again! Study more about the Philadelphia Eagles";
    }

    return 0;
}

