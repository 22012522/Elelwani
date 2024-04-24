#include <iostream>

using namespace std;

void displayMenu();
void performOperation(int choice);

int main() {
    char option;

    do {
        int choice;
        displayMenu();
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            performOperation(choice);
        } else {
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> option;
    } while (option == 'y' || option == 'Y');

    cout << "Exiting program. Thank you!" << endl;

    return 0;
}

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
}

void performOperation(int choice) {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "The second integer is zero, divide by zero" << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}