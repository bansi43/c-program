#include<iostream>
using namespace std;

class employee
{
    int id;
    int time;
    char name[10];
    int sallary;

    public:
    void adddata()
    {
        cout<<"employee id:";
        cin>>id;
         cout<<"employee time:";
        cin>>time;
        cout<<"employee name:";
        cin>>name;
         cout<<"employee  sallary:";
        cin>>sallary;
       

    }
    void print()
    {
        cout<<"value of id:"<<id;
        cout<<"value of time:"<<time;
        cout<<"value of name:"<<name;
        cout<<"value of sallary:"<<sallary;

    }
};

int main()
{
    employee x[3];
    for(int i=0;i<3;i++)
    {
        x[i].adddata();
    }
}
