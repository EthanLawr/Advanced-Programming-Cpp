// Allows for input and output operations
#include <iostream>
// Allows the use of string data type
#include <string>
// Namespace Declaration so we don't have to use std:: before every standard library object
using namespace std;

// Defining the Car class, which is a new data type
class Car {
    // Defining Class Specific Variables - Private Variables
private:
    string brand;
    string model;
    int year;

public:
    // Constructor
    Car(string b, string m, int y) {
        // Denoting the class variables
        brand = b;
        model = m;
        year = y;
    }

    // Method to display car details
    void displayInfo() {
        // Displaying the value of the priavte variables
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};

int main() {
    // Variables to hold user input
    string userBrand, userModel;
    int userYear;

    // Getting user input
    cout << "Enter the car brand: ";
    getline(cin, userBrand);  // allows spaces

    cout << "Enter the car model: ";
    getline(cin, userModel);

    cout << "Enter the car year: ";
    cin >> userYear;

    // Create a Car object using user input
    Car userCar(userBrand, userModel, userYear);

    // Display the car information
    cout << "\nHere is the information of your car:" << endl;
    userCar.displayInfo();

    return 0;
}

