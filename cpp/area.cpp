#include<iostream>
using namespace std;

class test
{
   public:
      int area();
       
    int area(int r)
    {
        return 3.14*r*r;
    }
    int  area(double hight,int base)
    {
        return hight*base/2;
    }
    int area(int height, int width )
    {
        return height*width;
    }
    double area(double side)
    {
        return side*side;
    }

};
int main()
{`
    test t;
    cout<<"area of circle:"<<t.area(10)<<endl;
   cout<<"area of triangle:"<<t.area(20.6,20)<<endl;
      cout<<"area of rectangle:"<<t.area(20,30)<<endl;
       cout<<"area of square:"<<t.area(20.5)<<endl;

}