// Ethan Lawrence 09/01/2025 - 9/15/2025
/**
  * 1-4.- Create a C++ program that performs the 4 basic operations of two numbers, addition, subtraction, multiplication and division.
  * 5.- Create a C++ program on how to average the 2 numbers.
  * 6.- Create a C++ program to find out if the number 1 and the number 2 are even or odd.
  * 7.- Create a program to find out if the number 1 and number 2 is a positive, negative or ZERO
  * 8.- Create a program that calculates the square root
  * 9.- Create a program that calculates the absolute value of a number
  * 10.- Create a program that calculates the perimeter and area of a square
  * 11-13.- Create an algorithm that makes the multiplication table of 2 from 1 to 12.
  * 14.- Hypotenuse of a right triangle/Pythagoras theorem
  * 15 – 16.- Develop an algorithm that changes from dollars to euros and euros to dollars. Enter the current currency exchange rate. 
  * 17.- Exchange of two numbers. The number 1 must have the value of the number 2 and the number two must have the value
  * of the number 1.
  * 18.- Create an algorithm that shows me the smallest of 3 numbers.
  * 19.- Create an algorithm that shows me the largest of 3 numbers.
  * 20.- A sum of squares. Enter two numbers, then square each number and then add the squares of these two numbers.
  */

// Test cases for each exercise have been run and verified for correctness.

#include <iostream>
#include <cmath>

using namespace std;

class Exercises {
public:
    void wait() {
        char c;
        cout << "\nPress enter to continue...";
        // Looked this up on Stack Overflow and made my own version that seems to work. Not sure if there's unintended consequences.
        // https://stackoverflow.com/questions/903221/press-enter-to-continue
        cin.ignore();
        cin.get(c);
    }
    // Implementation for Exercises 1-4
    void exercise1_basic_operations() {
        cout << "\nBasic Operations Calculator";

        // Variable initialization
        int a, b;
        int add, sub, mult, div;

        // User Input
        cout << "\nEnter the first number: ";
        cin >> a;
        cout << "\nEnter the second number: ";
        cin >> b;

        // Calculations
        add = a + b;
        sub = a - b;
        mult = a * b;
        div = (b != 0) ? a / b : 0;

        // Display the result
        cout << "\nThe sum is " << add;
        cout << "\nThe difference is " << sub;
        cout << "\nThe product is " << mult;
        cout << "\nThe quotient is " << div;
    
        wait();
    }

    // Exercise 5
    void exercise5_average() {
        cout << "\nAverage Calculator";

        // Variable initialization
        int a, b;
        int avg;

        // User Input
        cout << "\nEnter the first number: ";
        cin >> a;
        cout << "\nEnter the second number: ";
        cin >> b;

        // Calculations
        avg = (a + b) / 2;

        // Display the result
        cout << "\nThe average is " << avg;

        wait();
    }

    // Exercise 6
    void exercise6_odd_even() {
        cout << "\nOdd or Even Checker";

        // Variable initialization
        int a;
        bool isOddOrNot;

        // User Input
        cout << "\nEnter a number: ";
        cin >> a;

        // Calculations and Display the result
        isOddOrNot = (a % 2 != 0);

        // Display the result using a ternary operator
        cout << "\nIs the first number odd? " << (isOddOrNot ? "Yes" : "No");

        wait();
    }

    // Exercise 7
    void exercise7_pos_neg_zero() {
        cout << "\nPositive, Negative or Zero Checker";

        // Variable initialization
        int a;
        string posNegZero;

        // User Input
        cout << "\nEnter a number: ";
        cin >> a;

        // Calculations and Display the result
        // One-liner using nested ternary operators
        posNegZero = (a > 0) ? "positive" : (a < 0) ? "negative" : "zero";
        cout << "\nThe first number is " << posNegZero;

        wait();
    }

    // Exercise 8
    void exercise8_sqrt() {
        cout << "Square Root Calculator\n";

        // Variable initialization
        float a;
        float sqroot;

        // User Input
        cout << "Enter the first number: ";
        cin >> a;

        // Error handling for negative input
        if (a < 0) {
            cout << "\nError: Cannot compute the square root of a negative number.";
            char c;
            cout << "\nPress any key to continue...";
            cin >> c;
            return;
        }

        // Calculations
        sqroot = sqrt(a);

        // Display the result
        cout << "\nThe square root of the first number is " << sqroot;

        wait();
    }

    // Exercise 9
    void exercise9_absolute_value() {
        cout << "\nAbsolute Value Calculator";

        // Variable initialization
        int a;

        // User Input
        cout << "\nEnter a number: ";
        cin >> a;

        // Calculations 
        int absValue = (a < 0) ? -a : a;

        // Display the result
        cout << "\nThe absolute value is " << absValue;

        wait();
    }
    // Exercise 10
    void exercise10_perimeter_area() {
        cout << "\nPerimeter and Area Calculator (Square)";

        // Variable initialization
        int a;

        // User Input
        cout << "\nEnter the length of a side of the square: ";
        cin >> a;

        // Calculations
        int perimeter = 4 * a;
        int area = a * a;

        // Display the result
        cout << "\nThe perimeter is " << perimeter;
        cout << "\nThe area is " << area;

        wait();
    }
    // Exercise 11-13
    void exercise11_multiplication_table() {
        cout << "\nMultiplication Table of 2:\n";

        // Multiplication Loop
        for (int i = 1; i <= 12; i++) {
            cout << "2 * " << i << " = " << 2 * i << endl;
        }

        wait();
    }
    // Exercise 14
    void exercise14_hypotenuse() {
        cout << "\nHypotenuse Calculator";

        // Variable initialization
        float a, b;

        // User Input
        cout << "\nHypotenuse Calculator\nEnter the length of a A: ";
        cin >> a;
        cout << "\nEnter the length of a B: ";
        cin >> b;

        // Calculations
        float c = sqrt((a * a) + (b * b));

        // Display the result
        cout << "\nThe length of the hypotenuse is " << c;

        wait();
    }
    // Exercises 15 and 16
    void exercise15_currency_exchange() {
        cout << "\nCurrency Exchange Calculator";

        // Variable initialization
        char choice;
        double amount, newAmount;
        double rate = 0.85; // Current exchange rate



        // Calculations and Display the result
        do {
            // User Input
            cout << "\nCurrency Exchange\nEnter '1' to convert dollars to euros or '2' to convert euros to dollars: ";
            cin >> choice;
        
            if (choice == '1') {
                cout << "\nEnter the amount in dollars: ";
                cin >> amount;
                newAmount = amount * rate;
                cout << "\n" << amount << " dollars is " << newAmount << " euros.";
            } else if (choice == '2') {
                cout << "\nEnter the amount in euros: ";
                cin >> amount;
                newAmount = amount / rate;
                cout << "\n" << amount << " euros is " << newAmount << " dollars.";
            }
        } while (choice != '1' && choice != '2');

        wait();
    }
    // Exercise 17
    void exercise17_exchange_numbers() {
        cout << "\nExchange Two Numbers";

        // Variable initialization
        int a, b, temp;

        // User Input
        cout << "\nEnter the first number: ";
        cin >> a;
        cout << "\nEnter the second number: ";
        cin >> b;

        // Display original values
        temp = a;
        a = b;
        b = temp;

        // Display the result
        cout << "\nAfter the exchange the first number is " << a << " and the second number is " << b;

        wait();
    }
    // Exercise 18
    void exercise18_smallest_of_three() {
        cout << "\nSmallest of Three Numbers";

        // Variable initialization
        int a, b, c;

        // User Input
        cout << "\nEnter three numbers: ";
        // Just found out I can do this!
        cin >> a >> b >> c;

        // Calculations
        int smallest = (a < b) ? (a < c ? a : c) : (b < c ? b : c);

        // Display the result
        cout << "\nThe smallest number is " << smallest;
        
        wait();
    }
    // Exercise 19
    void exercise19_largest_of_three() {
        cout << "\nLargest of Three Numbers";

        // Variable initialization
        int a, b, c;

        // User Input
        cout << "\nEnter three numbers: ";
        cin >> a >> b >> c;

        // Calculations
        // Logic One Liner using nested ternary operators
        int largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

        // Display the result
        cout << "\nThe largest number is " << largest;
        wait();
    }
    // Exercise 20
    void exercise20_sum_of_squares() {
        cout << "\nSum of Squares Calculator";

        // Variable initialization
        int a, b;

        // User Input
        cout << "\nEnter two numbers: ";
        cin >> a >> b;

        // Calculations
        int sumOfSquares = (a * a) + (b * b);

        // Display the result
        cout << "\nThe sum of the squares is " << sumOfSquares;
        wait();
    }
};

int main() {
    int a = 0;
    // Master Class Initialization
    Exercises ex;

    // Menu Loop
    do {
        // Display Menu
        cout << "\nSelect an exercise to run (1-20) or 0 to exit: ";
        cout << "\n1-4: Basic Operations\n5: Average\n6: Odd/Even\n7: Positive/Negative/Zero\n8: Square Root\n";
        cout << "9: Absolute Value\n10: Perimeter and Area of Square\n11-13: Multiplication Table of 2\n14: Hypotenuse\n";
        cout << "15-16: Currency Exchange\n17: Exchange Two Numbers\n18: Smallest of Three\n19: Largest of Three\n20: Sum of Squares\n0: Exit\n";

        // User Input
        cout << "Enter your choice: ";
        cin >> a;

        // Execute selected exercise by switch-case
        switch (a) {
            case 1:
            case 2:
            case 3:
            case 4:
                ex.exercise1_basic_operations();
                break;
            case 5:
                ex.exercise5_average();
                break;
            case 6:
                ex.exercise6_odd_even();
                break;
            case 7:
                ex.exercise7_pos_neg_zero();
                break;
            case 8:
                ex.exercise8_sqrt();
                break;
            case 9:
                ex.exercise9_absolute_value();
                break;
            case 10:
                ex.exercise10_perimeter_area();
                break;
            case 11:
            case 12:
            case 13:
                ex.exercise11_multiplication_table();
                break;
            case 14:
                ex.exercise14_hypotenuse();
                break;
            case 15:
                ex.exercise15_currency_exchange();
                break;
            case 17:
                ex.exercise17_exchange_numbers();
                break;
            case 18:
                ex.exercise18_smallest_of_three();
                break;
            case 19:
                ex.exercise19_largest_of_three();
                break;
            case 20:
                ex.exercise20_sum_of_squares();
                break;
            // Unexpected case
            default:
                if (a != 0) {
                    cout << "\nInvalid choice. Please select a number between 0 and 20.";
                }
                break;
        }
    // Continue until user chooses to exit
    } while (a != 0);

    return 0;
}
