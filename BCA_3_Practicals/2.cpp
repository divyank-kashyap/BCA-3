// Simple calculator (using switch case)

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char opr;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator : ";
    cin >> opr;
    cout << "Enter second number : ";
    cin >> b;
    switch (opr)
    {
        case '+':
            cout << a+b;
            break;
        case '-':
            cout << a-b;
            break;
        case '*':
            cout << a*b;
            break;
        case '/':
            cout << a/b;
            break;
        default: 
            cout << "Invalid operation !!!";
            break;

    }
}