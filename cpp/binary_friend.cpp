#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;
    friend complex sumnumber(complex o1,complex o2);

    public:
    void setnumber(int x,int y)
    {
        a=x;
        b=y;
    }
    void printdata()
    {
        cout<<"your number is:"<<a<<" + "<<b<<endl;
    }
};
 complex sumnumber (complex o1,complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a),(o2.b + o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;
    c1.setnumber(1,4);
    c1.printdata();
    c2.setnumber(4,8);
    c2.printdata();
    sum=sumnumber(c1,c2);
    sum.printdata();
    return 0;
}