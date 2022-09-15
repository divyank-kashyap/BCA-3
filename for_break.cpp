// use of break statement in for loop

#include <iostream>
using namespace std;
int main()
{
    for (int i=0; i<=4; i++)
    {
        cout << i << endl;
        if (i==2)
        break;
    }
}