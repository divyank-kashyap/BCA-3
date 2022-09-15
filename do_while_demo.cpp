// do_while demo program 


#inlude <iostream>
using namespace std;
int main()
{
    int arr[5]= {10,20,30,40,50};
    int i=0;
    do
    {
        cout << arr[i] << " ";
        i++;
    }
    while(i<=4);
    {
        cout << arr[i] << " ";
    }
}