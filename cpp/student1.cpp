#include<iostream>
using namespace std;

class stud
{
    private:
    int admno;
    char sname[10];
    float eng,math,sci;
     float ctotal;
    {
       
        ctotal=eng+math+sci;
        return ctotal;
    }

   
    public:
    void takedata();
    void showdata();

   
    };
void stud::takedata()
{
  cout<<"enter the admno:";
  cin>>admno;
  cout<<"enter the sname:";
  cin>>sname;
   cout<<"enter the ctotal:";
  cin>>ctotal;
} 
void stud::showdata()
{
   cout<<"enter the admno:"<<admno<<endl;

  cout<<"enter the sname:"<<sname<<endl;

   cout<<"enter the ctotal:"<<ctotal<<endl;

}
int main()
{
    stud s;
    s.takedata();
    s.showdata();
  
}

