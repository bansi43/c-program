#include<iostream>
using namespace std;
class report

{
    private:
    int i;
    int adno;
    char name[20];
    float marks[5];
    float avg,total,per;
    void getvag();
    {
        if(i=0;i<5;i++)
        {
            total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5];
            avg=total*100/500;
            return avg;
            return per;
        }
    
        public:
        void readinfo();
        void display();
    }
};
void report::readinfo()
{
  cout<<"enter the admin no:";
  cin>>adno;
  cout<<"enter the name:";
  cin>>name;
  if(i=0;i<5;i++)
  {
    cout<<"enter marks:";
    cin>>marks[i];
  }
  avg=getvag();
  
}
void report::display()
{
    cout<<"admin no:"<<admin<<endl;
      cout<<"name:"<<name<<endl;
      if(i=0;i<5;i++)
      {
        cout<<"marks:"<<marks[i]<<endl;
        cout<<"avg:"<<avg<<end;
        cout<<"per:"<<per<<endl;
      }
}
int main()
{
    report r;
    r.readinfo();
    r.display();
}
