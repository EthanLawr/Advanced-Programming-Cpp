// Ethan Lawrence 10/16/2025
#include <iostream>
#include <string>

/*
 * In this assignment, you will upgrade your previous Student Administrator program
 * Download Student Administrator program to include more advanced features using C++ structures (struct), file handling, and data manipulation.
 * This project simulates a small student database system, allowing you to efficiently manage academic information by adding, searching, and organizing student data.
 *
 * 1. Add a Search-by-ID Feature: Implement a function that allows users to search for a student by their ID number and display their details.
 *      Allow the user to enter a student ID and display all related information (name, ID, grade, email, major)
 *      If the ID does not exist show an appropriate message:
 *          "Student with that ID not found."
 *
 * 2. Show Only Students with Grade >= 70
 *      Add a new menu option to display only passing students (grade >= 70).
 *      Use a loop to filter and display these students.
 *
 * 3. Example Menu:
 * --- Student Administrator v2 ---
 * 1. Add Student
 * 2. Show All Students
 * 3. Show Students with Grade ≥ 70
 * 4. Search Student by ID
 * 5. Exit
 */
using namespace std;

struct Student
{
    string name, email, major;
    int id;
    double grade;
};

void addStudent(Student s[], int &count)
{
    cout << "Enter name: ";
    cin >> s[count].name;
    s[count].id = count + 1; // Auto-assign ID based on count
    cout << "Enter grade: ";
    cin >> s[count].grade;
    cout << "Enter email: ";
    cin >> s[count].email;
    cout << "Enter major: ";
    cin >> s[count].major;
    count++;
};

void listStudents(Student s[], int count)
{
    cout << "\n--- Student List ---\n";
    // Use a loop to iterate through the array and display each student's details
    for (int i = 0; i < count; i++)
        cout << s[i].id << " - " << s[i].name << " - " << s[i].grade << " - " << s[i].email << " - " << s[i].major << endl;
}

double averageGrade(Student s[], int count) {
    double sum = 0;
    // Calculate the sum using a loop to iterate through the array
    for (int i = 0; i < count; i++)
        sum += s[i].grade;
    return (count > 0) ? sum / count : 0; // Error handling for no students
};

void listPassingStudents(Student s[], int count) {
    cout << "\n--- Students with Grade >= 70 ---\n";
    // Use a loop to filter and display students with grade >= 70
    for (int i = 0; i < count; i++)
        if (s[i].grade >= 70) 
            cout << s[i].id << " - " << s[i].name << " - " << s[i].grade << " - " << s[i].email << " - " << s[i].major << endl;
}

void searchStudentByID(Student s[], int count, int searchID) {
    // Error checking variable
    bool found = false;
    // Use a loop to search for the student by ID
    for (int i = 0; i < count; i++) {
        if (s[i].id == searchID) {
            cout << "Student Found: " << s[i].id << " - " << s[i].name << " - " << s[i].grade << " - " << s[i].email << " - " << s[i].major << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with that ID not found." << endl;
    }
}

int main()
{
    // Initialize an array to hold up to 100 students
    Student students[100];

    // Initialize/Declare other necessary variables
    int count = 0;
    int option;

    // DoWhile Loop for the menu
    do
    {
        cout << "\n--- Student Administrator ---\n";
        cout << "1. Add Student\n";
        cout << "2. Show All Students\n";
        cout << "3. Show Average Grade\n";
        cout << "4. Show Students with a Grade above 70%\n";
        cout << "5. Search Student by ID\n";
        cout << "6. Exit\n";
        cout << "Choose an option: ";
        cin >> option;
        switch (option)
        {
        case 1:
            addStudent(students, count);
            break;
        case 2:
            listStudents(students, count);
            break;
        case 3:
            cout.precision(4); // Fixed Decimal Places
            cout << "Average Grade: " << averageGrade(students, count) << "%" << endl;
            break;
        case 4:
            listPassingStudents(students, count);
            break;
        case 5:
            // Variable declared here to limit scope
            int searchID;

            // User Input
            cout << "Enter Student ID to search: ";
            cin >> searchID;

            // Call the function to search by ID
            searchStudentByID(students, count, searchID);
            break;
        case 6:
            cout << "Have a great day!\n";
            break;
        default:
            cout << "Invalid option.\n";
        }
    } while (option != 6);
    return 0;
}