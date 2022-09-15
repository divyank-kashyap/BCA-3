// program to calculate factorial of any number 
// factorial of 5 = (5 x 4 x 3 x 2 x 1)

#include <iostream>
using namespace std;
int main()
{
    int n;      // number to be entered (factorial of n)
    cout << "Enter number : ";      
    cin >> n;
    int fact = 1;       // initialzing fact = 1
    for (n; n>=1; n--)
    {
        fact = fact*n;      
    }
    cout << fact;
}
