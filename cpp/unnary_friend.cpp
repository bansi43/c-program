#include<iostream>
using namespace std;
class demo
{
    int a;
    int b;
    
    friend demo display(int a,int b);

    public:
     demo(int x,int y)
      {
         a=x;
         b=y;

      }
       demo display(int a,int b);
      void operator ++(int)
      {
        a++;
        b++;
      }
      void display()
      {
        cout<<" a: "<< a <<endl<<" b: "<< b <<endl;
      }
};
int main()
{
    demo a(10,20);
    a++;
    a.display(); 
}      