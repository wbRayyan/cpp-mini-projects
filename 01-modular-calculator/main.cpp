#include <iostream>
using namespace std;

// User se number lene ke liye function
int getNumberFromUser() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;
    return value;
}

// User se operation lene ke liye function
char getOperationFromUser() {
    char op;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;
    return op;
}

// Math operation functions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

// Result display karne ke liye void function
void printResult(int num1, char op, int num2, int result) {
    cout << "\nResult: " << num1 << " " << op << " " << num2 << " = " << result << endl;
}

int main() {
    cout << "=== Modular C++ Calculator ===" << endl << endl;

    int num1 = getNumberFromUser();
    int num2 = getNumberFromUser();
    char op = getOperationFromUser();

    if (op == '+') {
        printResult(num1, op, num2, add(num1, num2));
    } else if (op == '-') {
        printResult(num1, op, num2, subtract(num1, num2));
    } else if (op == '*') {
        printResult(num1, op, num2, multiply(num1, num2));
    } else if (op == '/') {
        printResult(num1, op, num2, divide(num1, num2));
    } else {
        cout << "Invalid operation selected." << endl;
    }

    return 0;
}