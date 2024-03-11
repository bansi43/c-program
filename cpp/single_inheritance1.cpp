#include<iostream>
using namespace std;

class base
{
      public:
     int x;
    
      void getdata()
      {
         cout<<"value x:";
         cin>>x;
      }

};
class derive:public base
{
      public:
      int y;
      void data()
      {
         cout<<"value y:";
         cin>>y;
      }

 
    void product()
   {
        cout<<"product :"<<x  * y;
   }
};
int main()
{
    derive d;
    d.getdata();
    d.data();
     d.product();
  

}