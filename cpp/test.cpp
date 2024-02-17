#include<iostream>
using namespace std;

class test
{
    private:
    int testcode;
    char description[20];
    int Nocandidate;
    int centerRead;
    calcntr()
    {
        return Nocandidate/100+1;
        cout<<"  centerRead :"<<centerRead<<endl;
    }

    public:
   
     void schedule()
    { 
           cout<<"enter the testcode:"<<endl;
           cin>>testcode;
           cout<<"enter the description:"<<endl;
           cin>>description;
           cout<<"enter the Nocandidate:"<<endl;
           cin>>Nocandidate;
           cout<<" enter the centerRead :"<<endl;
          centerRead=calcntr();
         
    }
     void disptest()
     {
             cout<<"enter the testcode:"<<endl;
             cout<<"enter the description:"<<endl;
             cout<<"enter the Nocandidate:"<<endl;
             cout<<" enter the centerRead :";
        
     }

};
int main()
{
    test t;
    t.schedule();
    t.disptest();
  
}
