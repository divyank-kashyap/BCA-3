// To calculate mean of n elements of an array 

#include <iostream>
using namespace std;
int main()
{
    int n,j;
    float num[100], sum=0.0, mean;
    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n>100 || n<=0)
    {
        cout << "Error! /n Number should be in range of (1 to 100)" << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for (int i=0; i<n; ++i)
    {
        cout << "Enter number : ";
        cin >> num[i];
        sum += num[i];
    }

    cout << "Sum is = " << sum << endl;
    mean = sum/n;

    cout << "Mean of enter number : " << mean << endl;

}