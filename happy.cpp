#include <iostream>
using namespace std;


int main() {
    int score = 100;
    int answer;
    
cout << "Welcome to the Happiness Quiz!" << endl;
cout << "Answer each question to determine how happy you are!" << endl;
cout << endl;

cout << "Q1) Do you feel lonely?" << endl;
cout << "1) Yes, all the time" << endl;
cout << "2) Sometimes" << endl;
cout << "3) Less than sometimes" << endl;
cout << "4) Never" << endl;

cin >> answer;

if(answer = 1){
    score -= 20;
}

cout << "Q2) How often do you experience guilt or hopelessness?" << endl;
cout << "1) All the time" << endl;
cout << "2) Sometimes" << endl;
cout << "3) Less than sometimes" << endl;
cout << "4) Never" << endl;

cin >> answer;

if(answer = 1){
    score -= 20;
}

cout << "Q3) How often do you spend time with family and friends?" << endl;
cout << "1) All the time" << endl;
cout << "2) Sometimes" << endl;
cout << "3) Less than sometimes" << endl;
cout << "4) Never" << endl;

cin >> answer;

if(answer = 4){
    score -= 20;
}

cout << "Q4) Do you feel as though you have little interest in doing things?" << endl;
cout << "1) All the time" << endl;
cout << "2) Sometimes" << endl;
cout << "3) Less than sometimes" << endl;
cout << "4) Never" << endl;

cin >> answer;

if(answer = 1){
    score -= 20;
}

cout << "Q5) Do you often over/undereat?" << endl;
cout << "1) All the time" << endl;
cout << "2) Sometimes" << endl;
cout << "3) Less than sometimes" << endl;
cout << "4) Never" << endl;

cin >> answer;

if(answer = 1){
    score -= 20;
}

cout << "Your final score is: " << score << " out of 100" << endl;
cout << "The higher the score, the happier you are" << endl;

if(score > 90){
    cout << "You are a very happy person!" << endl;
}
else if(score<=50){
    cout << "You are a very depressed person." << endl;
}



    return 0;
}
