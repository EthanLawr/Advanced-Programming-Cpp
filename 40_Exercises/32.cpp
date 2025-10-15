/*
32. Create two integer arrays:

a1 = {2, 4, 6, 8, 10}

b1 = {20, 40, 60, 80, 100}
Add the corresponding elements from both arrays and store the results in a third array c1.
*/
#include <iostream>
using namespace std;
int main() {
    // Declare and initialize the arrays
    int a1[5] = {2, 4, 6, 8, 10};
    int b1[5] = {20, 40, 60, 80, 100};
    int c1[5];

    // Add corresponding elements and store in c1
    for (int i = 0; i < 5; i++) {
        c1[i] = a1[i] + b1[i];
    }
    
    // Display the resulting array
    cout << "Resulting array c1 (sum of a1 and b1):\n";
    for (int i = 0; i < 5; i++) {
        cout << "c1[" << i << "] = " << c1[i] << endl;
    }

    return 0;
}