#include<iostream>
using namespace std;

class employee
{
    int id;
   static int count;

    public:
    void setdata()
    {
        cout<<"enter the id:";
        cin>>id;
        count++;
    }

void printdata()
{
    cout<<"the id of employee"<<id<<endl;
}

static void getout()
{
    cout<<"cout is "<<count<<endl;
}
};
int employee::count;
int main()
{
    employee rohan,raj,kishan;
    rohan.setdata();
    rohan.printdata();
    rohan.getout();

    raj.setdata();
    raj.printdata();
    raj.getout();

    kishan.setdata();
    kishan.printdata();
    kishan.getout();
}