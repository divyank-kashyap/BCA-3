#include <iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;
    public: 
    int d,e;
    void setdata(int x, int y, int z);
    void getdata()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
        cout << "The value of d is : " << d << endl;
        cout << "The value of e is : " << e << endl;

    }

};

void employee :: setdata(int x, int y, int z)
{
a = x;
b = y;
c = z;
}

int main()
{
    employee ep1;
    ep1.d = 4;
    ep1.e = 5;
    ep1.setdata(6,7,8);
    ep1.getdata();

}