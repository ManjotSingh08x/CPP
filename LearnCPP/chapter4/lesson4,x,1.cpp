#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    cout << "Enter a double value: ";
    cin >> a;
    cout << "Enter a double value: ";
    cin >> b;
    char symbol;
    cout << "Enter +, -, *, or /: ";
    cin >> symbol;

    if (symbol == '+')
        cout << a << " + " << b << " is " << a + b << endl;
    else if (symbol == '-')
        cout << a << " - " << b << " is " << a - b << endl;
    else if (symbol == '*')
        cout << a << " * " << b << " is " << a * b << endl;
    else if (symbol == '/')
        cout << a << " / " << b << " is " << a / b << endl;
    else 
        cout << "Invalid";

    return 0;
}