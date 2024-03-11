#include<iostream>
using namespace std;
class Arith
{
    int x,y;
    public:
    Arith(int a,int b)
    {
        x=a;
        y=b;
    }
    Arith operator--(int)
    {
        x--;
        y--;
    }
    void print()
    {
        cout<<"value of x:"<<x<<endl;
         cout<<"value of y:"<<y<<endl;

    }
};
int main()
{
    Arith x1(8,9);
    {
        x1--;
        x1.print();
        return 0;
    }
}