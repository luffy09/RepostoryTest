#include <iostream>

using namespace std;

int main() {
char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (op == '+') {
        cout << "Sum: " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << "Substraction: " << num1 - num2 << endl;
    } else if (op == '*') {
        cout << "Multiplication: " << num1 * num2 << endl;
    } else if (op == '/') {
        if (num2 != 0) {
            cout << "Division: " << num1 / num2 << endl;
        } else {
            cout << "You cannot divide by zero!" << endl;
        }
    } else {
        cout << "Wrong operator entered!" << endl;
    }

    return 0;

}