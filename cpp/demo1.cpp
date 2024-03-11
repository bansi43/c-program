#include<iostream>
using namespace std;

class sum
{
    int x,y;

    public:
    sum()
    {
         x=0;
         y=0;
    };
    sum(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"\t\tthe first number:"<<x<<endl;
        cout<<"\t\t\tthe second number:"<<y<<endl;
    }
    sum operator*(sum c)
    {
        sum n;
        n.x = x*c.x;
        n.y = y*c.y;
        return n;
    }
};
int main()
{
    sum c1,c2,c3;
    c1=sum(2,4);
    c2=sum(4,6);
    cout<<"first input:";
    c1.print();
    cout<<"second input:";
    c2.print();
    cout<<"\toutput:";
    c3=c1*c2;
    c3.print();

}