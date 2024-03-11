#include<iostream>
using namespace std;
class arith
{
    int x,y;

    public:
      void adddata()
      {
        cout<<"add x data:";
        cin>>x;
        cout<<"add y data:";
        cin>>y;
      }
      void print()
      {
        cout<<"value of x: and y:"<<x<<y;
      }


};
int main()
{
    arith x1[3];
    for(int i=0;i<3;i++)
    {
        x1[i].adddata();
    }
}