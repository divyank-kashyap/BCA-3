// To swap two numbers using pass by address

#include <iostream>
using namespace std;
void swap(int *, int *);
void swap(int &, int &);
int main()
{
    int a,b;
    cout << "Enter the value of A : ";
    cin >> a;
    cout << "Enter the value of B : ";
    cin >> b;

    cout << "\n Before swapping, Value of :: \n A =" << a << " B = "<< b << "\n";
    swap(&a, &b);
    cout << "\n Outside function after swapping value of :: \n A = " <<a  << " B = " << b << "\n";

}

void swap(int*a, int*b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    cout << "\n Inside function after swapping value of :: \n A = " << *a << " B = " <<*b <<"\n";
    

}

