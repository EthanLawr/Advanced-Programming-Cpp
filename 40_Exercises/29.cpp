//Ethan Lawrence 09/11/2025
// Item 29. Design a quiz game with a total of 5 questions:
// 3 questions should offer 4 answer options,
// 2 questions should offer 2 answer options.
#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;
    QuizGame quiz;
    cout << "=====Quiz: History=====";

    // Question 1
    answer = quiz.askQuestion("Question 1: Who was the first President of the United States?", 
        "a) George Washington\nb) Thomas Jefferson\nc) Abraham Lincoln\nd) John Adams", 
        answer);
    score += masterAnswerCheck(answer, 'a', 20);

    // Question 2
    answer = quiz.askQuestion("Question 2: What year did the Titanic sink?", 
        "a) 1905\nb) 1912", 
        answer);
    score += masterAnswerCheck(answer, 'b', 20);

    // Question 3
    answer = quiz.askQuestion("Question 3: Which empire was known for its road system?",
        "a) British Empire\nb) Ottoman Empire\nc) Roman Empire\nd) Mongol Empire", 
        answer);
    score += masterAnswerCheck(answer, 'c', 20);

    // Question 4
    answer = quiz.askQuestion("Question 4: Who was the first person to circumnavigate the globe?",
        "a) Ferdinand Magellan\nb) Sir Francis Drake", 
        answer);
    score += masterAnswerCheck(answer, 'a', 20);

    // Question 5
    answer = quiz.askQuestion("Question 5: In which year did World War II end?",
        "a) 1944\nb) 1945\nc) 1946\nd) 1947", 
        answer);
    score += masterAnswerCheck(answer, 'b', 20);

    // Final Score Evaluation
    cout << scoreDisplay(score);

    return 0;
}
class QuizGame {
public:
    char askQuestion(string question, string options, char answer) {
        do {
            cout << question << "\n";
            cout << options << "\n";
            cout << "Enter your answer (a/b/c/d): ";
            cin >> answer;
        } while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd' &&
                 answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D');
        return answer;
    }
};

int masterAnswerCheck(char answer, char correctAnswer, int points) {
    if (answer == correctAnswer || answer == toupper(correctAnswer)) {
        return points;
    } else {
        return 0;
    }
}

string scoreDisplay(int someScore) {
    cout << "Your total score is " << someScore << " points.\n";

    if (someScore == 100) {
        return "Excellent! You got a perfect score!\n";
    } else if (someScore >= 80) {
        return "Great job! You have a strong knowledge of history.\n";
    } else if (someScore >= 50) {
        return "Good effort! But there's room for improvement.\n";
    } else {
        return "Keep trying! You'll do better next time.\n";
    }
}

