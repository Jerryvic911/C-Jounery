// #include <iostream>
// using namespace std;

// // string state = "Delta";
// // string matric = "GFU/25/CYB/001";

// int main()
// {
//     // cout <<"Hello, World" << endl;
//     // cout <<"My name is Jeremiah Victor" << endl;
//     // cout <<"My matric number is " << matric << endl;
//     // cout <<"I am from " << state << " state" << endl;
//     // cin.get();

//     int x, y;
//     int sum;
//     cout << "Type a number: ";
//     cin >> x;
//     cout << "Type another number: ";
//     cin >> y;
//     sum = x + y;
//     cout << "Sum is: " << sum;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {

    double num1;
    double num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    if (operation == '+') {
        cout << "Result: " << num1 + num2;
    }
    else if (operation == '-') {
        cout << "Result: " << num1 - num2;
    }
    else if (operation == '*') {
        cout << "Result: " << num1 * num2;
    }
    else if (operation == '/') {

        if (num2 != 0) {
            cout << "Result: " << num1 / num2;
        }
        else {
            cout << "Error! Cannot divide by zero.";
        }
    }
    else {
        cout << "Invalid operator!";
    }

    return 0;
}