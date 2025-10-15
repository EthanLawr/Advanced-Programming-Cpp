#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class EasyExercises
{
public:
    // Exercise 1: Compute sum, difference, product, and division of 2 numbers.
    void computeBasicOperations()
    {
        double a, b;
        cout << "Please insert 2 numbers to complete basic math operations with:";
        cin >> a;
        cin >> b;
        string divisionMessage = (b == 0) ? "division undefined" : std::to_string(a / b);
        cout << "The sum of these 2 numbers is " << (a + b);
        cout << "\nThe difference of these 2 numbers is " << a - b;
        cout << "\nThe product of these 2 numbers is " << a * b;
        cout << "\nThe quotient of these 2 numbers is " << divisionMessage;
    }

    // Exercise 2: Average of 2 numbers with 2 decimals
    void averageOfTwoNumbers()
    {
        double a, b;
        cout << "Please insert 2 numbers to get an average of them:";
        cin >> a;
        cin >> b;

        cout << "average = " << fixed << setprecision(2) << (a + b) / 2;
    }
};

class IntermediateExercises
{
public:
    // Exercise 3: Sum of a Fixed Array
    void sumOfFixedArray()
    {
        int arr[5] = {2, 4, 6, 8, 10};
        int sum = 0;
        for (int num : arr)
        {
            sum += num;
        }
        cout << "Sum of {2,4,6,8,10} = " << sum << endl;
    }
    // Exercise 4: Opertations with Arrays A and B
    void operationsWithArrays()
    {
        int A[5], B[5];
        cout << "Input 5 integers for Array A:\n";
        for (int i = 0; i < 5; i++)
        {
            cin >> A[i];
        }
        cout << "Input 5 integers for Array B:\n";
        for (int i = 0; i < 5; i++)
        {
            cin >> B[i];
        }
        int Add[5], Sub[5], Mult[5];
        string Div[5];
        for (int i = 0; i < 5; i++)
        {
            Add[i] = A[i] + B[i];
            Sub[i] = A[i] - B[i];
            Mult[i] = A[i] * B[i];
            Div[i] = (B[i] != 0) ? to_string(static_cast<double>(A[i]) / B[i]) : "NaN";
        }
        cout << "Name: Addition\t";
        for (int i = 0; i < 5; i++)
        {
            cout << Add[i] << "\t";
        }
        cout << "\nName: Subtraction\t";
        for (int i = 0; i < 5; i++)
        {
            cout << Sub[i] << "\t";
        }
        cout << "\nName: Multiplication\t";
        for (int i = 0; i < 5; i++)
        {
            cout << Mult[i] << "\t";
        }
        cout << "\nName: Division\t";
        for (int i = 0; i < 5; i++)
        {
            cout << Div[i] << "\t";
        }
    }
};

class AdvancedExercises
{
public:
    // Utilize a new Class BankAccount with owner and balance
    class BankAccount
    {
    private:
        string owner;
        double balance;

    public:
        BankAccount(string owner, double initialBalance)
            : owner(owner), balance(initialBalance) {}

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

    void BankClassTest()
    {
        string owner;
        double initialBalance;

        cout << "Enter account owner name: ";
        cin >> owner;
        cout << "Enter initial balance: ";
        cin >> initialBalance;

        BankAccount account(owner, initialBalance);
        // Menu for deposit, withdraw, print
        int option;
        do {
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
        } while (option != 0);
    }

    class VirtualPet {
    private:
        string name;
        int hunger;
        int happiness;
    public:
        VirtualPet(string petName) : name(petName), hunger(50), happiness(50) {}

        void feed(int amount) {
            hunger = max(0, hunger - amount*10);
            cout << name << " has been fed " << amount << " chicken wings. Hunger level: " << hunger << endl;
        }

        void play(int duration) {
            happiness = min(100, happiness + duration);
            cout << name << " played for " << duration << " minutes. Happiness level: " << happiness << endl;
        }

        void rest(int duration) {
            hunger += duration;
            happiness = min(100, happiness + duration);
            cout << name << " rested for " << duration << " minutes. Happiness level: " << happiness << "\tHunger level: " << hunger << endl;;

        };

        void Status() {
            cout << "Status of " << name << "\nHunger: " << hunger << ", Happiness: " << happiness << endl;
        }
    };

    void VirtualPetTest() {
        string petName = "Howie";
        cout << "Please enter a name for your new virtual pet! ";
        cin >> petName;
        VirtualPet yourPet = VirtualPet(petName);
        // Menu for feed, play, rest, and status
        int option;
        do {
            cout << "Choose an option: 1) Feed 2) Play 3) Rest 4) Status 0) Exit: ";
            cin >> option;
            if (option == 1)
            {
                double amount;
                cout << "Enter feed amount: ";
                cin >> amount;
                yourPet.feed(amount);
            }
            else if (option == 2)
            {
                double amount;
                cout << "Enter play duration: ";
                cin >> amount;
                yourPet.play(amount);
            }
            else if (option == 3)
            {
                double amount;
                cout << "Enter rest duration: ";
                cin >> amount;
                yourPet.rest(amount);
            } else if (option == 4)
            {
                yourPet.Status();
            }
        } while (option != 0);
    };
};

class MiscExercises
{
public:
    // Matrix Multiplication 2x2
    void matrixMultiplication2x2() {
        int A[2][2], B[2][2], C[2][2];
        cout << "Enter elements of Matrix A (2x2):\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> A[i][j];
            }
        }
        cout << "Enter elements of Matrix B (2x2):\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> B[i][j];
            }
        }
        // Matrix multiplication
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                C[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        // Display result
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }
    // Exercise 8: Quadratic Equation Solver
    void quadraticSolver() {
        double a, b, c, d;
        cout << "Enter coefficients a, b, c for ax^2 + bx + c = 0:\n";
        cin >> a >> b >> c;
        if (a == 0) {
            cout << "Not quadratic." << endl;
            return;
        } else if (d > 0) {
            cout << "Two real roots exist." << endl;
        } else if (d == 0) {
            cout << "One double root exists." << endl;
        } else {
            cout << "Complex roots exist." << endl;
        }
        // Compute discriminant
        if (a != 0) {
            d = b * b - 4 * a * c;
            cout << "Discriminant D = " << d << endl;
        }
    }
    // Exercise 9: Four-Question Quiz
    void fourQuestionQuiz() {
        int score = 0;
        char answer;
        cout << "Question 1: What is 2 + 2?\n A) 3\n B) 4\n C) 5\n D) 6\n";
        while (true) {
            cin >> answer;
            if (toupper(answer) == 'A' || toupper(answer) == 'B' || toupper(answer) == 'C' || toupper(answer) == 'D') {
                break;
            } else {
                cout << "Invalid input. Please enter A, B, C, or D: ";
            }
        }
        if (toupper(answer) == 'B') score += 100;

        cout << "Question 2: What is the capital of Pennsylvania?\n A) Philadelphia\n B) Pittsburgh\n C) Harrisburg\n D) Erie\n";
        while (true) {
            cin >> answer;
            if (toupper(answer) == 'A' || toupper(answer) == 'B' || toupper(answer) == 'C' || toupper(answer) == 'D') {
                break;
            } else {
                cout << "Invalid input. Please enter A, B, C, or D: ";
            }
        }
        if (toupper(answer) == 'C') score += 100;

        cout << "Question 3: Is this program a part of the midterm? (Y/N)\n";
        while (true) {
            cin >> answer;
            if (toupper(answer) == 'Y' || toupper(answer) == 'N') {
                break;
            } else {
                cout << "Invalid input. Please enter Y or N: ";
            }
        }
        if (toupper(answer) == 'Y') score += 100;

        cout << "Question 4: Is the Earth flat? (Y/N)\n";
        while (true) {
            cin >> answer;
            if (toupper(answer) == 'Y' || toupper(answer) == 'N') {
                break;
            } else {
                cout << "Invalid input. Please enter Y or N: ";
            }
        }
        if (toupper(answer) == 'N') score += 100;

        cout << "Your total score is: " << score << endl;
        if (score > 300) {
            cout << "YOU ARE THE BEST!" << endl;
        } else {
            cout << "Never Give Up." << endl;
        }
    }
    // Exercise 10: Linear Equation Solver
    void linearEquationSolver() {
        double a, b, c;
        cout << "Enter coefficients a, b, c for ax + b = c:\n";
        cin >> a >> b >> c;
        if (a == 0 && b == c) {
            cout << "Infinite solutions." << endl;
        } else if (a == 0 && b != c) {
            cout << "No solution." << endl;
        } else {
            double x = (c - b) / a;
            cout << "The solution is x = " << x << endl;
        }
    };

};

int main()
{
    int choice;
    EasyExercises easyClass;
    IntermediateExercises mediumClass;
    AdvancedExercises hardClass;
    MiscExercises miscClass;
    do
    {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Compute Basic Operations\n";
        cout << "2. Average of Two Numbers\n";
        cout << "3. Sum of Fixed Array\n";
        cout << "4. Operations with Arrays\n";
        cout << "5. Bank Class Test\n";
        cout << "6. Virtual Pet Test\n";
        cout << "7. Matrix Multiplication 2x2\n";
        cout << "8. Quadratic Equation Solver\n";
        cout << "9. Four-Question Quiz\n";
        cout << "10. Linear Equation Solver\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            easyClass.computeBasicOperations();
            break;
        case 2:
            easyClass.averageOfTwoNumbers();
            break;
        case 3:
            mediumClass.sumOfFixedArray();
            break;
        case 4:
            mediumClass.operationsWithArrays();
            break;
        case 5:
            hardClass.BankClassTest();
            break;
        case 6:
            hardClass.VirtualPetTest();
            break;
        case 7:
            miscClass.matrixMultiplication2x2();
            break;
        case 8:
            miscClass.quadraticSolver();
            break;
        case 9:
            miscClass.fourQuestionQuiz();
            break;
        case 10:
            miscClass.linearEquationSolver();
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}