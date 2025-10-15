// Ethan Lawrence - Sylva Virtual Assistant
// Date: 09/01/2025 - 09/30/2025
// Complete 40 Exercise Collection

/**
 * SYLVA VIRTUAL ASSISTANT - ALL 40 PROGRAMS
 * ==========================================
 *
 * CATEGORIES:
 *
 * 1. Number Operations (1-10, 18-19, 21-28)
 *    - Basic arithmetic, comparisons, equation solvers, conversions
 *
 * 2. Interactive Fun (29-30)
 *    - Quizzes and personalization
 *
 * 3. Array Operations - 1D (31-35)
 *    - Single and dual array operations
 *
 * 4. Matrix Operations - 2D (36-37)
 *    - 2x2 matrix calculations
 *
 * 5. Functions (38-40)
 *    - Utility functions for integers
 *
 * 6. Additional Utilities (11-17, 20)
 *    - Tables, converters, swaps, medical screening
 */

// Include necessary headers for input/output, mathematical operations, and string handling
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <array>

using namespace std;

// Main class containing all 40 exercise programs
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
    // PROGRAMS 21-40 (New Set)
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
};

// Main function with interactive menu system
int main()
{
    SylvaAssistant sylva; // Create instance of main class
    int choice = 0;

    // Display welcome banner
    cout << "\n";
    cout << "   Sylva Virtual Assistant - 40 Programs Collection\n";
    cout << "   Your Personal Math & Learning Companion\n";
    cout << "========================================\n\n";

    // Main program loop - continues until user chooses to exit
    do
    {
        // Display comprehensive menu organized by categories
        cout << "\n========================================\n";
        cout << "        SYLVA MAIN MENU\n";
        cout << "========================================\n";
        cout << "NUMBER OPERATIONS:\n";
        cout << " 1-4.  Basic Operations\n";
        cout << " 5.    Average Calculator\n";
        cout << " 6.    Odd/Even Checker\n";
        cout << " 7.    Pos/Neg/Zero Checker\n";
        cout << " 8.    Square Root\n";
        cout << " 9.    Absolute Value\n";
        cout << " 10.   Square Perimeter & Area\n";
        cout << " 18.   Smallest of Three\n";
        cout << " 19.   Largest of Three\n";
        cout << " 20.   Sum of Squares\n";
        cout << " 21.   Largest & Smallest\n";
        cout << " 22.   Sum First 100 Integers\n";
        cout << " 23.   Sum First 100 Even Integers\n";
        cout << " 24.   Linear Equation Solver\n";
        cout << " 25.   Quadratic Equation Solver\n";
        cout << " 26.   Sum of First N Integers\n";
        cout << " 27.   Sum of First N Even\n";
        cout << " 28.   Unit Converter (km/m)\n";
        cout << "\nINTERACTIVE FUN:\n";
        cout << " 29.   Quiz Game\n";
        cout << " 30.   T-Shirt Personalization\n";
        cout << "\nARRAYS (1D):\n";
        cout << " 31.   Array Sum\n";
        cout << " 32.   Dual Array Addition\n";
        cout << " 33.   Array Mult & Division\n";
        cout << " 34.   Array Operations\n";
        cout << " 35.   Scalar Multiplication\n";
        cout << "\nMATRICES (2D):\n";
        cout << " 36.   Matrix Sum\n";
        cout << " 37.   Matrix Operations\n";
        cout << "\nFUNCTIONS:\n";
        cout << " 38.   Greater of Two (Func)\n";
        cout << " 39.   Sum (Function)\n";
        cout << " 40.   Difference (Function)\n";
        cout << "\nUTILITIES:\n";
        cout << " 11-13. Multiplication Table\n";
        cout << " 14.   Hypotenuse Calculator\n";
        cout << " 15-16. Currency Exchange\n";
        cout << " 17.   Exchange Two Numbers\n";
        cout << " 99.   Medical Assistant\n";
        cout << "\n 0.    EXIT\n";
        cout << "========================================\n";
        cout << "Enter your choice (0-40): ";
        cin >> choice;

        // Route user choice to appropriate program using switch statement
        switch (choice)
        {
        // Group similar exercises that share functionality
        case 1:
        case 2:
        case 3:
        case 4:
            sylva.exercise1_basic_operations();
            break;
        case 5:
            sylva.exercise5_average();
            break;
        case 6:
            sylva.exercise6_odd_even();
            break;
        case 7:
            sylva.exercise7_pos_neg_zero();
            break;
        case 8:
            sylva.exercise8_sqrt();
            break;
        case 9:
            sylva.exercise9_absolute_value();
            break;
        case 10:
            sylva.exercise10_perimeter_area();
            break;
        case 11:
        case 12:
        case 13:
            sylva.exercise11_multiplication_table();
            break;
        case 14:
            sylva.exercise14_hypotenuse();
            break;
        case 15:
        case 16:
            sylva.exercise15_currency_exchange();
            break;
        case 17:
            sylva.exercise17_exchange_numbers();
            break;
        case 18:
            sylva.exercise18_smallest_of_three();
            break;
        case 19:
            sylva.exercise19_largest_of_three();
            break;
        case 20:
            sylva.exercise20_sum_of_squares();
            break;
        case 21:
            sylva.program21_largest_smallest();
            break;
        case 22:
            sylva.program22_sum_100();
            break;
        case 23:
            sylva.program23_sum_100_even();
            break;
        case 24:
            sylva.program24_linear_equation();
            break;
        case 25:
            sylva.program25_quadratic_equation();
            break;
        case 26:
            sylva.program26_sum_n();
            break;
        case 27:
            sylva.program27_sum_n_even();
            break;
        case 28:
            sylva.program28_unit_converter();
            break;
        case 29:
            sylva.program29_quiz();
            break;
        case 30:
            sylva.program30_tshirt_quiz();
            break;
        case 31:
            sylva.program31_array_sum();
            break;
        case 32:
            sylva.program32_dual_array_add();
            break;
        case 33:
            sylva.program33_array_mult_div();
            break;
        case 34:
            sylva.program34_array_operations();
            break;
        case 35:
            sylva.program35_scalar_mult();
            break;
        case 36:
            sylva.program36_matrix_sum();
            break;
        case 37:
            sylva.program37_matrix_operations();
            break;
        case 38:
            sylva.program38_greater_function();
            break;
        case 39:
            sylva.program39_sum_function();
            break;
        case 40:
            sylva.program40_difference_function();
            break;
        case 99:
            sylva.program99_medical_assistant();
            break;
        case 0:
            // Exit message when user chooses to quit
            cout << "\n========================================\n";
            cout << "  Thank you for using SYLVA!\n";
            cout << "  Goodbye!\n";
            cout << "========================================\n\n";
            break;
        default:
            // Handle invalid menu selections
            cout << "\nInvalid choice! Please select 0-40.\n";
            break;
        }
    } while (choice != 0); // Continue loop until user chooses exit (0)

    return 0; // Successful program termination
}