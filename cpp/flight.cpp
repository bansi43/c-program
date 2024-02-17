#include<iostream>
using namespace std;
class flight
{
    private:
    int flightno;
    char destination[30];
    float distance,qty;
    int calcfule()
    {
        if(distance<=1000)
        {
            return 500;
        }
        else if(distance<=200)
        {
            return 1100;
        }
        else
        {
            return 2200;
        }
    }
    public:
    void feedinfo();
    void showdata();
};    

void flight::feedinfo()
{
    cout<<"enter flightno:";
    cin>>flightno;
    cout<<"enter destination:";
    cin>>destination;
    cout<<"enter distance:";
    cin>>distance;
    qty=calcfule();

}
void flight::showdata()
{
    cout<<"flightno:"<<flightno<<endl;
     cout<<"destination:"<<destination<<endl;
      cout<<"distance:"<<distance<<endl;
       cout<<"qty:"<<qty<<endl;

}
int main()
{
    flight f;
    f.feedinfo();
    f.showdata();

}

