#include<iostream>
using namespace std;

class deplay
{
    int a,b;
    public:
       deplay(); //consstructor
     // ~deplay(); //distructor
      void printdata()
      {
        cout<<"value a is:"<<a<<endl;
        cout<<"value b is:"<<b<<endl;

      }
};
deplay::deplay()
{
    a=10;
    b=0;
}

int main()
{
    deplay data;
    data.printdata();

}