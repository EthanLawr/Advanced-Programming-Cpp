// Ethan Lawrence - Sylva Virtual Assistant
// Date: 09/01/2025 - 10/16/2025
// Complete 65 Exercises Collection

/**
 * SYLVA VIRTUAL ASSISTANT - ALL 40 PROGRAMS
 * ==========================================
 *
 * CATEGORIES:
 *
 * 1. Number Operations
 *    - Basic arithmetic, comparisons, equation solvers
 *
 * 2. Interactive Fun
 *    - Quizzes and personalization
 *    - Custom Class Simulations
 *
 * 3. Array Operations - 1D
 *    - Single and dual array operations
 *
 * 4. Matrix Operations - 2D
 *    - 2x2 matrix calculations
 *
 * 5. Functions
 *    - Utility functions for integers
 *
 * 6. Additional Utilities
 *    - Unit Converters
 *
 * 7. Medical Screening
 *   - ADHD risk assessment
 */

// Include necessary headers
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <array>
#include <map>
#include <cctype>
#include <vector>
#include <algorithm>
#include <fstream>
#include <random>
#include <filesystem>

using namespace std;

// Main class containing all 65 exercise programs
class SylvaAssistant
{
private:
    // Helper function to pause execution and wait for user input
    void wait()
    {
        char c;
        cout << "\n\nPress Enter to continue...";
        cin.ignore(); // Clear input buffer
        cin.get(c);   // Wait for user to press Enter
        cout << "\n";
    }

public:

    // ========================================
    // PROGRAMS 1-20 (Original Set)
    // ========================================

    // Exercise 1-4: Performs basic arithmetic operations (add, subtract, multiply, divide)
    void exercise1_basic_operations()
    {
        cout << "\n========================================\n";
        cout << "  Basic Operations Calculator\n";
        cout << "========================================\n";

        int a, b; // Variables to store user input numbers
        cout << "\nEnter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;

        // Display results of all basic operations
        cout << "\n--- Results ---\n";
        cout << "Sum: " << (a + b) << endl;
        cout << "Difference: " << (a - b) << endl;
        cout << "Product: " << (a * b) << endl;
        // Check for division by zero to prevent runtime error
        if (b != 0)
        {
            cout << "Quotient: " << (a / b) << endl;
        }
        else
        {
            cout << "Quotient: Cannot divide by zero\n";
        }

        wait(); // Pause before returning to menu
    }

    // Exercise 5: Calculates the average of two numbers
    void exercise5_average()
    {
        cout << "\n========================================\n";
        cout << "  Average Calculator\n";
        cout << "========================================\n";

        int a, b;
        cout << "\nEnter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;

        // Use double division to get decimal result
        double avg = (a + b) / 2.0;
        cout << "\nThe average is: " << avg << endl;

        wait();
    }

    // Exercise 6: Determines if a number is odd or even using modulus operator
    void exercise6_odd_even()
    {
        cout << "\n========================================\n";
        cout << "  Odd or Even Checker\n";
        cout << "========================================\n";

        int a;
        cout << "\nEnter a number: ";
        cin >> a;

        // Use ternary operator to check if number is divisible by 2
        cout << "\nThe number is " << ((a % 2 == 0) ? "Even" : "Odd") << endl;

        wait();
    }

    // Exercise 7: Checks if number is positive, negative, or zero
    void exercise7_pos_neg_zero()
    {
        cout << "\n========================================\n";
        cout << "  Positive, Negative or Zero Checker\n";
        cout << "========================================\n";

        int a;
        cout << "\nEnter a number: ";
        cin >> a;

        // Nested ternary operator for three-way comparison
        string result = (a > 0) ? "Positive" : (a < 0) ? "Negative"
                                                       : "Zero";
        cout << "\nThe number is " << result << endl;

        wait();
    }

    // Exercise 8: Calculates square root with error handling for negative numbers
    void exercise8_sqrt()
    {
        cout << "\n========================================\n";
        cout << "  Square Root Calculator\n";
        cout << "========================================\n";

        double a;
        cout << "\nEnter a number: ";
        cin >> a;

        // Check for negative input before calculating square root
        if (a < 0)
        {
            cout << "\nError: Cannot compute square root of negative number.\n";
        }
        else
        {
            cout << "\nSquare root: " << sqrt(a) << endl; // Use cmath sqrt function
        }

        wait();
    }

    // Exercise 9: Calculates absolute value of a number
    void exercise9_absolute_value()
    {
        cout << "\n========================================\n";
        cout << "  Absolute Value Calculator\n";
        cout << "========================================\n";

        int a;
        cout << "\nEnter a number: ";
        cin >> a;

        // Use abs function from cmath library
        cout << "\nAbsolute value: " << abs(a) << endl;

        wait();
    }

    // Exercise 10: Calculates perimeter and area of a square given side length
    void exercise10_perimeter_area()
    {
        cout << "\n========================================\n";
        cout << "  Square Perimeter & Area Calculator\n";
        cout << "========================================\n";

        int side;
        cout << "\nEnter the side length: ";
        cin >> side;

        // Apply formulas: Perimeter = 4*side, Area = side²
        cout << "\nPerimeter: " << (4 * side) << endl;
        cout << "Area: " << (side * side) << endl;

        wait();
    }

    // Exercises 11-13: Displays multiplication table for number 2
    void exercise11_multiplication_table()
    {
        cout << "\n========================================\n";
        cout << "  Multiplication Table of 2\n";
        cout << "========================================\n\n";

        // Loop from 1 to 12 to display standard multiplication table
        for (int i = 1; i <= 12; i++)
        {
            cout << "2 × " << i << " = " << (2 * i) << endl;
        }

        wait();
    }

    // Exercise 14: Calculates hypotenuse using Pythagorean theorem
    void exercise14_hypotenuse()
    {
        cout << "\n========================================\n";
        cout << "  Hypotenuse Calculator\n";
        cout << "========================================\n";

        double a, b;
        cout << "\nEnter side A: ";
        cin >> a;
        cout << "Enter side B: ";
        cin >> b;

        // Apply Pythagorean theorem: c² = a² + b²
        double c = sqrt((a * a) + (b * b));
        cout << "\nHypotenuse: " << c << endl;

        wait();
    }

    // Exercises 15-16: Currency converter between USD and EUR
    void exercise15_currency_exchange()
    {
        cout << "\n========================================\n";
        cout << "  Currency Exchange (USD ↔ EUR)\n";
        cout << "========================================\n";

        int choice;
        double amount, rate = 0.85; // Exchange rate: 1 USD = 0.85 EUR

        cout << "\n1. Dollars to Euros\n2. Euros to Dollars\n";
        cout << "Choose (1-2): ";
        cin >> choice;

        cout << "Enter amount: ";
        cin >> amount;

        // Perform conversion based on user choice
        if (choice == 1)
        {
            cout << "\n$" << amount << " = €" << (amount * rate) << endl;
        }
        else if (choice == 2)
        {
            cout << "\n€" << amount << " = $" << (amount / rate) << endl;
        }

        wait();
    }

    // Exercise 17: Swaps values of two variables using temporary variable
    void exercise17_exchange_numbers()
    {
        cout << "\n========================================\n";
        cout << "  Exchange Two Numbers\n";
        cout << "========================================\n";

        int a, b;
        cout << "\nEnter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        cout << "\nBefore: a=" << a << ", b=" << b << endl;

        // Classic swap algorithm using temporary variable
        int temp = a;
        a = b;
        b = temp;

        cout << "After: a=" << a << ", b=" << b << endl;

        wait();
    }

    // Exercise 18: Finds smallest of three numbers using nested ternary operators
    void exercise18_smallest_of_three()
    {
        cout << "\n========================================\n";
        cout << "  Smallest of Three Numbers\n";
        cout << "========================================\n";

        int a, b, c;
        cout << "\nEnter three numbers: ";
        cin >> a >> b >> c;

        // Compare pairs to find minimum
        int smallest = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
        cout << "\nSmallest: " << smallest << endl;

        wait();
    }

    // Exercise 19: Finds largest of three numbers using nested ternary operators
    void exercise19_largest_of_three()
    {
        cout << "\n========================================\n";
        cout << "  Largest of Three Numbers\n";
        cout << "========================================\n";

        int a, b, c;
        cout << "\nEnter three numbers: ";
        cin >> a >> b >> c;

        // Compare pairs to find maximum
        int largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        cout << "\nLargest: " << largest << endl;

        wait();
    }

    // Exercise 20: Calculates sum of squares of two numbers
    void exercise20_sum_of_squares()
    {
        cout << "\n========================================\n";
        cout << "  Sum of Squares Calculator\n";
        cout << "========================================\n";

        int a, b;
        cout << "\nEnter two numbers: ";
        cin >> a >> b;

        // Calculate a² + b²
        int result = (a * a) + (b * b);
        cout << "\n"
             << a << "² + " << b << "² = " << result << endl;

        wait();
    }

    // ========================================
    // PROGRAMS 21-40 (2nd Set of Problems)
    // ========================================

    // Program 21: Enhanced version finding both largest and smallest of three numbers
    void program21_largest_smallest()
    {
        cout << "\n========================================\n";
        cout << "  Find Largest & Smallest\n";
        cout << "========================================\n";

        double n1, n2, n3;
        cout << "\nEnter three numbers: ";
        cin >> n1 >> n2 >> n3;

        // Find both extremes in single pass
        double largest = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
        double smallest = (n1 < n2) ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);

        cout << "\nLargest: " << largest << endl;
        cout << "Smallest: " << smallest << endl;

        wait();
    }

    // Program 22: Calculates sum of first 100 positive integers using loop
    void program22_sum_100()
    {
        cout << "\n========================================\n";
        cout << "  Sum of First 100 Integers\n";
        cout << "========================================\n";

        int sum = 0;
        // Iterative loop to sum 1+2+3+...+100
        for (int i = 1; i <= 100; i++)
        {
            sum += i;
        }

        cout << "\nSum of 1 to 100: " << sum << endl;

        wait();
    }

    // Program 23: Calculates sum of first 100 even integers (2, 4, 6, ..., 200)
    void program23_sum_100_even()
    {
        cout << "\n========================================\n";
        cout << "  Sum of First 100 Even Integers\n";
        cout << "========================================\n";

        int sum = 0;
        // Generate even numbers by multiplying index by 2
        for (int i = 1; i <= 100; i++)
        {
            sum += (i * 2);
        }

        cout << "\nSum of first 100 even numbers: " << sum << endl;

        wait();
    }

    // Program 24: Solves linear equation of form ax + b = c
    void program24_linear_equation()
    {
        cout << "\n========================================\n";
        cout << "  Linear Equation Solver (ax + b = c)\n";
        cout << "========================================\n";

        double a, b, c;
        cout << "\nEnter coefficient a: ";
        cin >> a;
        cout << "Enter coefficient b: ";
        cin >> b;
        cout << "Enter constant c: ";
        cin >> c;

        // Check for division by zero (no unique solution if a = 0)
        if (a == 0)
        {
            cout << "\nError: 'a' cannot be zero!\n";
        }
        else
        {
            // Solve for x: x = (c - b) / a
            double x = (c - b) / a;
            cout << "\nSolution: x = " << x << endl;
        }

        wait();
    }

    // Program 25: Solves quadratic equation ax² + bx + c = 0 using quadratic formula
    void program25_quadratic_equation()
    {
        cout << "\n========================================\n";
        cout << "  Quadratic Equation Solver (ax² + bx + c = 0)\n";
        cout << "========================================\n";

        double a, b, c;
        cout << "\nEnter coefficient a: ";
        cin >> a;
        cout << "\nEnter coefficient b: ";
        cin >> b;
        cout << "Enter coefficient c: ";
        cin >> c;

        // Quadratic equations require a ≠ 0
        if (a == 0)
        {
            cout << "\nError: 'a' cannot be zero!\n";
            wait();
            return;
        }

        // Calculate discriminant (b² - 4ac) to determine nature of roots
        double discriminant = (b * b) - (4 * a * c);
        cout << "\nDiscriminant: " << discriminant << endl;

        // Analyze discriminant to determine root types
        if (discriminant > 0)
        {
            // Two distinct real roots
            double x1 = (-b + sqrt(discriminant)) / (2 * a);
            double x2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Two real roots:\n";
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (discriminant == 0)
        {
            // One repeated real root
            double x = -b / (2 * a);
            cout << "One repeated root:\n";
            cout << "x = " << x << endl;
        }
        else
        {
            // Two complex conjugate roots
            double real = -b / (2 * a);
            double imag = sqrt(-discriminant) / (2 * a);
            cout << "Two complex roots:\n";
            cout << "x1 = " << real << " + " << imag << "i\n";
            cout << "x2 = " << real << " - " << imag << "i\n";
        }

        wait();
    }

    // Program 26: Calculates sum of first N positive integers with input validation
    void program26_sum_n()
    {
        cout << "\n========================================\n";
        cout << "  Sum of First N Integers\n";
        cout << "========================================\n";

        int n;
        // Input validation loop to ensure positive input
        do
        {
            cout << "\nEnter N (must be > 0): ";
            cin >> n;
        } while (n <= 0);

        long sum = 0; // Use long to handle larger sums
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }

        cout << "\nSum of 1 to " << n << ": " << sum << endl;

        wait();
    }

    // Program 27: Calculates sum of first N even integers
    void program27_sum_n_even()
    {
        cout << "\n========================================\n";
        cout << "  Sum of First N Even Integers\n";
        cout << "========================================\n";

        int n;
        // Input validation for positive N
        do
        {
            cout << "\nEnter N (must be > 0): ";
            cin >> n;
        } while (n <= 0);

        long sum = 0;
        // Generate first N even numbers: 2, 4, 6, ..., 2N
        for (int i = 1; i <= n; i++)
        {
            sum += (i * 2);
        }

        cout << "\nSum of first " << n << " even numbers: " << sum << endl;

        wait();
    }

    // Program 28: Converts between kilometers and meters
    void program28_unit_converter()
    {
        cout << "\n========================================\n";
        cout << "  Distance Unit Converter\n";
        cout << "========================================\n";

        int choice;
        double value;

        cout << "\n1. Kilometers to Meters\n2. Meters to Kilometers\n";
        cout << "Choose (1-2): ";
        cin >> choice;

        cout << "Enter value: ";
        cin >> value;

        // Apply conversion factors: 1 km = 1000 m
        if (choice == 1)
        {
            cout << "\n"
                 << value << " km = " << (value * 1000) << " m\n";
        }
        else if (choice == 2)
        {
            cout << "\n"
                 << value << " m = " << (value / 1000) << " km\n";
        }

        wait();
    }

    // Program 29: Interactive quiz game with scoring system
    void program29_quiz()
    {
        cout << "\n========================================\n";
        cout << "  Math and CPP Knowledge Quiz\n";
        cout << "========================================\n";

        int score = 0;
        int answer;

        // Question 1: Multiple choice math question
        cout << "\nQ1: What is 12 × 12?\n";
        cout << "1. 124  2. 144  3. 134  4. 154\n";
        cout << "Answer: ";
        cin >> answer;
        if (answer == 2)
        {
            score += 100;
            cout << "✓ Correct!\n";
        }
        else
        {
            cout << "✗ Wrong!\n";
        }
        // Question 2: Multiple choice math question
        cout << "\nQ2: What is 2^10?\n";
        cout << "1. 256  2. 512  3. 1024  4. 2048\n";
        cout << "Answer: ";
        cin >> answer;
        if (answer == 3)
        {
            score += 100;
            cout << "✓ Correct!\n";
        }
        else
        {
            cout << "✗ Wrong!\n";
        }

        // Question 2: Multiple choice math question
        cout << "\nQ2: What is 3^10?\n";
        cout << "1. 63021  2. 19683  3. 59049  4. 177147\n";
        cout << "Answer: ";
        cin >> answer;
        if (answer == 3)
        {
            score += 100;
            cout << "✓ Correct!\n";
        }
        else
        {
            cout << "✗ Wrong!\n";
        }
        // Question 4: Yes/no programming question
        cout << "\nQ4: Is C++ object-oriented?\n";
        cout << "1. Yes  2. No\n";
        cout << "Answer: ";
        cin >> answer;
        if (answer == 1)
        {
            score += 100;
            cout << "✓ Correct!\n";
        }
        else
        {
            cout << "✗ Wrong!\n";
        }

        // Question 5: True/False programming question
        cout << "\nQ5: Is C++ a programming language?\n";
        cout << "1. True  2. False\n";
        cout << "Answer: ";
        cin >> answer;
        if (answer == 1)
        {
            score += 100;
            cout << "✓ Correct!\n";
        }
        else
        {
            cout << "✗ Wrong!\n";
        }

        // Display final results with motivational messages
        cout << "\n========================================\n";
        cout << "Final Score: " << score << " / 500\n";
        if (score > 300)
        {
            cout << "Good job!\n";
        }
        else
        {
            cout << "Never Give Up. Try again!\n";
        }
        cout << "========================================\n";

        wait();
    }

    // Program 30: Interactive t-shirt customization questionnaire
    void program30_tshirt_quiz()
    {
        cout << "\n========================================\n";
        cout << "  T-Shirt Personalization Quiz\n";
        cout << "========================================\n";

        int choice;
        string sleeves, printChoice, design, size, color, fit;

        // Q1: Sleeve length selection
        cout << "\nQ1: Sleeve length?\n1. Short  2. Long\n";
        cout << "Choice: ";
        cin >> choice;
        sleeves = (choice == 1) ? "short-sleeved" : "long-sleeved";

        // Q2: Print preference
        cout << "\nQ2: Want a print?\n1. Yes  2. No\n";
        cout << "Choice: ";
        cin >> choice;
        printChoice = (choice == 1) ? "with" : "without";

        // Q3: Design selection (conditional based on print choice)
        if (printChoice == "with")
        {
            cout << "\nQ3: Print design?\n1. Eagle  2. Dragon  3. Geometric  4. Abstract\n";
            cout << "Choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                design = "an eagle print";
                break;
            case 2:
                design = "a dragon print";
                break;
            case 3:
                design = "a geometric pattern";
                break;
            case 4:
                design = "an abstract art print";
                break;
            default:
                design = "a custom print";
                break;
            }
        }
        else
        {
            design = "no print";
        }

        // Q4: Size selection
        cout << "\nQ" << (printChoice == "with" ? "4" : "3") << ": Size?\n";
        cout << "1. S  2. M  3. L  4. XL\n";
        cout << "Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            size = "S";
            break;
        case 2:
            size = "M";
            break;
        case 3:
            size = "L";
            break;
        case 4:
            size = "XL";
            break;
        default:
            size = "M";
            break; // Default fallback
        }

        // Q5: Color selection
        int qNum = (printChoice == "with" ? 5 : 4);
        cout << "\nQ" << qNum << ": Color?\n";
        cout << "1. Blue  2. Black  3. White  4. Red\n";
        cout << "Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            color = "blue";
            break;
        case 2:
            color = "black";
            break;
        case 3:
            color = "white";
            break;
        case 4:
            color = "red";
            break;
        default:
            color = "blue";
            break;
        }

        // Q6: Fit style selection
        qNum = (printChoice == "with" ? 6 : 5);
        cout << "\nQ" << qNum << ": Fit style?\n";
        cout << "1. Slim  2. Regular  3. Relaxed  4. Oversized\n";
        cout << "Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            fit = "slim fit";
            break;
        case 2:
            fit = "regular fit";
            break;
        case 3:
            fit = "relaxed fit";
            break;
        case 4:
            fit = "oversized";
            break;
        default:
            fit = "regular fit";
            break;
        }

        // Display personalized t-shirt summary
        cout << "\n========================================\n";
        cout << "YOUR CUSTOM T-SHIRT:\n";
        cout << "========================================\n";
        cout << "The user prefers a " << color << ", " << sleeves << " t-shirt, ";
        cout << "size " << size << ", " << fit << ", ";
        if (printChoice == "with")
        {
            cout << "with " << design << ".\n";
        }
        else
        {
            cout << "with " << design << ".\n";
        }
        cout << "========================================\n";

        wait();
    }

    // Program 31: Demonstrates array iteration and sum calculation
    void program31_array_sum()
    {
        cout << "\n========================================\n";
        cout << "  Array Sum Calculator\n";
        cout << "========================================\n";

        // Declare and initialize the array
        int numbers[5] = {2, 4, 6, 8, 10};
        int sum = 0;

        // Sum the elements of the array
        for (int i = 0; i < 5; i++)
        {
            sum += numbers[i];
        }

        // Display the total
        cout << "Total: " << sum << endl;

        wait();
    }

    // Program 32: Demonstrates element addition of two arrays
    void program32_dual_array_add()
    {
        cout << "\n========================================\n";
        cout << "  Dual Array Addition\n";
        cout << "========================================\n";

        // Initialize two arrays with sample data
        int a1[5] = {2, 4, 6, 8, 10};
        int b1[5] = {20, 40, 60, 80, 100};
        int c1[5]; // Result array

        // Display input arrays
        cout << "\nArray a1: ";
        for (int i = 0; i < 5; i++)
            cout << a1[i] << " ";

        cout << "\nArray b1: ";
        for (int i = 0; i < 5; i++)
            cout << b1[i] << " ";

        // Perform element-wise addition: c1[i] = a1[i] + b1[i]
        cout << "\n\nCalculating c1 = a1 + b1:\n";
        for (int i = 0; i < 5; i++)
        {
            c1[i] = a1[i] + b1[i];
        }

        // Display result array
        cout << "Array c1: ";
        for (int i = 0; i < 5; i++)
            cout << c1[i] << " ";
        cout << endl;

        wait();
    }

    // Program 33: Demonstrates element multiplication and division of arrays
    void program33_array_mult_div()
    {
        cout << "\n========================================\n";
        cout << "  Array Multiplication & Division\n";
        cout << "========================================\n";

        // Sample arrays for operations
        int a1[5] = {2, 4, 6, 8, 10};
        int b1[5] = {20, 40, 60, 80, 100};
        int d1[5], e1[5]; // Result arrays

        // Display input arrays
        cout << "\nArray a1: ";
        for (int i = 0; i < 5; i++)
            cout << a1[i] << " ";

        cout << "\nArray b1: ";
        for (int i = 0; i < 5; i++)
            cout << b1[i] << " ";

        // Element-wise multiplication
        cout << "\n\nMultiplication (d1 = a1 * b1):\n";
        for (int i = 0; i < 5; i++)
        {
            d1[i] = a1[i] * b1[i];
        }
        cout << "Array d1: ";
        for (int i = 0; i < 5; i++)
            cout << d1[i] << " ";

        // Element-wise division
        cout << "\n\nDivision (e1 = b1 / a1):\n";
        for (int i = 0; i < 5; i++)
        {
            e1[i] = b1[i] / a1[i]; // Safe since a1 elements are non-zero
        }
        cout << "Array e1: ";
        for (int i = 0; i < 5; i++)
            cout << e1[i] << " ";
        cout << endl;

        wait();
    }

    // Program 34: Comprehensive array operations with user input
    void program34_array_operations()
    {
        cout << "\n========================================\n";
        cout << "  Array Operations Calculator\n";
        cout << "========================================\n";

        // Arrays for user input and results
        int A[5], B[5];
        int Add[5], Sub[5], Mult[5];
        double Div[5];

        // Get user input for array A
        cout << "\nEnter 5 elements for Array A:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "A[" << i << "]: ";
            cin >> A[i];
        }

        // Get user input for array B
        cout << "\nEnter 5 elements for Array B:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "B[" << i << "]: ";
            cin >> B[i];
        }

        // Perform all four basic operations element-wise
        for (int i = 0; i < 5; i++)
        {
            Add[i] = A[i] + B[i];
            Sub[i] = A[i] - B[i];
            Mult[i] = A[i] * B[i];
            // Check for division by zero
            Div[i] = (B[i] != 0) ? (double)A[i] / B[i] : 0;
        }

        // Display results in formatted table
        cout << "\n========================================\n";
        cout << "RESULTS:\n";
        cout << "========================================\n";

        cout << "Addition:       ";
        for (int i = 0; i < 5; i++)
            cout << setw(6) << Add[i];
        cout << "\nSubtraction:    ";
        for (int i = 0; i < 5; i++)
            cout << setw(6) << Sub[i];
        cout << "\nMultiplication: ";
        for (int i = 0; i < 5; i++)
            cout << setw(6) << Mult[i];
        cout << "\nDivision:       ";
        for (int i = 0; i < 5; i++)
        {
            if (B[i] != 0)
                cout << setw(6) << fixed << setprecision(2) << Div[i];
            else
                cout << setw(6) << "undef"; // Undefined for division by zero
        }
        cout << "\n========================================\n";

        wait();
    }

    // Program 35: Demonstrates scalar multiplication of array elements
    void program35_scalar_mult()
    {
        cout << "\n========================================\n";
        cout << "  Array Scalar Multiplication\n";
        cout << "========================================\n";

        int arr[5], result[5], n;

        // Get array elements from user
        cout << "\nEnter 5 elements:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Element [" << i << "]: ";
            cin >> arr[i];
        }

        // Get scalar multiplier
        cout << "\nEnter scalar multiplier n: ";
        cin >> n;

        cout << "\n========================================\n";
        cout << "Multiplying each element by " << n << ":\n";
        cout << "========================================\n";

        // Multiply each element by scalar and display result
        for (int i = 0; i < 5; i++)
        {
            result[i] = arr[i] * n;
            cout << result[i] << " ";
        }
        cout << "\n========================================\n";

        wait();
    }

    // Program 36: Calculates sum of all elements in a 2x2 matrix
    void program36_matrix_sum()
    {
        cout << "\n========================================\n";
        cout << "  Matrix Sum Calculator (2x2)\n";
        cout << "========================================\n";

        int matrix[2][2];
        int sum = 0;

        // Get matrix elements from user
        cout << "\nEnter elements for 2x2 matrix:\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << "Element [" << i << "][" << j << "]: ";
                cin >> matrix[i][j];
            }
        }

        // Display matrix in formatted form and calculate sum
        cout << "\nMatrix:\n";
        for (int i = 0; i < 2; i++)
        {
            cout << "| ";
            for (int j = 0; j < 2; j++)
            {
                cout << setw(4) << matrix[i][j] << " ";
                sum += matrix[i][j]; // Accumulate sum
            }
            cout << "|\n";
        }

        cout << "\nSum of all elements: " << sum << endl;

        wait();
    }

    // Program 37: Performs addition, subtraction, and multiplication on 2x2 matrices
    void program37_matrix_operations()
    {
        cout << "\n========================================\n";
        cout << "  Matrix Operations (2x2)\n";
        cout << "========================================\n";

        int A[2][2], B[2][2];
        int Add[2][2], Sub[2][2], Mult[2][2];

        // Input Matrix A
        cout << "\nEnter elements for Matrix A:\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << "A[" << i << "][" << j << "]: ";
                cin >> A[i][j];
            }
        }

        // Input Matrix B
        cout << "\nEnter elements for Matrix B:\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << "B[" << i << "][" << j << "]: ";
                cin >> B[i][j];
            }
        }

        // Perform matrix operations
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                // Element-wise addition and subtraction
                Add[i][j] = A[i][j] + B[i][j];
                Sub[i][j] = A[i][j] - B[i][j];

                // Matrix multiplication using dot product
                Mult[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    Mult[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Display all results in matrix format
        cout << "\n========================================\n";
        cout << "ADDITION (A + B):\n";
        for (int i = 0; i < 2; i++)
        {
            cout << "| ";
            for (int j = 0; j < 2; j++)
                cout << setw(4) << Add[i][j] << " ";
            cout << "|\n";
        }

        cout << "\nSUBTRACTION (A - B):\n";
        for (int i = 0; i < 2; i++)
        {
            cout << "| ";
            for (int j = 0; j < 2; j++)
                cout << setw(4) << Sub[i][j] << " ";
            cout << "|\n";
        }

        cout << "\nMULTIPLICATION (A * B):\n";
        for (int i = 0; i < 2; i++)
        {
            cout << "| ";
            for (int j = 0; j < 2; j++)
                cout << setw(4) << Mult[i][j] << " ";
            cout << "|\n";
        }
        cout << "========================================\n";

        wait();
    }

    // Program 38: Helper function to find greater of two numbers
    int findGreater(int a, int b)
    {
        return (a > b) ? a : b; // Return larger value using ternary operator
    }

    // Program 38: Demonstrates function usage for finding greater number
    void program38_greater_function()
    {
        cout << "\n========================================\n";
        cout << "  Find Greater Number (Function)\n";
        cout << "========================================\n";

        int n1, n2;
        cout << "\nEnter first number: ";
        cin >> n1;
        cout << "Enter second number: ";
        cin >> n2;

        // Call helper function to find greater number
        int result = findGreater(n1, n2);
        cout << "\nThe greater number is: " << result << endl;

        wait();
    }

    // Program 39: Helper function to calculate sum of two numbers
    int calculateSum(int a, int b)
    {
        return a + b; // Simple addition operation
    }

    // Program 39: Demonstrates function usage for sum calculation
    void program39_sum_function()
    {
        cout << "\n========================================\n";
        cout << "  Sum Calculator (Function)\n";
        cout << "========================================\n";

        int n1, n2;
        cout << "\nEnter first number: ";
        cin >> n1;
        cout << "Enter second number: ";
        cin >> n2;

        // Call helper function to calculate sum
        int result = calculateSum(n1, n2);
        cout << "\n"
             << n1 << " + " << n2 << " = " << result << endl;

        wait();
    }

    // Program 40: Helper function to calculate difference of two numbers
    int calculateDifference(int a, int b)
    {
        return a - b; // Simple subtraction operation
    }

    // Program 40: Demonstrates function usage for difference calculation
    void program40_difference_function()
    {
        cout << "\n========================================\n";
        cout << "  Difference Calculator  \n";
        cout << "========================================\n";

        int n1, n2;
        cout << "\nEnter first number: ";
        cin >> n1;
        cout << "Enter second number: ";
        cin >> n2;

        // Call helper function to calculate difference
        int result = calculateDifference(n1, n2);
        cout << "\n"
             << n1 << " - " << n2 << " = " << result << endl;

        wait();
    }

    // Program 99: ADHD Self-Assessment Questionnaire
    int getValidatedChoice()
    {
        int choice;
        do
        {
            cout << "Your answer (1=Rarely or Never, 2=Sometimes, 3=Often or Always): ";
            cin >> choice;
        } while (choice != 1 && choice != 2 && choice != 3);
        return choice;
    }

    // Program 99: ADHD Self-Assessment Questionnaire
    void program99_medical_assistant()
    {
        // Question Variable
        array<string, 10> items = {
            "1) I have trouble keeping my attention on tasks or conversations.",
            "2) I am easily distracted by noises, notifications, and my own thoughts.",
            "3) I often start tasks but struggle to finish them.",
            "4) I frequently misplace important items (keys, ID, assignments, etc.).",
            "5) I have difficulty organizing tasks or managing steps in a project.",
            "6) I procrastinate or avoid tasks that require continuous mental effort.",
            "7) I act impulsively (speaking/acting before thinking, interrupting others in conversations) more than I’d like.",
            "8) I feel restless when I’m expected to sit still.",
            "9) I lose track of time or underestimate how long activities will take.",
            "10) I find it hard to follow routines or maintain consistent habits."};
        // Recommendation Variable
        array<string, 5> tips;
        // Output Variables
        string level, interpretation;

        // Scoring variables
        int total = 0, minScore = 10, maxScore = 30;
        double normalized100;
        // Likert legend
        cout << "Scale:\n  1 = Rarely/Never\n  2 = Sometimes\n  3 = Often/Always\n\n";
        // Introduction
        const char *intro =
            "=============================================\n"
            "  Virtual Health Assistant: ADHD Self-Check\n"
            "=============================================\n\n"
            "Purpose:\n"
            "  This short questionnaire screens for common ADHD-related challenges\n"
            "  (attention, organization, impulsivity, restlessness, time management).\n"
            "Instructions:\n"
            "  For each statement, answer how it applies to you:\n"
            "    1 = Rarely/Never,  2 = Sometimes,  3 = Often/Always\n\n";
        cout << intro;
        // Questions loop using the getValidatedChoice() method
        // Achieved this idea with help from ChatGPT-5. Specifically, on how to utilize a loop to iterate through an array variable.
        for (const auto &q : items)
        {
            cout << q << "\n";
            int ans = getValidatedChoice();
            total += ans;
            cout << "\n";
        }

        // Sum range: 10..30; higher = more frequent challenges
        normalized100 = (static_cast<double>(total - minScore) / (maxScore - minScore)) * 100.0;
        if (normalized100 < 0)
            normalized100 = 0;
        if (normalized100 > 100)
            normalized100 = 100;

        if (total <= 15)
        {
            level = "Low ADHD Symptom Burden";
            interpretation = "You report relatively few ADHD-like challenges in day-to-day functioning.";
            tips = {
                "Keep what works: simple routines, a single to-do list, and a regular sleep schedule.",
                "Use basic distraction controls (silent mode, notification batching)."};
        }
        else if (total <= 22)
        {
            level = "Moderate ADHD Symptom Burden";
            interpretation = "You report noticeable challenges that sometimes affect productivity and well-being.";
            tips = {
                "Try to schedule the hardest tasks earliest.",
                "Break tasks into tiny steps; define the 'first 2 minutes' action for each.",
                "Reduce friction: prepare your workspace the night before (applications, files)."};
        }
        else
        {
            level = "High ADHD Symptom Burden";
            interpretation = "You report frequent challenges that may significantly impact daily life.";
            tips = {
                "Consider a professional evaluation (e.g., primary care or mental health specialist).",
                "You should attempt to look into evidence-based strategies in managing ADHD such as behavioral therapy and medication.",
                "Structure your day: consistent wake/sleep, anchored routine blocks, meal/exercise times.",
                "Use easy-access tools: phone reminders, app/site blockers during focus windows.",
                "If applicable, discuss evidence-based treatments with a clinician."};
        }

        // Results output
        cout << "---------------\n";
        cout << "Results\n";
        cout << "---------------\n";
        cout << "Raw score (10–30): " << total << "\n";
        cout << "Symptom index (0–100): " << static_cast<int>(normalized100) << "\n";
        cout << "Classification: " << level << "\n";
        cout << "Interpretation: " << interpretation << "\n\n";

        cout << "Personalized Recommendations:\n";
        for (const auto &t : tips)
        {
            cout << " • " << t << "\n";
        }
        wait();
    }

    // ========================================
    // Programs 41-65: (3rd Set of Problems)
    // ========================================

    // Calculates area of a triangle given base and height (cm)
    void program41_area_of_triangle()
    {
        // No new concepts to note here.
        cout << "\n========================================\n";
        cout << "  Area of a Triangle Calculator  \n";
        cout << "========================================\n";

        // Variable declarations
        int base, height;

        // Input base and height from user
        cout << "\nEnter base of the triangle (cm): ";
        cin >> base;
        cout << "Enter height of the triangle (cm): ";
        cin >> height;

        // Area calculation using 0.5*b*h formula
        double area = 0.5 * base * height;

        // Display result
        cout << "\nArea of the triangle: " << area << " cm^2" << endl;

        wait();
    }

    // Create the sum of the first 100 odd integers. This should be 10,000.
    void program42_sumOf100OddIntegers()
    {
        // No new concepts to note here.

        // Variable Initialization
        int sum = 0;

        // Calculation Loop
        for (int i = 1; i <= 100; i++)
        {
            sum += i * 2 - 1;
        }

        // Display
        cout << "The sum of the first 100 odd integers is " << sum << endl;

        wait();
    }

    // Utilize the Inverse Matrix Method to solve 2 linear equations.
    void program43_SolveTwoLinearEquations()
    {
        // No new concepts to note here.
        cout << "\n========================================\n";
        cout << "  Solve 2 Linear Equations (2x2)  \n";
        cout << "========================================\n";
        // Variable Initialization
        double a1, b1, c1; // Coefficients for equation 1
        double a2, b2, c2; // Coefficients for equation 2
        double det, x, y;  // Determinant and solutions

        /*
        [ a1 b1 ] [ x ] = [ c1 ]
        [ a2 b2 ] [ y ]   [ c2 ]
        */

        // User Input
        cout << "\nFor equations of the form:\n";
        cout << "a1*x + b1*y = c1\n";
        cout << "a2*x + b2*y = c2\n";
        cout << "Enter coefficients a1, b1, c1 for equation 1:\n";
        cin >> a1 >> b1 >> c1;
        cout << "Enter coefficients a2, b2, c2 for equation 2:\n";
        cin >> a2 >> b2 >> c2;

        // Calculation
        det = a1 * b2 - a2 * b1;
        if (det != 0) // Theorem 4.8 (Unique Solution)
        {
            x = (c1 * b2 - c2 * b1) / det;
            y = (a1 * c2 - a2 * c1) / det;
        }
        else
        {
            cout << "The equations have no unique solution (determinant is zero)." << endl;
            wait();
            return;
        }

        // Display
        cout << "Solutions:\n x = " << x << "\n y = " << y << "\n";

        wait();
    }

    // Create a conversion method that converts from  Dollars to Pesos
    void program44_DollarsToPesos()
    {
        cout << "\n========================================\n";
        cout << "  Currency Converter: Dollars to Pesos  \n";
        cout << "========================================\n";
        // No new concepts to note here.

        // Variable Initialization
        double amount;

        // User Input
        cout << "\nEnter amount in US Dollars: $";
        cin >> amount;

        // Calculation
        double pesos = amount * 54.0; // 10/15 conversion rate

        // Display
        cout << "\nEquivalent amount in Pesos: $" << pesos << " MXN" << endl;

        wait();
    }

    // Create a conversion method that converts from  Pesos to Dollars
    void program45_PesosToDollars()
    {
        cout << "\n========================================\n";
        cout << "  Currency Converter: Pesos to Dollars  \n";
        cout << "========================================\n";
        // No new concepts to note here.

        // Variable Initialization
        double amount;

        // User Input
        cout << "\nEnter amount in Pesos: $";
        cin >> amount;

        // Calculation
        double dollars = amount / 54.0; // 15/10 conversion rate

        // Display
        cout << "\nEquivalent amount in Dollars: $" << dollars << " USD" << endl;

        wait();
    }

    // Create a conversion method that converts from Dollars to Yen
    void program46_DollarsToYen()
    {
        cout << "\n========================================\n";
        cout << "  Currency Converter: Dollars to Yen  \n";
        cout << "========================================\n";
        // No new concepts to note here.

        // Variable Initialization
        double amount;

        // User Input
        cout << "\nEnter amount in US  Dollars: $";
        cin >> amount;

        // Calculation
        double yen = amount * 151.24; // 1 USD = 151.24 JPY

        // Display
        cout << "\nEquivalent amount in Yen: ¥" << yen << " JPY" << endl;

        wait();
    }

    // Create a conversion method that converts from Yen to Dollars
    void program47_YenToDollars()
    {
        cout << "\n========================================\n";
        cout << "  Currency Converter: Yen to Dollars  \n";
        cout << "========================================\n";
        // No new concepts to note here.

        // Variable Initialization
        double amount;

        // User Input
        cout << "\nEnter amount in Yen: ¥";
        cin >> amount;

        // Calculation
        double dollar = amount / 151.24; // 1 USD = 151.24 JPY

        // Display
        cout << "\nEquivalent amount in Dollars: $" << dollar << " USD" << endl;

        wait();
    }

    // Create a conversion method that converts from Dollars to Rupees
    void program48_DollarsToRupees()
    {
        cout << "\n========================================\n";
        cout << "  Currency Converter: Dollars to Rupees  \n";
        cout << "========================================\n";
        // No new concepts to note here.

        // Variable Initialization
        double amount;

        // User Input
        cout << "\nEnter amount in US Dollars: $";
        cin >> amount;

        // Calculation
        double rupees = amount * 88.6; // 1 USD = 88.6 INR

        // Display
        cout << "\nEquivalent amount in Rupees: ₹" << rupees << " INR" << endl;

        wait();
    }

    // Create a conversion method that converts from Rupees to Dollars
    void program49_RupeesToDollars()
    {
        cout << "\n========================================\n";
        cout << "  Currency Converter: Rupees to Dollars  \n";
        cout << "========================================\n";
        // No new concepts to note here.

        // Variable Initialization
        double amount;

        // User Input
        cout << "\nEnter amount in Rupees: ₹";
        cin >> amount;

        // Calculation
        double dollars = amount / 88.6; // 1 USD = 88.6 INR

        // Display
        cout << "\nEquivalent amount in Dollars: $" << dollars << " USD" << endl;

        wait();
    }

    // Grabbed this from Google AI Search. It did not give me a source.
    bool containsOnlyLetters(const string &str)
    {
        for (char c : str)
            if (!isalpha(static_cast<unsigned char>(c)))
                return false;
        // If all characters are alphabets, return true
        return true;
    }

    // AI made this function for me to get the source file path. I told it the reason for the issue and it was able to find the solution. Claude Sonnet 4.5
    string getSourceFilePath()
    {
        filesystem::path sourcePath(__FILE__);
        return sourcePath.parent_path().string();
    }

    // Create for a simple game that utilizes a Game class.
    void program50_Game()
    {
        cout << "\n========================================\n";
        cout << "  Simple Game Simulation: Wordle \n";
        cout << "========================================\n";

        cout << "\nWelcome to the Wordle-like game!\n";
        cout << "You have 6 attempts to guess a 5-letter word.\n";
        cout << "After each guess, you'll receive hints:\n";
        cout << " - Uppercase letters indicate correct letter and position.\n";
        cout << " - Lowercase letters indicate correct letter but wrong position.\n";
        cout << " - Underscores (_) indicate incorrect letters.\n";

        // Variable declarations
        int randomValue, attempts = 6;
        string guess, line, targetWord;
        vector<string> wordPool;

        // Wordpool Source: https://darkermango.github.io/5-Letter-words/words.txt
        // Grabs the word list text file
        string wordFilePath = getSourceFilePath() + "\\nouns.txt";
        ifstream wordFile(wordFilePath);

        cout << "Trying to open file at: " << wordFilePath << endl;
        // Checks if the file opened successfully
        if (wordFile.is_open())
        {
            // Loads all lines from the file into the wordPool vector
            while (getline(wordFile, line))
                wordPool.push_back(line);
            // Close the file after reading
            wordFile.close();
        }
        else
        {
            cerr << "Error: Could not open the word list file." << endl;
            return;
        }

        // Seed random number generator. Seed is based on current computer time.
        randomValue = rand() % wordPool.size();
        targetWord = wordPool[randomValue];

        for (int attempt = 1; attempt <= attempts; attempt++)
        {

            cout << "\nAttempt " << attempt << " of " << attempts << ". ";
            cout << "Here are your clues:\n";
            cout << "Enter a 5 letter guess: ";
            cin >> guess;

            // Input validation
            if (guess.length() != 5 || containsOnlyLetters(guess) == false)
            {
                cout << "Please enter a valid 5-letter word." << endl;
                attempt--;
                continue;
            }

            // Check guess against target word and provide feedback
            string hints = "";
            for (int i = 0; i < 5; i++)
            {
                if (guess[i] == targetWord[i])
                    hints += toupper(guess[i]); // Correct letter and position
                else if (targetWord.find(guess[i]) != string::npos)
                    hints += tolower(guess[i]); // Correct letter, wrong position
                else
                    hints += '_'; // Incorrect letter
            }

            cout << "Hints: " << hints << endl;

            // Check for win condition
            if (guess == targetWord)
            {
                cout << "Congratulations! You've guessed the word correctly!" << endl;
                break;
            }
            // Losing Screen
            if (attempt == attempts)
                cout << "You have run out of guesses! The correct word was: " << targetWord << endl;
        }
        wait();
    };

    class People
    {
    private:
        string name;
        int age;
        string occupation;

    public:
        // Constructors
        People() : name("John Doe"), age(30), occupation("Unemployed") {}
        People(string personName, int personAge, string personOccupation) : name(personName), age(personAge), occupation(personOccupation) {}

        // Getters
        string getName() const { return name; }
        int getAge() const { return age; }
        string getOccupation() const { return occupation; }

        // Setters
        void setName(string personName) { name = personName; }
        void setAge(int personAge) { age = personAge; }
        void setOccupation(string personOccupation) { occupation = personOccupation; }

        // Display Method
        void displayInfo()
        {
            cout << "Name: " << name << "\nAge: " << age << "\nOccupation: " << occupation << endl;
        }
    };

    // Create a People class that holds a person's name, age, and occupation.
    void program51_PeopleClass()
    {
        cout << "\n========================================\n";
        cout << "  People Class Simulation  \n";
        cout << "========================================\n";

        // Variable declarations
        string name;
        int age;
        string job;
        int option;

        // User input
        cout << "Please enter a name for a person: ";
        cin >> name;

        cout << "Please enter the age for a person: ";
        cin >> age;

        cout << "Please enter the occupation for a person: ";
        cin >> job;

        // Create People object
        People person(name, age, job);

        // Menu loop
        do
        {
            cout << "\n========================================\n";
            cout << "  People Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Name\n2. Get Age\n3. Get Occupation\n4. Set Name\n5. Set Age\n6. Set Occupation\n7. Display Summary of the person.\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                cout << "Name: " << person.getName() << endl;
                break;
            case 2:
                cout << "Age: " << person.getAge() << endl;
                break;
            case 3:
                cout << "Occupation: " << person.getOccupation() << endl;
                break;
            case 4:
                cout << "Enter new name: ";
                cin >> name;
                person.setName(name);
                break;
            case 5:
                cout << "Enter new age: ";
                cin >> age;
                person.setAge(age);
                break;
            case 6:
                cout << "Enter new occupation: ";
                cin >> job;
                person.setOccupation(job);
                break;
            case 7:
                person.displayInfo();
                break;
            }

        } while (option > 0 || option < 0);

        cout << "Exiting People Simulator.\n";

        wait();
    };

    class TimeMachine
    {
    private:
        int year;
        string model;
        int charge;

    public:
        // Constructors
        TimeMachine() : year(2024), model("CHRONUS project"), charge(100) {}
        TimeMachine(int tmYear, string tmModel) : year(tmYear), model(tmModel), charge(100) {}

        // Getters
        void getYear() const
        {
            cout << "The current year is: " << year << endl;
        }
        void getModel() const
        {
            cout << "The model of the Time Machine is: " << model << endl;
        }

        // Getter for Charge
        void getCharge() const
        {
            cout << "The Time Machine's charge level is: " << charge << "%" << endl;
        }

        // I got creative here. I thought it would be fun to make it this way.
        void setYear(int years)
        {
            if (abs(years) > charge)
                cout << "Error: Not enough charge to travel that far. Please charge the machine." << endl;
            else
            {
                year += years;
                charge -= abs(years);
                if (years > 0)
                    cout << "You have traveled " << years << " years into the future. You have " << charge << "% charge left." << endl;
                else if (years < 0)
                    cout << "You have traveled " << abs(years) << " years into the past. You have " << charge << "% charge left." << endl;
                else
                {
                    cout << "You are already in the current year. This caused an error and used " << 10 << " years of charge." << endl;
                    charge -= 10;
                }
            }
        }

        void chargeMachine()
        {
            cout << "How long do you want to charge the Time Machine? Each year that you charge will give you 10% charge (Max 100%): ";
            int years;
            cin >> years;
            if (years < 0)
            {
                cout << "Error: Cannot charge for negative years." << endl;
            }
            else
            {
                charge += years * 10;
                if (charge > 100)
                    charge = 100;
                year += years; // Each year of charge also moves the time machine forward by that many years.
                cout << "The Time Machine is now charged to " << charge << "%." << endl;
            }
        }

        // Method to display time machine information
        void displayInfo() const
        {
            cout << "Year: " << year << endl;
            cout << "Model: " << model << endl;
            cout << "Charge: " << charge << "%" << endl;
        }
    };

    // Create a Time Machine class. You have the creative freedom to decide what attributes and methods it should have.
    void program52_TimeMachineClass()
    {

        cout << "\n========================================\n";
        cout << "  Time Machine Simulator  \n";
        cout << "========================================\n";
        // Declare Variables
        int year, years;
        string model;
        int option = -1;

        // User Input
        cout << "Enter the year of the Time Machine: ";
        cin >> year;
        cout << "Enter the model of the Time Machine: ";
        cin >> model;

        // Create Time Machine Object
        TimeMachine chronus(year, model);

        // Menu Loop
        do
        {
            cout << "========================================\n";
            cout << "  Time Machine Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Year\n2. Get Model\n3. Get Charge\n4. Time Travel\n5. Charge Machine\n6. Display Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                chronus.getYear();
                break;
            case 2:
                chronus.getModel();
                break;
            case 3:
                chronus.getCharge();
                break;
            case 4:
                cout << "Enter how many years to set the Time Machine to travel (Can be negative): ";
                cin >> years;
                chronus.setYear(years);
                break;
            case 5:
                chronus.chargeMachine();
                break;
            case 6:
                chronus.displayInfo();
                break;
            }
        } while (option > 0 || option < 0);

        cout << "Exiting Time Machine Simulator.\n";
        wait();
    };

    // Create a Virtual Pet that can be fed, played with, sleeps, and can display its status. Create a class to do so.
    class VirtualPet
    {
    private:
        string name;
        int hunger;
        int happiness;

    public:
        VirtualPet() : name("Fluffy"), hunger(50), happiness(50) {} // Default constructor
        VirtualPet(string petName) : name(petName), hunger(50), happiness(50) {}

        void feed(int amount)
        {
            hunger = max(0, hunger - amount * 10);
            cout << name << " has been fed " << amount << " chicken wings. Hunger level: " << hunger << endl;
        }

        void play(int duration)
        {
            happiness = min(100, happiness + duration);
            cout << name << " played for " << duration << " minutes. Happiness level: " << happiness << endl;
        }

        void rest(int duration)
        {
            hunger += duration;
            happiness = min(100, happiness + duration);
            cout << name << " rested for " << duration << " minutes. Happiness level: " << happiness << "\tHunger level: " << hunger << endl;
            ;
        };

        void Status()
        {
            cout << "Status of " << name << "\nHunger: " << hunger << ", Happiness: " << happiness << endl;
        }
    };

    // Test a Virtual Pet that can be fed, played with, sleeps, and can display its status.
    void program53_VirtualPetClass()
    {
        // Taken from my Midterm Exam.
        cout << "\n========================================\n";
        cout << "  Virtual Pet Simulator  \n";
        cout << "========================================\n";

        string petName;
        cout << "Enter your pet's name: ";
        cin >> petName;

        VirtualPet pet(petName);

        int option;
        do
        {
            cout << "========================================\n";
            cout << "  Virtual Pet Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Feed\n2. Play\n3. Rest\n4. Status\n0. Exit:\t";
            cin >> option;
            if (option == 1)
            {
                double amount;
                cout << "Enter feed amount: ";
                cin >> amount;
                pet.feed(amount);
            }
            else if (option == 2)
            {
                double amount;
                cout << "Enter play duration: ";
                cin >> amount;
                pet.play(amount);
            }
            else if (option == 3)
            {
                double amount;
                cout << "Enter rest duration: ";
                cin >> amount;
                pet.rest(amount);
            }
            else if (option == 4)
            {
                pet.Status();
            }
        } while (option > 0 || option < 0);

        cout << "Exiting Virtual Pet Simulator.\n";
        wait();
    }

    class Taco
    {
    private:
        string shellType;
        double price;
        vector<string> toppings;

    public:
        // Constructors
        Taco(string tacoShellType, double tacoPrice, vector<string> tacoToppings)
            : shellType(tacoShellType), price(tacoPrice), toppings(tacoToppings) {}

        // Getters
        void getShellType()
        {
            cout << "Shell Type: " << shellType << endl;
        }

        void getPrice()
        {
            cout << "Price: $" << price << endl;
        }

        void getToppings()
        {
            cout << "Toppings: ";
            for (const auto &topping : toppings)
                cout << topping << " ";
            cout << endl;
        }

        // Setters
        string setShellType(string newShellType)
        {
            shellType = newShellType;
            return shellType;
        }

        double setPrice(double newPrice)
        {
            price = newPrice;
            return price;
        }

        void addTopping(string newTopping)
        {
            toppings.push_back(newTopping);
        }

        void removeTopping(string toppingToRemove)
        {
            // Find the position of the topping to remove
            auto it = find(toppings.begin(), toppings.end(), toppingToRemove);
            // If found, remove it
            if (it != toppings.end())
                toppings.erase(it);
        }

        // Display Method
        void displayInfo()
        {
            cout << "Taco Shell Type: " << shellType << "\nPrice: $" << price << "\nToppings: ";
            for (const auto &topping : toppings)
                cout << topping << " ";
            cout << endl;
        }
    };

    // Create a Taco class with methods to get and set the shell type, price, and toppings.
    void program54_TacoClass()
    {
        cout << "\n========================================\n";
        cout << "  Taco Class Simulation  \n";
        cout << "========================================\n";

        // Variable declarations
        string shellType;
        double price;
        vector<string> toppings;
        int option;

        // User input
        cout << "Please enter the shell type for the taco: ";
        cin >> shellType;

        cout << "Please enter the price for the taco: ";
        cin >> price;

        cout << "Please enter the toppings for the taco (separated by spaces, end with \"end\" to stop adding topping): ";
        string topping;
        while (true)
        {
            cin >> topping;
            if (topping == "end" || topping == "END")
                break;
            toppings.push_back(topping);
        }

        // Create Taco object
        Taco taco(shellType, price, toppings);

        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Taco Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Shell Type\n2. Get Price\n3. Get Toppings\n4. Set Shell Type\n5. Set Price\n6. Add Topping\n7. Remove Topping\n8. Display Taco Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                taco.getShellType();
                break;
            case 2:
                taco.getPrice();
                break;
            case 3:
                taco.getToppings();
                break;
            case 4:
                cout << "Enter new shell type: ";
                cin >> shellType;
                taco.setShellType(shellType);
                break;
            case 5:
                cout << "Enter new price: ";
                cin >> price;
                taco.setPrice(price);
                break;
            case 6:
                cout << "Enter topping to add: ";
                cin >> topping;
                taco.addTopping(topping);
                break;
            case 7:
                cout << "Enter topping to remove: ";
                cin >> topping;
                taco.removeTopping(topping);
                break;
            case 8:
                taco.displayInfo();
                break;
            }
        } while (option > 0 || option < 0);

        cout << "Exiting Taco Simulator.\n";
        wait();
    }

    class Pizza
    {

    private:
        int size;
        double price;
        vector<string> toppings;

    public:
        // Constructors
        Pizza(int pizzaSize, double pizzaPrice, vector<string> pizzaToppings)
            : size(pizzaSize), price(pizzaPrice), toppings(pizzaToppings) {}
        // Getters
        void getSize()
        {
            cout << "Size (inches): " << size << endl;
        }
        void getPrice()
        {
            cout << "Price: $" << price << endl;
        }
        void getToppings()
        {
            cout << "Toppings: ";
            for (const auto &topping : toppings)
                cout << topping << " ";
            cout << endl;
        }
        // Setters
        int setSize(int newSize)
        {
            size = newSize;
            return size;
        }
        double setPrice(double newPrice)
        {
            price = newPrice;
            return price;
        }
        void addTopping(string newTopping)
        {
            toppings.push_back(newTopping);
        }
        void removeTopping(string toppingToRemove)
        {
            // Find the position of the topping to remove
            auto it = find(toppings.begin(), toppings.end(), toppingToRemove);
            // If found, remove it
            if (it != toppings.end())
                toppings.erase(it);
        }
        // Display Method
        void displayInfo()
        {
            cout << "Pizza Size (inches): " << size << "\nPrice: $" << price << "\nToppings: ";
            for (const auto &topping : toppings)
                cout << topping << " ";
            cout << endl;
        }
    };

    // Create a Pizza class with methods to get and set the size, price, and toppings.
    // Content mostly copied from the Taco class above with slight modifications.
    void program55_PizzaClass()
    {
        cout << "\n========================================\n";
        cout << "  Pizza Class Simulation  \n";
        cout << "========================================\n";

        // Variable declarations
        int size;
        double price;
        vector<string> toppings;
        int option;

        // User input
        cout << "Please enter the size for the pizza: ";
        cin >> size;

        cout << "Please enter the price for the pizza: ";
        cin >> price;

        cout << "Please enter the toppings for the pizza (separated by spaces, end with \"end\" to stop adding topping): ";
        string topping;
        while (true)
        {
            cin >> topping;
            if (topping == "end" || topping == "END")
                break;
            toppings.push_back(topping);
        }

        // Create Pizza object
        Pizza pizza(size, price, toppings);

        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Pizza Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Size\n2. Get Price\n3. Get Toppings\n4. Set Size\n5. Set Price\n6. Add Topping\n7. Remove Topping\n8. Display Pizza Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                pizza.getSize();
                break;
            case 2:
                pizza.getPrice();
                break;
            case 3:
                pizza.getToppings();
                break;
            case 4:
                cout << "Enter new size (inches): ";
                cin >> size;
                pizza.setSize(size);
                break;
            case 5:
                cout << "Enter new price: ";
                cin >> price;
                pizza.setPrice(price);
                break;
            case 6:
                cout << "Enter topping to add: ";
                cin >> topping;
                pizza.addTopping(topping);
                break;
            case 7:
                cout << "Enter topping to remove: ";
                cin >> topping;
                pizza.removeTopping(topping);
                break;
            case 8:
                pizza.displayInfo();
                break;
            }
        } while (option > 0 || option < 0);

        cout << "Exiting Pizza Simulator.\n";
        wait();
    };

    class Dog
    {
    private:
        string name;
        int age;
        string breed;
        bool friendly;

    public:
        // Constructor
        Dog(string name, int age, string breed, bool friendly)
            : name(name), age(age), breed(breed), friendly(friendly) {}

        // Getter for Name
        void getName() const
        {
            cout << "Name: " << name << endl;
        }

        // Getter for Age
        void getAge() const
        {
            cout << "Age: " << age << endl;
        }

        // Getter for Breed
        void getBreed() const
        {
            cout << "Breed: " << breed << endl;
        }

        // Getter for Friendly
        bool isFriendly() const
        {
            cout << "The dog is" << (friendly ? "" : "not") << " friendly." << endl;
            return friendly;
        }

        // Birthday Method to increment age
        void birthday()
        {
            age += 1;
            cout << "Happy Birthday " << name << "! The good doggo is now " << age << " years old!" << endl;
        }

        // Setter for Friendly
        void setFriendly(bool isFriendly) { friendly = isFriendly; }

        // Method to simulate petting the dog
        void pet() const
        {
            if (friendly)
                cout << name << " wags its tail happily!" << endl;
            else
                cout << name << " growls. Please don't pet the dog!" << endl;
        }

        // Method to display dog information
        void displayInfo() const
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Breed: " << breed << endl;
            cout << "Friendly: " << (friendly ? "Yes" : "No") << endl;
        }
    };

    // Create a Dog class. You have the creative will to decide what attributes and methods to include.
    void program56_DogClass()
    {
        cout << "\n========================================\n";
        cout << "  Dog Class Simulation  \n";
        cout << "========================================\n";

        // Variable declarations
        string name, breed;
        int age, option = -1;
        bool friendly;

        // User input
        cout << "Enter dog's name: ";
        cin >> name;

        cout << "Enter dog's age: ";
        cin >> age;

        cout << "Enter dog's breed: ";
        cin >> breed;

        cout << "Is the dog friendly? (1 for Yes, 0 for No): ";
        cin >> friendly;

        // Create Dog object
        Dog dog(name, age, breed, friendly);

        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Dog Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Name\n2. Get Age\n3. Get Breed\n4. Is Friendly?\n5. Celebrate Birthday\n6. Set new Friendliness\n7. Pet the Dog\n8. Display Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                dog.getName();
                break;
            case 2:
                dog.getAge();
                break;
            case 3:
                dog.getBreed();
                break;
            case 4:
                dog.isFriendly();
                break;
            case 5:
                dog.birthday();
                break;
            case 6:
                cout << "Enter new friendliness (0 or 1): ";
                cin >> friendly;
                dog.setFriendly(friendly);
                break;
            case 7:
                dog.pet();
                break;
            case 8:
                dog.displayInfo();
                break;

            case 0:
                break;
            }
        } while (option > 0 || option < 0);
        cout << "Exiting Dog Simulator.\n";
        wait();
    };

    class FastFood
    {
    private:
        string restaurantName;
        vector<int> order;
        double orderTotal, totalSales;
        int salesCount;

        map<int, pair<double, string>> menuItems = {
            // Burgers
            {1, {5.99, "Classic Cheeseburger"}},
            {2, {6.49, "Bacon Double Burger"}},
            {3, {7.29, "BBQ Burger"}},
            {4, {6.79, "Mushroom Swiss Burger"}},
            {5, {4.99, "Veggie Burger"}},

            // Sandwiches & Wraps
            {6, {5.49, "Grilled Chicken Sandwich"}},
            {7, {4.99, "Crispy Chicken Sandwich"}},
            {8, {5.79, "Spicy Chicken Wrap"}},
            {9, {4.79, "Turkey BLT Wrap"}},

            // Sides
            {10, {2.49, "French Fries"}},
            {11, {2.99, "Curly Fries"}},
            {12, {3.29, "Onion Rings"}},
            {13, {2.19, "Side Salad"}},
            {14, {1.99, "Coleslaw"}},

            // Tacos & Burritos
            {15, {2.99, "Beef Taco"}},
            {16, {3.29, "Chicken Taco"}},
            {17, {6.49, "Beef Burrito"}},
            {18, {6.99, "Chicken Burrito"}},
            {19, {7.49, "Loaded Nachos"}},

            // Pizza
            {20, {8.99, "Small Pepperoni Pizza"}},
            {21, {10.99, "Medium Cheese Pizza"}},
            {22, {12.99, "Large Supreme Pizza"}},
            {23, {9.99, "Meat Lovers Pizza"}},

            // Combo Meals
            {24, {9.49, "Burger Combo (Fries + Drink)"}},
            {25, {9.79, "Chicken Sandwich Combo"}},
            {26, {10.49, "BBQ Burger Combo"}},
            {27, {8.99, "Veggie Combo"}},

            // Drinks
            {28, {1.49, "Bottled Water"}},
            {29, {1.99, "Soft Drink"}},
            {30, {2.29, "Iced Tea"}},
            {31, {2.49, "Milkshake"}},
            {32, {2.79, "Iced Coffee"}},

            // Desserts
            {33, {2.99, "Vanilla Ice Cream"}},
            {34, {3.49, "Chocolate Sundae"}},
            {35, {3.79, "Apple Pie"}},
            {36, {4.19, "Brownie Sundae"}},
            {37, {3.99, "Oreo McFlurry"}}};

    public:
        FastFood() : restaurantName("McDonalds Inc."), salesCount(0), totalSales(0.0) {}
        FastFood(string name) : restaurantName(name), salesCount(0), totalSales(0.0) {}

        // Set Restaurant Name
        void setRestaurantName(string name)
        {
            cout << "Changing restaurant name from " << restaurantName << " to " << name << endl;
            restaurantName = name;
        }

        // Add item to order
        void addItemToOrder(int itemNumber)
        {
            if (menuItems.find(itemNumber) != menuItems.end())
            {
                order.push_back(itemNumber);
                orderTotal += menuItems[itemNumber].first;
                cout << menuItems[itemNumber].second << " added to order. Current order total: $" << orderTotal << endl;
            }
            else
            {
                cout << "Invalid item number." << endl;
            }
        }

        // Remove item from order
        void removeItemFromOrder(int itemNumber)
        {
            auto it = find(order.begin(), order.end(), itemNumber);
            if (it != order.end())
            {
                orderTotal -= menuItems[itemNumber].first;
                order.erase(it);
                cout << menuItems[itemNumber].second << " removed from order. Current order total: $" << orderTotal << endl;
            }
            else
            {
                cout << "Item not found in current order." << endl;
            }
        }
        // Clear current order
        void clearOrder()
        {
            order.clear();
            orderTotal = 0.0;
            cout << "Current order has been cleared." << endl;
        }

        // Display current order
        void displayOrder()
        {
            if (order.empty())
            {
                cout << "No items in the current order." << endl;
                return;
            }

            cout << "\n--- Current Order ---\n";
            for (int itemNumber : order)
            {
                cout << menuItems[itemNumber].second << " - $" << menuItems[itemNumber].first << endl;
            }
            cout << "Total: $" << orderTotal << endl;
        }

        // Complete order
        void completeOrder()
        {
            if (order.empty())
            {
                cout << "No items in order to complete." << endl;
                return;
            }

            cout << "\n--- Order Summary ---\n";
            for (int itemNumber : order)
            {
                cout << menuItems[itemNumber].second << " - $" << menuItems[itemNumber].first << endl;
            }
            cout << "Total: $" << orderTotal << endl;

            totalSales += orderTotal;
            salesCount++;
            order.clear();
            orderTotal = 0.0;

            cout << "Order completed. Thank you for dining at " << restaurantName << "!" << endl;
        }

        // Display menu
        void displayMenu() const
        {
            cout << "\n--- " << restaurantName << " Menu ---\n";
            for (const auto &item : menuItems)
            {
                cout << item.first << ". " << item.second.second << " - $" << item.second.first << endl;
            }
        }

        // Display total sales
        void displayInfo() const
        {
            cout << "Restaurant Name: " << restaurantName << endl;
            cout << "Total Sales: $" << totalSales << endl;
            cout << "Total Orders Served: " << salesCount << endl;
        }
    };

    // Create a Fast Food class. You have the creative freedom to decide what attributes and methods it should have.
    // I have decided to make a fast food restaurant simulator in which you can add and remove items from an order, complete the order, and view the menu.
    void program57_FastFoodClass()
    {

        cout << "\n========================================\n";
        cout << "  Fast Food Restaurant Simulator  \n";
        cout << "========================================\n";

        // Variable declarations
        int itemNumber, option;
        string restaurantName;

        // User input
        cout << "Enter the name of the restaurant: ";
        cin >> restaurantName;

        // Create Fast Food Object
        FastFood restaurant(restaurantName);

        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Fast Food Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Display Menu\n2. Add Item to Order\n3. Remove Item from Order\n4. Display Current Order\n5. Complete Order\n6. Clear Current Order\n7. Display Restaurant Info\n8. Set Restaurant Name\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                restaurant.displayMenu();
                break;
            case 2:
                int itemNumber;
                cout << "Enter item number to add to order: ";
                cin >> itemNumber;
                restaurant.addItemToOrder(itemNumber);
                break;
            case 3:
                cout << "Enter item number to remove from order: ";
                cin >> itemNumber;
                restaurant.removeItemFromOrder(itemNumber);
                break;
            case 4:
                restaurant.displayOrder();
                break;
            case 5:
                restaurant.completeOrder();
                break;
            case 6:
                restaurant.clearOrder();
                break;
            case 7:
                restaurant.displayInfo();
                break;
            case 8:
            {
                string newName;
                cout << "Enter new restaurant name: ";
                cin >> newName;
                restaurant.setRestaurantName(newName);
                break;
            }
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
            }
        } while (option > 0 || option < 0);
        cout << "Exiting Fast Food Simulator.\n";
        wait();
    };

    class Rectangle
    {
    private:
        double length;
        double width;

    public:
        Rectangle() : length(1.0), width(1.0) {} // Default
        Rectangle(double l, double w) : length(l), width(w) {}
        void getLength() const
        {
            cout << "The length of this rectangle is: " << length << endl;
        }
        void getWidth() const
        {
            cout << "The width of this rectangle is: " << width << endl;
        }
        void setLength()
        {
            double l;
            cout << "Enter new length: ";
            cin >> l;
            length = l;
        }
        void setWidth()
        {
            double w;
            cout << "Enter new width: ";
            cin >> w;
            width = w;
        }
        void area() const
        {
            cout << "The area of this rectangle is: " << length * width << endl;
        }
        void perimeter() const
        {
            cout << "The perimeter of this rectangle is: " << 2 * (length + width) << endl;
        }
        void displayInfo() const
        {
            cout << "Length: " << length << ", Width: " << width << ", Area: " << length * width << ", Perimeter: " << 2 * (length + width) << endl;
        }
    };

    // Create a Rectangle class. You have the creative freedom to decide what attributes and methods it should have.
    // I have decided to make a rectangle class with methods to get and set the length and width, calculate the area
    // and perimeter, and display the rectangle's information.
    void program58_RectangleClass()
    {
        cout << "\n========================================\n";
        cout << "  Rectangle Class Demo  \n";
        cout << "========================================\n";

        // Variable declarations
        double length, width;
        int option;

        // User input
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;

        // Create Rectangle Object
        Rectangle rect(length, width);

        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Rectangle Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Length\n2. Get Width\n3. Set Length\n4. Set Width\n5. Calculate Area\n6. Calculate Perimeter\n7. Display Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                rect.getLength();
                break;
            case 2:
                rect.getWidth();
                break;
            case 3:
                rect.setLength();
                break;
            case 4:
                rect.setWidth();
                break;
            case 5:
                rect.area();
                break;
            case 6:
                rect.perimeter();
                break;
            case 7:
                rect.displayInfo();
                break;
            }
        } while (option > 0 || option < 0);

        cout << "Exiting Rectangle Demo.\n";
        wait();
    };

    class DancingRobot
    {
    private:
        string name;
        int energy;
        string danceStyle;
        int danceCount;

    public:
        DancingRobot() : name("RoboDancer"), energy(100), danceStyle("Hip Hop"), danceCount(0) {} // Default constructor
        DancingRobot(string robotName, int robotEnergy, string robotDanceStyle)
            : name(robotName), energy(robotEnergy), danceStyle(robotDanceStyle), danceCount(0) {}
        void getName() const
        {
            cout << "Robot Name: " << name << endl;
        }
        void getEnergy() const
        {
            cout << "Energy Level: " << energy << endl;
        }
        void getDanceStyle() const
        {
            cout << "Dance Style: " << danceStyle << endl;
        }
        void dance()
        {
            if (energy >= 10)
            {
                energy -= 10;
                danceCount++;
                cout << name << " is dancing in the dancing style of " << danceStyle << "! Energy left: " << energy << endl;
            }
            else
            {
                cout << name << " is too tired to dance. Please recharge the robot!" << endl;
            }
        }

        void recharge()
        {
            energy = 100;
            cout << name << " has been recharged. Energy level is now: " << energy << endl;
        }

        void changeDanceStyle(string newStyle)
        {
            danceStyle = newStyle;
            cout << name << " has changed dance style to: " << danceStyle << endl;
        }

        int getDanceCount() const
        {
            return danceCount;
        }

        void displayInfo() const
        {
            cout << "Robot Name: " << name << endl;
            cout << "Energy Level: " << energy << endl;
            cout << "Dance Style: " << danceStyle << endl;
            cout << "Total Dances Performed: " << danceCount << endl;
        }
    };

    // Create a Dancing Robot class. You have the creative freedom to decide what attributes and methods it should have.
    // I have decided to make a dancing robot class with methods to get and set the name, energy level, and dance style,
    // make the robot dance (which decreases energy), recharge the robot (which resets energy to 100), change the dance style,
    // and display the robot's information.
    void program59_DancingRobotClass()
    {
        cout << "\n========================================\n";
        cout << "  Dancing Robot Simulator  \n";
        cout << "========================================\n";

        // Variable declarations
        string name, danceStyle;
        int energy, option;
        char choice;

        // Dancing Robot object
        DancingRobot robot;

        // User input
        cout << "Would you like to make a custom robot? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter robot name: ";
            cin >> name;
            cout << "Enter robot energy level (0-100): ";
            cin >> energy;
            cout << "Enter robot dance style: ";
            cin >> danceStyle;
            robot = DancingRobot(name, energy, danceStyle);
        }

        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Dancing Robot Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Name\n2. Get Energy Level\n3. Get Dance Style\n4. Dance\n5. Recharge\n6. Change Dance Style\n7. Display Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                robot.getName();
                break;
            case 2:
                robot.getEnergy();
                break;
            case 3:
                robot.getDanceStyle();
                break;
            case 4:
                robot.dance();
                break;
            case 5:
                robot.recharge();
                break;
            case 6:
            {
                string newStyle;
                cout << "Enter new dance style: ";
                cin >> newStyle;
                robot.changeDanceStyle(newStyle);
                break;
            }
            case 7:
                robot.displayInfo();
                break;
            }
        } while (option > 0 || option < 0);

        cout << "Exiting Dancing Robot Simulator.\n";
        wait();
    };

    class Superhero
    {
    private:
        string realName;
        string alias;
        int strength, influence, intellect, agility, dexterity, durability;
        vector<string> superPowers;
        vector<string> weaknesses;

    public:
        // Did some research on Superman to fill in the attributes. Hes crazy strong.
        Superhero() : realName("Clark Kent"), alias("Superman"), strength(100), influence(90), intellect(95), agility(95), dexterity(95), durability(98),
                      superPowers({"Super strength", "Super speed", "Super agility", "Super reflexes", "Super hearing", "Super longevity",
                                   "Eternal youth", "Super stamina", "Super intelligence", "Invulnerability", "Heat vision", "Flight", "Freezing breath", "Super breath",
                                   "Multiple extrasensory and vision powers", "X-ray vision", "Healing factor"}),
                      weaknesses({"Kryptonite", "Magic", "Red Sun Radiation"}) {}
        Superhero(string realName, string alias, int strength, int influence, int intellect, int agility, int dexterity, int durability, vector<string> powers, vector<string> weak)
            : realName(realName), alias(alias), strength(strength), influence(influence), intellect(intellect), agility(agility), dexterity(dexterity), durability(durability),
              superPowers(powers), weaknesses(weak) {}

        // Getters
        void getRealName() const { cout << "Real Name: " << realName << endl; }

        void getAlias() const { cout << "Alias: " << alias << endl; }

        void getStrength() const { cout << "Strength: " << strength << endl; }

        void getInfluence() const { cout << "Influence: " << influence << endl; }

        void getIntellect() const { cout << "Intellect: " << intellect << endl; }

        void getAgility() const { cout << "Agility: " << agility << endl; }

        void getDexterity() const { cout << "Dexterity: " << dexterity << endl; }

        void getDurability() const { cout << "Durability: " << durability << endl; }

        void getSuperPowers() const
        {
            cout << "Super Powers: ";
            for (const auto &power : superPowers)
                cout << power << ", ";
            cout << endl;
        }

        void getWeaknesses() const
        {
            cout << "Weaknesses: ";
            for (const auto &weak : weaknesses)
                cout << weak << ", ";
            cout << endl;
        }

        // Setters
        void setRealName()
        {
            // Realized I can just do this to set it in 2 lines instead of 4
            cout << "Enter a new real name: ";
            cin >> realName;
        }

        void setAlias()
        {
            cout << "Enter a new alias: ";
            cin >> alias;
        }

        void setStrength()
        {
            cout << "Enter new strength (0-100): ";
            cin >> strength;
        }

        void setInfluence()
        {
            cout << "Enter new influence (0-100): ";
            cin >> influence;
        }

        void setIntellect()
        {
            cout << "Enter new intellect (0-100): ";
            cin >> intellect;
        }

        void setAgility()
        {
            cout << "Enter new agility (0-100): ";
            cin >> agility;
        }

        void setDexterity()
        {
            cout << "Enter new dexterity (0-100): ";
            cin >> dexterity;
        }

        void setDurability()
        {
            cout << "Enter new durability (0-100): ";
            cin >> durability;
        }

        void addSuperPower()
        {
            string power;
            cout << "Enter a new super power to add: ";
            cin >> power;
            superPowers.push_back(power);
        }

        void removeSuperPower()
        {
            string power;
            cout << "Enter a super power to remove: ";
            cin >> power;
            auto it = find(superPowers.begin(), superPowers.end(), power);
            if (it != superPowers.end())
                superPowers.erase(it);
        }

        void addWeakness()
        {
            string weak;
            cout << "Enter a new weakness to add: ";
            cin >> weak;
            weaknesses.push_back(weak);
        }

        void removeWeakness()
        {
            string weak;
            cout << "Enter a weakness to remove: ";
            cin >> weak;
            auto it = find(weaknesses.begin(), weaknesses.end(), weak);
            if (it != weaknesses.end())
                weaknesses.erase(it);
        }

        // AI suggested I add const here. Honestly not sure what it does but it seems to work fine. I'll have to look it up later honestly.
        void displayInfo() const
        {
            cout << "Real Name: " << realName << endl;
            cout << "Alias: " << alias << endl;
            cout << "Strength: " << strength << endl;
            cout << "Influence: " << influence << endl;
            cout << "Intellect: " << intellect << endl;
            cout << "Agility: " << agility << endl;
            cout << "Dexterity: " << dexterity << endl;
            cout << "Durability: " << durability << endl;
            cout << "Super Powers: ";
            for (const auto &power : superPowers)
                cout << power << ", ";
            cout << endl;
            cout << "Weaknesses: ";
            for (const auto &weak : weaknesses)
                cout << weak << ", ";
            cout << endl;
        }
    };

    // Create a Superhero class. You have the creative freedom to decide what attributes and methods it should have.
    // I have decided to give the super hero stats like strength, speed, and intelligence. This gives me a good opportunity to further
    // practice utilizing cool data types
    void program60_SuperheroClass()
    {
        cout << "\n========================================\n";
        cout << "  Superhero Class Simulation  \n";
        cout << "========================================\n";
        // Variable declarations
        string realName, alias, input;
        int strength, influence, intellect, agility, dexterity, durability, option;
        vector<string> superPowers, weaknesses;

        // User input
        cout << "Would you like to create a custom superhero? (y/n): ";
        cin >> input;

        // Create Superhero object
        Superhero hero; // Default hero is Superman

        // If user wants to create a custom hero
        if (input == "y" || input == "Y")
        {
            cout << "Enter real name: ";
            cin >> realName;
            cout << "Enter alias: ";
            cin >> alias;
            cout << "Enter strength (0-100): ";
            cin >> strength;
            cout << "Enter influence (0-100): ";
            cin >> influence;
            cout << "Enter intellect (0-100): ";
            cin >> intellect;
            cout << "Enter agility (0-100): ";
            cin >> agility;
            cout << "Enter dexterity (0-100): ";
            cin >> dexterity;
            cout << "Enter durability (0-100): ";
            cin >> durability;

            cout << "Enter super powers (type 'end' to stop adding): ";
            string power;
            while (true)
            {
                cin >> power;
                if (power == "end" || power == "END")
                    break;
                superPowers.push_back(power);
            }

            cout << "Enter weaknesses (type 'end' to stop adding): ";
            string weak;
            while (true)
            {
                cin >> weak;
                if (weak == "end" || weak == "END")
                    break;
                weaknesses.push_back(weak);
            }
            // Cheeky lil way to reset hero state
            hero = Superhero(realName, alias, strength, influence, intellect, agility, dexterity, durability, superPowers, weaknesses);
        }
        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Superhero Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Real Name\n2. Get Alias\n3. Get Strength\n4. Get Influence\n5. Get Intellect\n6. Get Agility\n7. Get Dexterity\n8. Get Durability\n9. Get Super Powers\n10. Get Weaknesses\n11. Set Real Name\n12. Set Alias\n13. Set Strength\n14. Set Influence\n15. Set Intellect\n16. Set Agility\n17. Set Dexterity\n18. Set Durability\n19. Add Super Power\n20. Remove Super Power\n21. Add Weakness\n22. Remove Weakness\n23. Display Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                hero.getRealName();
                break;
            case 2:
                hero.getAlias();
                break;
            case 3:
                hero.getStrength();
                break;
            case 4:
                hero.getInfluence();
                break;
            case 5:
                hero.getIntellect();
                break;
            case 6:
                hero.getAgility();
                break;
            case 7:
                hero.getDexterity();
                break;
            case 8:
                hero.getDurability();
                break;
            case 9:
                hero.getSuperPowers();
                break;
            case 10:
                hero.getWeaknesses();
                break;
            case 11:
                hero.setRealName();
                break;
            case 12:
                hero.setAlias();
                break;
            case 13:
                hero.setStrength();
                break;
            case 14:
                hero.setInfluence();
                break;
            case 15:
                hero.setIntellect();
                break;
            case 16:
                hero.setAgility();
                break;
            case 17:
                hero.setDexterity();
                break;
            case 18:
                hero.setDurability();
                break;
            case 19:
                hero.addSuperPower();
                break;
            case 20:
                hero.removeSuperPower();
                break;
            case 21:
                hero.addWeakness();
                break;
            case 22:
                hero.removeWeakness();
                break;
            case 23:
                hero.displayInfo();
                break;
            }

        } while (option > 0 || option < 0);
        cout << "Exiting Superhero Simulator.\n";
        wait();
    };

    class Monster
    {
    private:
        string name, type, habitat;
        int health, attackPower, defense, speed;

    public:
        Monster() : name("Dire Wolf"), type("Beast"), habitat("Forest"), health(150), attackPower(15), defense(5), speed(10) {}
        Monster(string n, string t, string h, int hp, int ap, int def, int spd) : name(n), type(t), habitat(h), health(hp), attackPower(ap), defense(def), speed(spd) {}

        // Getters
        void getName() const { cout << "Monster Name: " << name << endl; }

        void getType() const { cout << "Monster Type: " << type << endl; }

        void getHabitat() const { cout << "Monster Habitat: " << habitat << endl; }

        void getHealth() const { cout << "Monster Health: " << health << endl; }

        void getAttackPower() const { cout << "Monster Attack Power: " << attackPower << endl; }

        void getDefense() const { cout << "Monster Defense: " << defense << endl; }

        void getSpeed() const { cout << "Monster Speed: " << speed << endl; }

        // Setters
        void setName()
        {
            cout << "Enter new monster name: ";
            cin >> name;
        }

        void setType()
        {
            cout << "Enter new monster type: ";
            cin >> type;
        }

        void setHabitat()
        {
            cout << "Enter new monster habitat: ";
            cin >> habitat;
        }

        void setHealth()
        {
            cout << "Enter new monster health: ";
            cin >> health;
        }

        void setAttackPower()
        {
            cout << "Enter new monster attack power: ";
            cin >> attackPower;
        }

        void setDefense()
        {
            cout << "Enter new monster defense: ";
            cin >> defense;
        }

        void setSpeed()
        {
            cout << "Enter new monster speed: ";
            cin >> speed;
        }

        // Display Method
        void displayInfo() const
        {
            // Why didn't I think of this sooner? This is my second to last class for 40-65 Exercises... Facepalm.
            getName();
            getType();
            getHabitat();
            getHealth();
            getAttackPower();
            getDefense();
            getSpeed();
        }
    };

    // Create a Monster class. You have the creative freedom to decide what attributes and methods it should have.
    void program61_MonsterClass()
    {
        cout << "\n========================================\n";
        cout << "  Monster Class Simulation  \n";
        cout << "========================================\n";

        // Variable declarations
        string name, type, habitat;
        int health, attackPower, defense, speed, option;
        char choice;

        // Monster object
        Monster monster;

        // User input
        cout << "Would you like to create a custom monster? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter monster name: ";
            cin >> name;
            cout << "Enter monster type: ";
            cin >> type;
            cout << "Enter monster habitat: ";
            cin >> habitat;
            cout << "Enter monster health: ";
            cin >> health;
            cout << "Enter monster attack power: ";
            cin >> attackPower;
            cout << "Enter monster defense: ";
            cin >> defense;
            cout << "Enter monster speed: ";
            cin >> speed;
            monster = Monster(name, type, habitat, health, attackPower, defense, speed);
        }

        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Monster Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Name\n2. Get Type\n3. Get Habitat\n4. Get Health\n5. Get Attack Power\n6. Get Defense\n7. Get Speed\n8. Set Name\n9. Set Type\n10. Set Habitat\n11. Set Health\n12. Set Attack Power\n13. Set Defense\n14. Set Speed\n15. Display Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                monster.getName();
                break;
            case 2:
                monster.getType();
                break;
            case 3:
                monster.getHabitat();
                break;
            case 4:
                monster.getHealth();
                break;
            case 5:
                monster.getAttackPower();
                break;
            case 6:
                monster.getDefense();
                break;
            case 7:
                monster.getSpeed();
                break;
            case 8:
                monster.setName();
                break;
            case 9:
                monster.setType();
                break;
            case 10:
                monster.setHabitat();
                break;
            case 11:
                monster.setHealth();
                break;
            case 12:
                monster.setAttackPower();
                break;
            case 13:
                monster.setDefense();
                break;
            case 14:
                monster.setSpeed();
                break;
            case 15:
                monster.displayInfo();
                break;
            }
        } while (option > 0 || option < 0);

        cout << "Exiting Monster Simulator.\n";
        wait();
    };

    class Treasure
    {
        string name, location, description;
        double value;
        bool locked;

    public:
        Treasure() : name("Golden Chest of Azrael"), value(10000.0), location("Ancient Roman Cave"), description("A shiny gold chest with ancient engravings."), locked(true) {}
        Treasure(string name, double value, string location, string description, bool locked)
            : name(name), value(value), location(location), description(description), locked(locked) {}

        // Getters
        void getName() const { cout << "Treasure Name: " << name << endl; }

        void getValue() const { cout << "Treasure Value: " << value << endl; }

        void getLocation() const { cout << "Treasure Location: " << location << endl; }

        void getDescription() const { cout << "Treasure Description: " << description << endl; }

        void isLocked() const { cout << "Is the treasure locked? " << (locked ? "Yes" : "No") << endl; }

        // Setters
        void setName()
        {
            cout << "Enter new treasure name: ";
            cin >> name;
        }

        void setValue()
        {
            cout << "Enter new treasure value: ";
            cin >> value;
        }

        void setLocation()
        {
            cout << "Enter new treasure location: ";
            cin >> location;
        }

        void setDescription()
        {
            cout << "Enter new treasure description: ";
            cin >> description;
        }

        void setLocked()
        {
            cout << "Is the treasure locked? (1 for Yes, 0 for No): ";
            cin >> locked;
        }

        void open()
        {
            if (locked)
            {
                cout << "The treasure is locked. You need a key to open it." << endl;
            }
            else
            {
                cout << "You opened the treasure! Inside you find: " << description << " worth $" << value << "!" << endl;
                value = 0; // Treasure is taken
            }
        }

        // Display Method
        void displayInfo() const
        {
            // Why didn't I think of this sooner? This is my second to last class for 40-65 Exercises... Facepalm.
            getName();
            getValue();
            getLocation();
            getDescription();
            isLocked();
        }
    };

    // Create a Treasure class. You have the creative freedom to decide what attributes and methods it should have.
    void program62_TreasureClass()
    {
        cout << "\n====================================== ==\n";
        cout << "  Treasure Class Demo  \n";
        cout << "========================================\n";

        // Variable declarations
        string name, location, description;
        double value;
        int option;
        bool locked;

        // User input
        cout << "Would you like to create a custom treasure? (y/n): ";
        char choice;
        cin >> choice;

        // Create Treasure object
        Treasure treasure;

        // If user wants to create a custom treasure
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter treasure name: ";
            cin >> name;
            cout << "Enter treasure value: ";
            cin >> value;
            cout << "Enter treasure location: ";
            cin >> location;
            cout << "Enter treasure description: ";
            cin >> description;
            cout << "Is the treasure locked? (1 for Yes, 0 for No): ";
            cin >> locked;
            treasure = Treasure(name, value, location, description, locked);
        }

        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Treasure Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Name\n2. Get Value\n3. Get Location\n4. Get Description\n5. Is Locked?\n6. Set Name\n7. Set Value\n8. Set Location\n9. Set Description\n10. Set Locked\n11. Open the Chest\n12. Display Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                treasure.getName();
                break;
            case 2:
                treasure.getValue();
                break;
            case 3:
                treasure.getLocation();
                break;
            case 4:
                treasure.getDescription();
                break;
            case 5:
                treasure.isLocked();
                break;
            case 6:
                treasure.setName();
                break;
            case 7:
                treasure.setValue();
                break;
            case 8:
                treasure.setLocation();
                break;
            case 9:
                treasure.setDescription();
                break;
            case 10:
                treasure.setLocked();
                break;
            case 11:
                treasure.open();
                break;
            case 12:
                treasure.displayInfo();
                break;
            }
        } while (option > 0 || option < 0);
        cout << "Exiting Treasure Demo.\n";
        wait();
    };

    // Create a Bank Account Class with methods to deposit, withdraw, and print balance
    class BankAccount
    {
    private:
        string owner;
        double balance;

    public:
        BankAccount() : owner("Ethan"), balance(0.0) {} // Default constructor
        BankAccount(string owner, double initialBalance) : owner(owner), balance(initialBalance) {}

        void deposit(double amount)
        {
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            }
            else
            {
                cout << "Invalid deposit amount." << endl;
            }
        }

        void withdraw(double amount)
        {
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrew: " << amount << endl;
            }
            else
            {
                cout << "Invalid withdrawal amount." << endl;
            }
        }

        void print()
        {
            cout << "Account Owner: " << owner << endl;
            cout << "Account Balance: " << balance << endl;
        }
    };

    // Test a Bank Account Class with methods to deposit, withdraw, and print balance
    void program63_BankAccountClass()
    {
        // Taken from the Midterm Exam.
        cout << "\n========================================\n";
        cout << "  Bank Account Class Demo  \n";
        cout << "========================================\n";

        string owner;
        double initialBalance;

        cout << "Enter account owner name: ";
        cin >> owner;
        cout << "Enter initial balance: ";
        cin >> initialBalance;

        BankAccount account(owner, initialBalance);
        // Menu for deposit, withdraw, print
        int option;
        do
        {
            cout << "Choose an option: 1) Deposit 2) Withdraw 3) Print 0) Exit: ";
            cin >> option;
            if (option == 1)
            {
                double amount;
                cout << "Enter deposit amount: ";
                cin >> amount;
                account.deposit(amount);
            }
            else if (option == 2)
            {
                double amount;
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                account.withdraw(amount);
            }
            else if (option == 3)
            {
                account.print();
            }
        } while (option > 0 || option < 0);

        cout << "Exiting Bank Account Demo.\n";

        wait();
    }

    class Employee
    {
    private:
        string name, department, position;
        int employeeID;
        double salary;

    public:
        Employee() : name("John Doe"), department("General"), position("Employee"), employeeID(1001), salary(50000.0) {}
        Employee(string n, string d, string p, int id, double s) : name(n), department(d), position(p), employeeID(id), salary(s) {}
        // Getters
        void getName() const { cout << "Name: " << name << endl; }
        void getDepartment() const { cout << "Department: " << department << endl; }
        void getPosition() const { cout << "Position: " << position << endl; }
        void getEmployeeID() const { cout << "Employee ID: " << employeeID << endl; }
        void getSalary() const { cout << "Salary: $" << salary << endl; }
        // Setters
        void setName()
        {
            cout << "Enter new name: ";
            cin >> name;
        }
        void setDepartment()
        {
            cout << "Enter new department: ";
            cin >> department;
        }
        void setPosition()
        {
            cout << "Enter new position: ";
            cin >> position;
        }
        void setEmployeeID()
        {
            cout << "Enter new employee ID: ";
            cin >> employeeID;
        }
        void setSalary()
        {
            cout << "Enter new salary: ";
            cin >> salary;
        }
        // Display Method
        void displayInfo() const
        {
            cout << "Name: " << name << endl;
            cout << "Department: " << department << endl;
            cout << "Position: " << position << endl;
            cout << "Employee ID: " << employeeID << endl;
            cout << "Salary: $" << salary << endl;
        }
    };

    // Create an Employee class. You have the creative freedom to decide what attributes and methods it should have.
    // I was boring with this one. Just the basics. Getters, Setters, and a display method.
    void program64_EmployeeClass()
    {
        cout << "\n========================================\n";
        cout << "  Employee Class Demo  \n";
        cout << "========================================\n";

        // Variable declarations
        string name, department, position;
        int employeeID, option;
        double salary;
        char choice;

        // User input
        cout << "Would you like to create a custom employee? (y/n): ";
        cin >> choice;

        // Create Employee object
        Employee emp; // Default employee

        // If user wants to create a custom employee
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter department: ";
            cin >> department;
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter employee ID: ";
            cin >> employeeID;
            cout << "Enter salary: ";
            cin >> salary;

            // Cheeky lil way to reset employee state
            emp = Employee(name, department, position, employeeID, salary);
        }

        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Employee Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Name\n2. Get Department\n3. Get Position\n4. Get Employee ID\n5. Get Salary\n6. Set Name\n7. Set Department\n8. Set Position\n9. Set Employee ID\n10. Set Salary\n11. Display Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                emp.getName();
                break;
            case 2:
                emp.getDepartment();
                break;
            case 3:
                emp.getPosition();
                break;
            case 4:
                emp.getEmployeeID();
                break;
            case 5:
                emp.getSalary();
                break;
            case 6:
                emp.setName();
                break;
            case 7:
                emp.setDepartment();
                break;
            case 8:
                emp.setPosition();
                break;
            case 9:
                emp.setEmployeeID();
                break;
            case 10:
                emp.setSalary();
                break;
            case 11:
                emp.displayInfo();
                break;
            }
        } while (option > 0 || option < 0);

        cout << "Exiting Employee Demo.\n";
        wait();
    }

    class Movie
    {
    private:
        string title;
        int releaseYear;
        double rating;
        int duration; // in minutes
        vector<string> genre;
        vector<string> directors;
        vector<string> writers;
        vector<string> stars;

    public:
        Movie() : title("Shawshank Redemption"), releaseYear(1994), rating(9.3), duration(142), genre({"Drama"}),
                  directors({"Frank Darabont"}), writers({"Frank Darabont", "Stephen King"}), stars({"Tim Robbins", "Morgan Freeman", "Bob Gunton"}) {}
        Movie(string t, int y, double r, int d, vector<string> g, vector<string> dir, vector<string> w, vector<string> s)
            : title(t), releaseYear(y), rating(r), duration(d), genre(g), directors(dir), writers(w), stars(s) {}

        // Getters
        void getTitle() const
        {
            cout << "Title: " << title << endl;
        }

        void getReleaseYear() const
        {
            cout << "Release Year: " << releaseYear << endl;
        }

        void getRating() const
        {
            cout << "Rating: " << rating << endl;
        }

        void getDuration() const
        {
            cout << "Duration: " << duration << " minutes" << endl;
        }

        void getGenre() const
        {
            cout << "Genre: ";
            for (const auto &g : genre)
                cout << g << " ";
            cout << endl;
        }

        void getDirectors() const
        {
            cout << "Directors: ";
            for (const auto &d : directors)
                cout << d << " ";
            cout << endl;
        }

        void getWriters() const
        {
            cout << "Writers: ";
            for (const auto &w : writers)
                cout << w << " ";
            cout << endl;
        }

        void getStars() const
        {
            cout << "Stars: ";
            for (const auto &s : stars)
                cout << s << " ";
            cout << endl;
        }

        // Setters
        void setTitle()
        {
            string newTitle;
            cout << "Enter new title: ";
            cin >> newTitle;
            title = newTitle;
        }

        void setReleaseYear()
        {
            int newYear;
            cout << "Enter new release year: ";
            cin >> newYear;
            releaseYear = newYear;
        }

        void setRating()
        {
            double newRating;
            cout << "Enter new rating: ";
            cin >> newRating;
            rating = newRating;
        }

        void setDuration()
        {
            int newDuration;
            cout << "Enter new duration (in minutes): ";
            cin >> newDuration;
            duration = newDuration;
        }

        void setGenre()
        {
            genre.clear();
            string newGenre;
            cout << "Enter genres (type 'done' to finish): ";
            while (true)
            {
                cin >> newGenre;
                if (newGenre == "done")
                    break;
                genre.push_back(newGenre);
            }
        }

        void setDirectors()
        {
            directors.clear();
            string newDirector;
            cout << "Enter directors (type 'done' to finish): ";
            while (true)
            {
                cin >> newDirector;
                if (newDirector == "done")
                    break;
                directors.push_back(newDirector);
            }
        }

        void setWriters()
        {
            writers.clear();
            string newWriter;
            cout << "Enter writers (type 'done' to finish): ";
            while (true)
            {
                cin >> newWriter;
                if (newWriter == "done")
                    break;
                writers.push_back(newWriter);
            }
        }

        void setStars()
        {
            stars.clear();
            string newStar;
            cout << "Enter stars (type 'done' to finish): ";
            while (true)
            {
                cin >> newStar;
                if (newStar == "done")
                    break;
                stars.push_back(newStar);
            }
        }
        // Display Method
        void displayInfo() const
        {
            cout << "Title: " << title << endl;
            cout << "Release Year: " << releaseYear << endl;
            cout << "Rating: " << rating << endl;
            cout << "Duration: " << duration << " minutes" << endl;

            cout << "Genre: ";
            for (const auto &g : genre)
                cout << g << " ";
            cout << endl;

            cout << "Directors: ";
            for (const auto &d : directors)
                cout << d << " ";
            cout << endl;

            cout << "Writers: ";
            for (const auto &w : writers)
                cout << w << " ";
            cout << endl;

            cout << "Stars: ";
            for (const auto &s : stars)
                cout << s << " ";
            cout << endl;
        }
    };

    // Create a Movie class. You have the creative freedom to decide what attributes and methods it should have.
    // I went above and beyond here and implemented a lot of functionality. The user can create a custom movie or use the default
    // constructor which is set to the Shawshank Redemption. The user can then get and set all attributes of the movie as well as
    // display all information about the movie.
    void program65_MovieClass()
    {
        cout << "\n========================================\n";
        cout << "  Movie Class Demo  \n";
        cout << "========================================\n";

        // Variable declarations
        string title;
        int releaseYear, duration, option;
        double rating;
        vector<string> genre, directors, writers, stars;
        string input;

        // User input
        cout << "Would you like to create a custom movie? (y/n): ";
        cin >> input;
        Movie movie;

        // Decided to utilize the implemented default constructor if user chooses 'n'
        if (input == "y" || input == "Y")
        {
            cout << "Enter movie title: ";
            cin >> title;
            cout << "Enter release year: ";
            cin >> releaseYear;
            cout << "Enter rating: ";
            cin >> rating;
            cout << "Enter duration (in minutes): ";
            cin >> duration;

            cout << "Enter genres (type 'done' to finish): ";
            string g;
            while (true)
            {
                cin >> g;
                if (g == "done")
                    break;
                genre.push_back(g);
            }

            cout << "Enter directors (type 'done' to finish): ";
            string d;
            while (true)
            {
                cin >> d;
                if (d == "done")
                    break;
                directors.push_back(d);
            }

            cout << "Enter writers (type 'done' to finish): ";
            string w;
            while (true)
            {
                cin >> w;
                if (w == "done")
                    break;
                writers.push_back(w);
            }

            cout << "Enter stars (type 'done' to finish): ";
            string s;
            while (true)
            {
                cin >> s;
                if (s == "done")
                    break;
                stars.push_back(s);
            }

            movie = Movie(title, releaseYear, rating, duration, genre, directors, writers, stars);
        }

        // Menu loop
        do
        {
            cout << "========================================\n";
            cout << "  Movie Menu  \n";
            cout << "========================================\n";
            cout << "Choose an option: \n1. Get Title\n2. Get Release Year\n3. Get Rating\n4. Get Duration\n5. Get Genre\n6. Get Directors\n7. Get Writers\n8. Get Stars\n9. Set Title\n10. Set Release Year\n11. Set Rating\n12. Set Duration\n13. Set Genre\n14. Set Directors\n15. Set Writers\n16. Set Stars\n17. Display Info\n0. Exit:\t";
            cin >> option;
            switch (option)
            {
            case 1:
                movie.getTitle();
                break;
            case 2:
                movie.getReleaseYear();
                break;
            case 3:
                movie.getRating();
                break;
            case 4:
                movie.getDuration();
                break;
            case 5:
                movie.getGenre();
                break;
            case 6:
                movie.getDirectors();
                break;
            case 7:
                movie.getWriters();
                break;
            case 8:
                movie.getStars();
                break;
            case 9:
                movie.setTitle();
                break;
            case 10:
                movie.setReleaseYear();
                break;
            case 11:
                movie.setRating();
                break;
            case 12:
                movie.setDuration();
                break;
            case 13:
                movie.setGenre();
                break;
            case 14:
                movie.setDirectors();
                break;
            case 15:
                movie.setWriters();
                break;
            case 16:
                movie.setStars();
                break;
            case 17:
                movie.displayInfo();
                break;
            }
        } while (option > 0 || option < 0);

        cout << "Exiting Movie Demo.\n";
        wait();
    }

    //
};

// Abstract base class for all submenus
class MainMenuSubMenu
{
protected:
    SylvaAssistant *parent; // Pointer to main class instance
    MainMenuSubMenu(SylvaAssistant *p) : parent(p) {}

public:
    MainMenuSubMenu() {}                        // Virtual destructor
    virtual void displayMenu() = 0;             // Pure virtual function for displaying menu
    virtual int getUserChoice(int &choice) = 0; // Pure virtual function for getting user choice
    virtual int executeChoice(int &choice) = 0; // Pure virtual function for executing choice
};

// Submenu for Matrices operations
class NumberOperationsMenu : MainMenuSubMenu
{

protected:
    map<int, string> choices = {
        {1, "Basic Operations"},
        {2, "Average Calculator"},
        {3, "Odd/Even Checker"},
        {4, "Pos/Neg/Zero Checker"},
        {5, "Square Root"},
        {6, "Absolute Value"},
        {7, "Square Perimeter & Area"},
        {8, "Multiplication Table"},
        {9, "Hypotenuse"},
        {10, "Exchange Numbers"},
        {11, "Smallest of 3 Numbers"},
        {12, "Largest of 3 Numbers"},
        {13, "Sum of Squares"},
        {14, "Largest and Smallest Number"},
        {15, "Sum of 100 Numbers"},
        {16, "Sum of 100 Even Numbers"},
        {17, "Linear Equation Solver"},
        {18, "Quadratic Equation Solver"},
        {19, "Sum of N Numbers"},
        {20, "Sum of N Even Numbers"},
        {21, "Area of a Triangle"},
        {22, "Sum of 100 Odd Integers"},
        {23, "Solve 2 Linear Equations (Inverse Matrix Method)"},
        {0, "RETURN TO MAIN MENU"}};

public:
    NumberOperationsMenu(SylvaAssistant *p) : MainMenuSubMenu(p) {}; // Add constructors to all submenu classes:
    // Apply same pattern to all other submenu classes
    void displayMenu()
    {

        cout << "\n========================================\n";
        cout << "        SYLVA NUMBER OPERATIONS\n";
        cout << "========================================\n";
        for (const auto &choice : choices)
        {
            cout << " " << choice.first << ".   " << choice.second << "\n";
        }
        cout << "========================================\n";
    }

    int getUserChoice(int &choice)
    {
        cout << "Enter your choice (1-" << choices.size() - 1 << ") or 0 to return: ";
        cin >> choice;
        return choice;
    }

    int executeChoice(int &choice)
    {
        switch (choice)
        {
        case 1:
            parent->exercise1_basic_operations();
            return 1;
            break;
        case 2:
            parent->exercise5_average();
            return 1;
            break;
        case 3:
            parent->exercise6_odd_even();
            return 1;
            break;
        case 4:
            parent->exercise7_pos_neg_zero();
            return 1;
            break;
        case 5:
            parent->exercise8_sqrt();
            return 1;
            break;
        case 6:
            parent->exercise9_absolute_value();
            return 1;
            break;
        case 7:
            parent->exercise10_perimeter_area();
            return 1;
            break;
        case 8:
            parent->exercise11_multiplication_table();
            return 1;
            break;
        case 9:
            parent->exercise14_hypotenuse();
            return 1;
            break;
        case 10:
            parent->exercise17_exchange_numbers();
            return 1;
            break;
        case 11:
            parent->exercise18_smallest_of_three();
            return 1;
            break;
        case 12:
            parent->exercise19_largest_of_three();
            return 1;
            break;
        case 13:
            parent->exercise20_sum_of_squares();
            return 1;
            break;
        case 14:
            parent->program21_largest_smallest();
            return 1;
            break;
        case 15:
            parent->program22_sum_100();
            return 1;
            break;
        case 16:
            parent->program23_sum_100_even();
            return 1;
            break;
        case 17:
            parent->program24_linear_equation();
            return 1;
            break;
        case 18:
            parent->program25_quadratic_equation();
            return 1;
            break;
        case 19:
            parent->program26_sum_n();
            return 1;
            break;
        case 20:
            parent->program27_sum_n_even();
            return 1;
            break;
        case 21:
            parent->program41_area_of_triangle();
            return 1;
            break;
        case 22:
            parent->program42_sumOf100OddIntegers();
            return 1;
            break;
        case 23:
            parent->program43_SolveTwoLinearEquations();
            return 1;
            break;
        case 0:
            cout << "Returning to main menu...\n";
            return -1; // Return to main menu
            break;
        default:
            return -1; // Return to main menu
            break;
        }
    }
};

// Submenu for Interactive Fun operations
class InteractiveFunMenu : MainMenuSubMenu
{
private:
    map<int, string> choices = {
        {1, "Quiz Game"},
        {2, "T-Shirt Personalization Questionnaire"},
        {3, "Wordle Game"},
        {4, "People Simulator"},
        {5, "Time Machine Simulator"},
        {6, "Virtual Pet Simulator"},
        {7, "Taco Simulator"},
        {8, "Pizza Simulator"},
        {9, "Dog Simulator"},
        {10, "Fast Food Simulator"},
        {11, "Rectangle Simulator"},
        {12, "Dancing Robot Simulator"},
        {13, "Superhero Simulator"},
        {14, "Monster Simulator"},
        {15, "Treasure Simulator"},
        {16, "Bank Account Simulator"},
        {17, "Employee Simulator"},
        {18, "Movie Simulator"},
        {0, "RETURN TO MAIN MENU"}};

public:
    InteractiveFunMenu(SylvaAssistant *p) : MainMenuSubMenu(p) {};
    void displayMenu()
    {

        cout << "\n========================================\n";
        cout << "        SYLVA INTERACTIVE FUN\n";
        cout << "========================================\n";
        for (const auto &choice : choices)
        {
            cout << " " << choice.first << ".   " << choice.second << "\n";
        }
        cout << "========================================\n";
    }

    int getUserChoice(int &choice)
    {
        cout << "Enter your choice (1-" << choices.size() - 1 << ") or 0 to return: ";
        cin >> choice;
        return choice;
    }

    int executeChoice(int &choice)
    {
        switch (choice)
        {
        case 1:
            parent->program29_quiz();
            return 1;
            break;
        case 2:
            parent->program30_tshirt_quiz();
            return 1;
            break;
        case 3:
            parent->program50_Game();
            return 1;
            break;
        case 4:
            parent->program51_PeopleClass();
            return 1;
            break;
        case 5:
            parent->program52_TimeMachineClass();
            return 1;
            break;
        case 6:
            parent->program53_VirtualPetClass();
            return 1;
            break;
        case 7:
            parent->program54_TacoClass();
            return 1;
            break;
        case 8:
            parent->program55_PizzaClass();
            return 1;
            break;
        case 9:
            parent->program56_DogClass();
            return 1;
            break;
        case 10:
            parent->program57_FastFoodClass();
            return 1;
            break;
        case 11:
            parent->program58_RectangleClass();
            return 1;
            break;
        case 12:
            parent->program59_DancingRobotClass();
            return 1;
            break;
        case 13:
            parent->program60_SuperheroClass();
            return 1;
            break;
        case 14:
            parent->program61_MonsterClass();
            return 1;
            break;
        case 15:
            parent->program62_TreasureClass();
            return 1;
            break;
        case 16:
            parent->program63_BankAccountClass();
            return 1;
            break;
        case 17:
            parent->program64_EmployeeClass();
            return 1;
            break;
        case 18:
            parent->program65_MovieClass();
            return 1;
            break;
        case 0:
            return -1; // Return to main menu
            break;
        default:
            return -1; // Return to main menu
            break;
        }
    }
};

// Submenu for Arrays (1D) operations
class ArraysMenu : MainMenuSubMenu
{
protected:
    map<int, string> choices = {
        {1, "Array Sum"},
        {2, "Dual Array Addition"},
        {3, "Array Multiplication & Division"},
        {4, "Array Operations"},
        {5, "Scalar Multiplication"},
        {0, "RETURN TO MAIN MENU"}};

public:
    ArraysMenu(SylvaAssistant *p) : MainMenuSubMenu(p) {}
    void displayMenu()
    {

        cout << "\n========================================\n";
        cout << "        SYLVA ARRAYS (1D)\n";
        cout << "========================================\n";
        for (const auto &choice : choices)
        {
            cout << " " << choice.first << ".   " << choice.second << "\n";
        }
        cout << "========================================\n";
    }
    int getUserChoice(int &choice)
    {
        cout << "Enter your choice (1-" << choices.size() - 1 << ") or 0 to return: ";
        cin >> choice;
        return choice;
    }
    int executeChoice(int &choice)
    {
        switch (choice)
        {
        case 1:
            parent->program31_array_sum();
            return 1;
            break;
        case 2:
            parent->program32_dual_array_add();
            return 1;
            break;
        case 3:
            parent->program33_array_mult_div();
            return 1;
            break;
        case 4:
            parent->program34_array_operations();
            return 1;
            break;
        case 5:
            parent->program35_scalar_mult();
            return 1;
            break;
        case 0:
            return -1; // Return to main menu
            break;
        default:
            return -1; // Return to main menu
            break;
        }
    }
};

// Submenu for Matrices (2D) operations
class MatricesMenu : MainMenuSubMenu
{
protected:
    map<int, string> choices = {
        {1, "Matrix Sum"},
        {2, "Matrix Operations"},
        {3, "RETURN TO MAIN MENU"}};

public:
    MatricesMenu(SylvaAssistant *p) : MainMenuSubMenu(p) {}
    void displayMenu()
    {

        cout << "\n========================================\n";
        cout << "        SYLVA MATRICES (2D)\n";
        cout << "========================================\n";
        for (const auto &choice : choices)
        {
            cout << " " << choice.first << ".   " << choice.second << "\n";
        }
        cout << "========================================\n";
    }
    int getUserChoice(int &choice)
    {
        cout << "Enter your choice (1-" << choices.size() - 1 << ") or 0 to return: ";
        cin >> choice;
        return choice;
    }
    int executeChoice(int &choice)
    {
        switch (choice)
        {
        case 1:
            parent->program36_matrix_sum();
            return 1;
            break;
        case 2:
            parent->program37_matrix_operations();
            return 1;
            break;
        case 0:
            return -1; // Return to main menu
            break;
        default:
            return -1; // Return to main menu
            break;
        }
    }
};

// Submenu for Functions operations
class FunctionsMenu : MainMenuSubMenu
{
protected:
    map<int, string> choices = {
        {1, "Greater of Two (Function)"},
        {2, "Sum (Function)"},
        {3, "Difference (Function)"},
        {0, "RETURN TO MAIN MENU"}};

public:
    FunctionsMenu(SylvaAssistant *p) : MainMenuSubMenu(p) {}
    void displayMenu()
    {

        cout << "\n========================================\n";
        cout << "        SYLVA FUNCTIONS\n";
        cout << "========================================\n";
        for (const auto &choice : choices)
        {
            cout << " " << choice.first << ".   " << choice.second << "\n";
        }
        cout << "========================================\n";
    }
    int getUserChoice(int &choice)
    {
        cout << "Enter your choice (1-" << choices.size() - 1 << ") or 0 to return: ";
        cin >> choice;
        return choice;
    }
    int executeChoice(int &choice)
    {
        switch (choice)
        {
        case 1:
            parent->program38_greater_function();
            return 1;
            break;
        case 2:
            parent->program39_sum_function();
            return 1;
            break;
        case 3:
            parent->program40_difference_function();
            return 1;
            break;
        case 0:
            return -1; // Return to main menu
            break;
        default:
            return -1; // Return to main menu
            break;
        }
    }
};

// Submenu for Utilities operations
class UtilitiesMenu : MainMenuSubMenu
{
protected:
    map<int, string> choices = {
        {1, "Multiplication Table"},
        {2, "Currency Exchange"},
        {3, "Exchange Two Numbers"},
        {4, "Convert Dollars to Pesos"},
        {5, "Convert Pesos to Dollars"},
        {6, "Convert Dollars to Yen"},
        {7, "Convert Yen to Dollars"},
        {8, "Convert Dollars to Rupees"},
        {9, "Convert Rupees to Dollars"},
        {0, "RETURN TO MAIN MENU"}};

public:
    UtilitiesMenu(SylvaAssistant *p) : MainMenuSubMenu(p) {}
    void displayMenu()
    {

        cout << "\n========================================\n";
        cout << "        SYLVA UTILITIES\n";
        cout << "========================================\n";
        for (const auto &choice : choices)
        {
            cout << " " << choice.first << ".   " << choice.second << "\n";
        }
        cout << "========================================\n";
    }
    int getUserChoice(int &choice)
    {
        cout << "Enter your choice (1-" << choices.size() - 1 << ") or 0 to return: ";
        cin >> choice;
        return choice;
    }
    int executeChoice(int &choice)
    {
        switch (choice)
        {
        case 1:
            parent->exercise11_multiplication_table();
            return 1;
            break;
        case 2:
            parent->exercise15_currency_exchange();
            return 1;
            break;
        case 3:
            parent->exercise17_exchange_numbers();
            return 1;
            break;
        case 4:
            parent->program44_DollarsToPesos();
            return 1;
            break;
        case 5:
            parent->program45_PesosToDollars();
            return 1;
            break;
        case 6:
            parent->program46_DollarsToYen();
            return 1;
            break;
        case 7:
            parent->program47_YenToDollars();
            return 1;
            break;
        case 8:
            parent->program48_DollarsToRupees();
            return 1;
            break;
        case 9:
            parent->program49_RupeesToDollars();
            return 1;
            break;
        case 0:
            return -1; // Return to main menu
            break;
        default:
            return -1; // Return to main menu
            break;
        }
    }
};

// Submenu for Medical Assistant operations
class MedicalAssistantMenu : MainMenuSubMenu
{
protected:
    map<int, string> choices = {
        {1, "Medical Assistant"},
        {0, "RETURN TO MAIN MENU"}};

public:
    MedicalAssistantMenu(SylvaAssistant *p) : MainMenuSubMenu(p) {}
    void displayMenu()
    {

        cout << "\n========================================\n";
        cout << "        SYLVA MEDICAL FUNCTIONS\n";
        cout << "========================================\n";
        for (const auto &choice : choices)
        {
            cout << " " << choice.second << ".   " << choice.first << "\n";
        }
        cout << "========================================\n";
    }
    int getUserChoice(int &choice)
    {
        cout << "Enter your choice (1-" << choices.size() - 1 << ") or 0 to return: ";
        cin >> choice;
        return choice;
    }
    int executeChoice(int &choice)
    {
        switch (choice)
        {
        case 1:
            parent->program99_medical_assistant();
            return 1;
            break;
        case 0:
            return -1; // Return to main menu
            break;
        default:
            return -1; // Return to main menu
            break;
        }
    }
};

// Master Menu class to navigate between submenus
class MainMenu
{
private:
    int category = 0;
    SylvaAssistant parent; // Pointer to main class instance
public:
    map<int, string> categories = {};

    MainMenu(map<int, string> categories) : categories(categories)
    {
        this->categories = categories;
    }

    void displayMenu()
    {
        cout << "\n========================================\n";
        cout << "        SYLVA MAIN MENU\n";
        cout << "========================================\n";
        for (const auto &cat : categories)
        {
            cout << cat.first << ") " << cat.second << "\n";
        }
        cout << "========================================\n";
    }

    int getUserChoice(int &category)
    {
        cout << "Enter your category (1-7): ";
        cin >> category;
        return category;
    }

    void executeChoice(int &category)
    {

        /**InteractiveFunMenu interactiveFunMenu;
        ArraysMenu arraysMenu;
        MatricesMenu matricesMenu;
        FunctionsMenu functionsMenu;
        UtilitiesMenu utilitiesMenu;
        MedicalAssistantMenu medicalAssistantMenu;**/
        int choice = 0;
        do
        {
            switch (category)
            {
            case 1:
                // Navigate to Number Operations Menu

                do
                {
                    NumberOperationsMenu numberOperations(&parent);
                    numberOperations.displayMenu();
                    choice = numberOperations.getUserChoice(choice);
                    choice = numberOperations.executeChoice(choice);
                    if (choice == -1)
                    {
                        category = 8; // Exit to main menu
                        break;        // Manual exit to main menu
                    }
                } while (category != 0);
                break;
            case 2:
                // Navigate to Interactive Fun Menu
                do
                {
                    InteractiveFunMenu interactiveFun(&parent);
                    interactiveFun.displayMenu();
                    choice = interactiveFun.getUserChoice(choice);
                    choice = interactiveFun.executeChoice(choice);
                    if (choice == -1)
                    {
                        category = 8; // Exit to main menu
                        break;        // Manual exit to main menu
                    }
                } while (category != 0);
                break;
            case 3:
                // Navigate to Arrays (1D) Menu
                do
                {
                    ArraysMenu arrays(&parent);
                    arrays.displayMenu();
                    choice = arrays.getUserChoice(choice);
                    choice = arrays.executeChoice(choice);
                    if (choice == -1)
                    {
                        category = 8; // Exit to main menu
                        break;        // Manual exit to main menu
                    }
                } while (category != 0);
                break;
            case 4:
                // Navigate to Matrices (2D) Menu
                do
                {
                    MatricesMenu matrices(&parent);
                    matrices.displayMenu();
                    choice = matrices.getUserChoice(choice);
                    choice = matrices.executeChoice(choice);
                    if (choice == 2)
                    {
                        category = 8; // Exit to main menu
                        break;        // Manual exit to main menu
                    }
                } while (category != 0);
                break;
            case 5:
                // Navigate to Functions Menu
                do
                {
                    FunctionsMenu functions(&parent);
                    functions.displayMenu();
                    choice = functions.getUserChoice(choice);
                    choice = functions.executeChoice(choice);
                    if (choice == -1)
                    {
                        category = 8; // Exit to main menu
                        break;        // Manual exit to main menu
                    }
                } while (category != 0);
                break;
            case 6:
                // Navigate to Utilities Menu
                do
                {
                    UtilitiesMenu utilities(&parent);
                    utilities.displayMenu();
                    choice = utilities.getUserChoice(choice);
                    choice = utilities.executeChoice(choice);
                    if (choice == -1)
                    {
                        category = 8; // Exit to main menu
                        break;        // Manual exit to main menu
                    }
                } while (category != 0);
                break;
            case 7:
                // Navigate to Medical Assistant Menu
                do
                {
                    MedicalAssistantMenu medical(&parent);
                    medical.displayMenu();
                    choice = medical.getUserChoice(choice);
                    choice = medical.executeChoice(choice);
                    if (choice == -1)
                    {
                        category = 8; // Exit to main menu
                        break;        // Manual exit to main menu
                    }
                } while (category != 0);
                break;
            case 8:
                // Exit to main menu
                this->displayMenu();
                category = this->getUserChoice(category);
                this->executeChoice(category);
                break;
            case 0:
                // Break to exit
                break;
            default:
                cout << "Invalid category. Please try again.\n";
                break;
            }
        } while (category != 0);
    }

    void endMenu()
    {
        cout << "\n========================================\n";
        cout << "  Thank you for using SYLVA!\n";
        cout << "  Goodbye!\n";
        cout << "========================================\n\n";
    }
};

// Main function with interactive menu system
int main()
{
    // Display welcome banner
    cout << "\n";
    cout << "   Sylva Virtual Assistant - 40 Programs Collection\n";
    cout << "   Your Personal Math & Learning Companion\n";
    cout << "========================================\n\n";

    SylvaAssistant sylva;
    int choice = 0, category = 0;

    // Define categories and their corresponding submenu classes
    map<int, string> categories = {
        {1, "Number Operations"},
        {2, "Interactive Fun"},
        {3, "Arrays (1D)"},
        {4, "Matrices (2D)"},
        {5, "Functions"},
        {6, "Utilities"},
        {7, "Medical Assistant"},
        {0, "Exit"}};

    // Instantiate MainMenu with categories
    MainMenu sylvaMenu(categories); 
    
    // Main program loop - continues until user chooses to exit
    do
    {
        // Display comprehensive menu organized by categories
        // Route user choice to appropriate program using switch statement

        sylvaMenu.displayMenu();
        category = sylvaMenu.getUserChoice(category);
        sylvaMenu.executeChoice(category);
        sylvaMenu.endMenu();

        break;
    } while (choice != 0); // Continue loop until user chooses exit (0)

    return 0; // Successful program termination
}