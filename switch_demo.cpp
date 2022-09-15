// calculator using switch

#include <iostream>
using namespace std;
int main()
{

    int a,b;    // a=first_num   | b=second_num
    char opr;      // opr=operator (+ - * /)
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter operator : ";
    cin >> opr;
    
    switch (opr)
    {
        case '+':       // addition
            cout << a+b;
            break;
        case '-':       // subtraction
            cout << a-b;
            break;      
        case '*':       // multiplication 
            cout << a*b;
            break;
        case '/':       // division 
            cout << a/b;
            break;
        default:        
            cout << "Invalid Operation!! ";
            break;
    
    }

}