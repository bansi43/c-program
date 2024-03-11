#include<iostream>
using namespace std;

class base1
{
    protected:
    int a;
    public:
    void setdata1(int x1)
    {
        a=x1;
    }

};

class base2
{
    protected:
    int  b;
    public:
    void setdata2(int x2)
    {
        b=x2;
    }

};

class derived :public base1,public base2
{
     public:
     void print()
     {
          cout<<"enter the value 1:"<<a<<endl;
            cout<<"enter the value 2:"<<b<<endl;
            cout<<"sum:"<<a+b;

     }
};
int main()
{
    derived obj1;
    obj1.setdata1(10);
    obj1.setdata2(20);
    obj1.print();
}

