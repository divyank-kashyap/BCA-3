// simple program to check whether we can go to threatre or not xD 
// just used if in this program

#include <iostream>
using namespace std;
int main()
{
    int money;      // money u have 
    cout << "How much money : ";
    cin >> money;
    if (money >= 500)        // if money is less than 500 
        cout << "Lets go to threatre" << endl;      // if true this statement will execute
        cout << "Lets go to home ";                 // this will execute in both situtations (either true or false)
}