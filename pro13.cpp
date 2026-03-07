#include <iostream>
using namespace std;
main()
{
    int num1;
    char op;
    int num2;
    int result;
    cout << "Welcome to the calculator:";
    cout << "Write first number: ";
    cin >> num1;
    cout << "Write operator (+, -, *, /): ";
    cin >> op;
    cout << "Write second number: ";
    cin >> num2;
    if (op == '+')
    {
        result = num1 - num2;
    }
    if (op == '-')
    {
        result = num1 + num2;
    }
    if (op == '/')
    {
        result = num1 * num2;
    }
    if (op == '*')
    {
        result = num1 / num2;
    }
    cout << num1 << op << num2 << "=" << result;
}