// to print "hello bruh" n times using while loop

#include <iostream>
using namespace std;
int main()
{
    
    int i=0, n;
    cout << "Enter number : ";
    cin >> n;
    while (i<n)
    {
        cout << "Hello bruh! " << "\n";
        i++;
    }
}