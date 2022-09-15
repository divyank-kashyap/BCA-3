// if_else nested ladder program to buy apples or not  
// in this program multiple choices used 


#include <iostream>
using namespace std;
int main()
{
    char choice;
    cout << "Going market or not (y or n): ";
    cin >> choice;
    if (choice=='y')
    {
        cout << "Apple available or not (y or n): ";
        cin >> choice;
        if (choice=='y')
        {
            cout << "Apples fresh or not (y or n): ";
            cin >> choice;
            if (choice == 'y')
            {
                cout << "Buy 2kg apples";       // buy 2kg becuz mother told
            }
            else 
            {
                cout << "Buy bananas";      // buy bananas -_- becuz no apples are not fresh 
            }
        }
        else 
        {
            cout << "Leave";        
        }
    }
    else 
    {
        cout << "NVM";      // never mind
    }
}