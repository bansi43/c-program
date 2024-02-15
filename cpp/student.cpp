#include<iostream>
using namespace std;

class student
{
    private :
    int adminno1;
    char studentname;
    float eng;
    float math;
    float sci;
    float total;

    public:
    
        int adminno2;
        char studentname;
        float eng;
        float math;
        float sci;
        float total;
        void setdata(int adminno,char studentname,float eng,float math,float sci,float total);
        void printdata()
        {
            cout<<" adminno1 :"<<adminno1<<endl;
            cout<<"studentname:"<<studentname<<endl;
            cout<<"eng:"<<eng<<endl;
            cout<<"math:"<<math<<endl;
            cout<<"sci:"<<sci<<endl;
            cout<<"total:"<<total<<endl;
            cout<<" adminno2 :"<<adminno1<<endl;
            cout<<"studentname:"<<studentname<<endl;
            cout<<"eng:"<<eng<<endl;
            cout<<"math:"<<math<<endl;
            cout<<"sci:"<<sci<<endl;
            cout<<"total:"<<total<<endl;

        }
    
};

void  student :: setdata(int a1, char b1, float c1, float d1,float e1,float f1)
{
   adminno2=a1;
   studentname=b1;
   eng=c1;
   math=d1;
   sci=e1;
}
int main()
{
    student students;
    students.adminno2=2;
    students.studentname='janu';
    students.eng=80;
    students.math=70;
    students.sci=60;
    students.total=210;
    students.setdata(1,'bansi',50,60,50,160);

}