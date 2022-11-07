// To calculate greatest of three number using nested if else statements

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter three values: ";
    cin >> a >> b >> c;
    if (a>=b)
    {
        if (a>=c)
        {
            cout << "Largest number : " << a;
        }
        else 
        {
            cout << "Largest number : " << c;
        }
    }
    else
    {
        if (b>=c)
        {
            cout << "Largest number : " << b;
        }
        else 
        {
            cout << "Largest number : " <<c;
        }
    }
 }   
  