
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    int add, sub, mult, div;
    int avg;
    bool isOddOrNot;
    string posNegZero;
    int sqroot;
    int absValue;
    int perimeter, area;

    cout<<"Hello World!";
    cout<<"\nI am Ethan";
    cout<<"\nPractice 1";

    cout << "\nEnter the first number = ";
    cin >> a;
    cout << "\nEnter the second number = ";
    cin >> b;

    add = a+b;
    sub = a-b;
    mult = a*b;
    div = a/b;
    avg = (a+b)/2;
    isOddOrNot = (a % 2 != 0);
    posNegZero = (a > 0) ? "Positive" : (a < 0) ? "Negative" : "Zero";
    sqroot = sqrt(a);
    absValue = abs(a);
    perimeter = 2 * (a + b);
    area = a * b;

    cout << "\nThe sum is: " << add;
    cout << "\nThe difference is: " << sub;
    cout << "\nThe product is: " << mult;
    cout << "\nThe quotient is: " << div;
    cout << "\nThe average is: " << avg;
    cout << "\nThe first number odd? " << boolalpha << isOddOrNot;
    cout << "\nThe first number is: " << posNegZero;
    cout << "\nThe square root of the first number is: " << sqroot;
    cout << "\nThe absolute value of the first number is: " << absValue;
    cout << "\nThe perimeter (of a rectangle) is: " << perimeter;
    cout << "\nThe area (of a rectangle) is: " << area;

    return 0;
}