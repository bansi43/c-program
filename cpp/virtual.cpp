#include<iostream>
using namespace std;


class base
{
    public:
    `int a=10;
   virtual  void display()=0;
};
class derive:public base
{
    public:
    int b=20;
    void data()
    {
        cout<<"data";
    }
    void display()
    {
        cout<<"the value of b is:"<<b<<endl;
    }
};
int main()
{
    base *pobj;
    derive obj2;
    pobj=&obj2;
    pobj->display();
}