#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "\n===== Scientific Calculator =====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Power (x^y)\n";
        cout << "6. Square Root (√x)\n";
        cout << "7. Sin(x)\n";
        cout << "8. Cos(x)\n";
        cout << "9. Tan(x)\n";
        cout << "10. Log(x)\n";
        cout << "11. Log10(x)\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!\n";
                break;

            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << pow(num1, num2) << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Result: " << sqrt(num1) << endl;
                else
                    cout << "Error: Negative input!\n";
                break;

            case 7:
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << sin(num1) << endl;
                break;

            case 8:
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << cos(num1) << endl;
                break;

            case 9:
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << tan(num1) << endl;
                break;

            case 10:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0)
                    cout << "Result: " << log(num1) << endl;
                else
                    cout << "Error: Log undefined!\n";
                break;

            case 11:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0)
                    cout << "Result: " << log10(num1) << endl;
                else
                    cout << "Error: Log10 undefined!\n";
                break;

            case 0:
                cout << "Exiting calculator...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}