#include<iostream>
using namespace std;
class arith
{
    int x,y;

    public:
    void input()
    {
        cout<<"enter the first number:";
        cin>>x;
    }
    void input2()
    {
        cout<<"enter the second number:";

        cin>>y;
    }
    arith operator*(arith ob)
    {
        arith A;
        A.x =x*ob.x;
        return(A);
    }

    void print()
    {
        cout<<"the sum of two number is:"<<x;
    }
};
int main()
{
    arith x1,y1,res;

    x1.input();
    y1.input();

    res=x1*y1;
    res.print();
}