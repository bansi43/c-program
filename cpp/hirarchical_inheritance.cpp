#include<iostream>
using namespace std;

class base
{
  public:
  int a;
  int b;
  void adddata(int a1 ,int b1)
  {
    a=a1;
    b=b1;
  }


};

class sum:public base
{
    public:
    void sumnumber()
    {
        cout<<"sum of number:"<<a+b<<endl;
    }
};
class multi:public base
{
    public:
    void multinumber()
    {
        cout<<"multi number of number:"<<a*b<<endl;
    }
};
int main()
{
    sum obj1;
    multi obj2;
    obj1.adddata(10,20);
    obj2.adddata(20,30);
    obj1.sumnumber();
    obj2.multinumber();
}