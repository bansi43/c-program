#include<iostream>
using namespace std;

class student
{
     private:
    int id;
    char name[10];
    public:

    
    void print()
    {
        cout<<"enter the id:"<<id<<endl;
        cin>>id;
        cout<<"enter the name:"<<name<<endl;
        cin>>name;
    }
    void putdata()
    {
        cout<<"id:"<<id<<endl;
        cout<<"name"<<name<<endl;
    }
};
class studentexam: public student

{
 
    int sub1,sub2,sub3;
    float per;

    publlic:
  
    void data()
    {
        cout<<"enter the subject marks:"<<endl;
        cin>>sub1>>sub2>>sub3;
        
    }
    void data2()
    {
        cout<<"sub1,sub2 and sub3:"<<sub1<<sub2<<sub3<<end;
    }

};
class studentresult:public studentexam
{
   
    public:
    void cal()
    {
        per=(sub1+sub2+sub3)/3.0 <<endl;
        cout<<"\n \n total percentage:"<<per;
    }



};
int main()
{
     studentresult obj;
     for(int i=0;i<3;i++)
     {
         obj.print();
         obj.putdata();
         obj.data();
         obj.data2();
         obj.cal();

     }
     
}

