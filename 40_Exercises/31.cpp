/** 
 * 31. Create an array of integers with 5 elements: {2, 4, 6, 8, 10}. Write a program that adds all the elements and displays the total.
 */
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize the array
    int numbers[5] = {2, 4, 6, 8, 10};
    int sum = 0;

    // Sum the elements of the array
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Display the total
    cout << "Total: " << sum << endl;
    return 0;
}