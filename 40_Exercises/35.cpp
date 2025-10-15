// 35. Write a program that prompts the user to input 5 elements into an array. Then prompt the user to input a number n. Multiply each element in the array by n and store the results in a second array. Display the new array.

#include <iostream>
using namespace std;
int main() {
    int arr1[5];
    int arr2[5];
    int n;

    // Input for the first array
    cout << "Enter 5 integers for the array:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr1[i];
    }

    // Input for the multiplier
    cout << "Enter a number to multiply each element by: ";
    cin >> n;

    // Multiply each element by n and store in the second array
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i] * n;
    }

    // Display the new array
    cout << "The new array after multiplication is:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Element " << (i + 1) << ": " << arr2[i] << endl;
    }

    return 0;
}