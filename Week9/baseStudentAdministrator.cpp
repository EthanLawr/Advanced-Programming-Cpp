// THIS IS NOT MY CODE, THIS DOES NOT RUN UNDER MY LICENSE. This is my professor's code as far as I am aware.
#include <iostream>
#include <string>
using namespace std;
struct Student {
string name;
int id;
double grade;
};
void addStudent(Student s[], int &count);
void listStudents(Student s[], int count);
double averageGrade(Student s[], int count);
int main() {
Student students[100];
int count = 0;
int option;
do {
cout << "\n--- Student Administrator ---\n";
cout << "1. Add Student\n";
cout << "2. Show All Students\n";
cout << "3. Show Average Grade\n";
cout << "4. Exit\n";
cout << "Choose an option: ";
cin >> option;
switch(option) {
case 1: addStudent(students, count); break;
case 2: listStudents(students, count); break;
case 3: cout << "Average Grade: " << averageGrade(students, count) <<
endl; break;
case 4: cout << "Goodbye!\n"; break;
default: cout << "Invalid option.\n";
}
} while(option != 4);
return 0;
}
void addStudent(Student s[], int &count) {
cout << "Enter name: ";
cin >> s[count].name;
cout << "Enter ID: ";
cin >> s[count].id;
cout << "Enter grade: ";
cin >> s[count].grade;
count++;
}
void listStudents(Student s[], int count) {
cout << "\n--- Student List ---\n";
for (int i = 0; i < count; i++) {
cout << s[i].id << " - " << s[i].name << " - " << s[i].grade << endl;
}
}
double averageGrade(Student s[], int count) {
double sum = 0;
for (int i = 0; i < count; i++)
sum += s[i].grade;
return (count > 0) ? sum / count : 0;