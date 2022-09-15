// basic + - / * calculation based calculator 
// if, else_if, else used

#include <iostream>
using namespace std;
int main()
{
    int a,b;        // a = first_number   b = second_number
    char opr;       // opr = operator (+ - * /)

    cout << "Enter first number : ";
    cin >> a; 
    cout << "Enter operator : ";
    cin >> opr;
    cout << "Enter second number : ";
    cin >> b;
    
    if (opr == '+')
        cout << a << '+' << b << '=' <<(a+b);
    else if  (opr == '-')
        cout << a << '-' << b << '=' <<(a-b);
    else if (opr == '*')
        cout << a << '*' << b << '=' <<(a*b);
    else if (opr == '/')
        cout << a << '/' << b << (a/b);
    else
        cout << "Invalid operator!!!";      // if operator != (+ - * /)
    
}