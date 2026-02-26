#include <iostream>
using namespace std;

char operation;
double num1;
double num2;

int main (){
    cout <<"pick operation +,-,/,*: ";
    cin >> operation;

    cout <<"pick Your first number: ";
    cin >> num1;

    cout << "pick your second number: ";
    cin >> num2;

    if (operation == '+')
    {
        cout << "Result = " << num1 + num2;
    }
    else if (operation == '-'){
        cout << "Result = " << num1 - num2;
    }
    else if(operation == '*'){
        cout << "Result = " << num1 * num2;
    }
    else if(operation == '/'){
        if (num2 != 0)
        {
            cout << "Result = " << num1/num2;
        }
        else{
            cout << "error! can not divide by zero";
        }
    }
     else{
            cout << "invalid operator";
        }
    
}