/*
34. Create two arrays A and B, each with 5 integer elements entered by the user. Then, create four new arrays to store:

The sum of A and B (Addition[])

The difference (Subtraction[])

The product (Multiplication[])

The division (Division[], handle division by zero appropriately)
*/

#include <iostream>
#include <iomanip> // For std::setprecision
using namespace std;
int main() {
    // Declare arrays
    int A[5], B[5];
    int Addition[5], Subtraction[5], Multiplication[5];
    double Division[5];
    // Input for arrays A and B
    cout << "Enter 5 integers for array A:\n";
    for (int i = 0; i < 5; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
    cout << "Enter 5 integers for array B:\n";
    for (int i = 0; i < 5; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }
    // Perform operations and store results in new arrays
    for (int i = 0; i < 5; i++) {
        Addition[i] = A[i] + B[i];
        Subtraction[i] = A[i] - B[i];
        Multiplication[i] = A[i] * B[i];
        if (B[i] != 0) {
            Division[i] = static_cast<double>(A[i]) / B[i];
        } else {
            Division[i] = 0; // Error handling for division by zero
        }
    }
    // Display results
    cout << fixed << setprecision(2); // Set precision for division output
    cout << "\nResults:\n";
    cout << "Index\tA\tB\tAddition\tSubtraction\tMultiplication\tDivision\n";
    for (int i = 0; i < 5; i++) {
        cout << i << "\t" << A[i] << "\t" << B[i] << "\t" 
             << Addition[i] << "\t\t" 
             << Subtraction[i] << "\t\t" 
             << Multiplication[i] << "\t\t" 
             << Division[i] << "\n";
    }
    return 0;
}