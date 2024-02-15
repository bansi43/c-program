#include<iostream>
using namespace std;

class student
{
   private:
   int a,b,c;

   public:
   int d,e;
   void setdata(int a,int b, int c);
   void printdata()
   {
      cout<<"data a is:"<<a<<endl;
      cout<<"data b is :"<<b<<endl;
      cout<<"data c is:"<<c<<endl;
      cout<<"data d is :"<<d<<endl;
      cout<<"data e is:"<<e<<endl;


   }

};
void student :: setdata(int a1,int b1,int c1)
{
       a=a1;
       b=b1;
       c=c1;
}

int main()
{
    student students;
    students.d=40;
    students.e=50;
    students.setdata(10,20,30);
    students.printdata();


}
