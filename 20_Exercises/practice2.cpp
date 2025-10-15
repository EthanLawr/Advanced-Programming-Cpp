
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b;
    float add, sub, mult, div;
    float avg;
    bool isOddOrNot1, isOddOrNot2;

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
    isOddOrNot1 = (static_cast<int>(a) % 2 != 0);
    isOddOrNot2 = (static_cast<int>(b) % 2 != 0);

    cout << "\nThe sum is: " << add;
    cout << "\nThe difference is: " << sub;
    cout << "\nThe product is: " << mult;
    cout << "\nThe quotient is: " << div;
    cout << "\nThe average is: " << avg;
    cout << "\nIs the first number odd? " << boolalpha << isOddOrNot1;
    cout << "\nIs the second number odd? " << boolalpha << isOddOrNot2;

    return 0;
}