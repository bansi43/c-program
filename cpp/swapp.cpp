#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"enter the value of a:";
    cin>>a;

    cout<<"enter thye value of b:";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"swapping value using third value:a-"<<a<<endl;
    cout<<"swapping value using third value b-"<<b<<endl;
}
