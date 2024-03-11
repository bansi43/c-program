#include<iostream>
using namespace std;

class base
{
   
    int salary;

    public:
    int bonus;
    int total;
    void addsalary(int salary1)
    {
        salary=salary1;
    }
    void totalsalary()
    {
        total=salary+bonus;
    }
};
class derive :public base
{
    public:
    void addbonus(int bonus1)
    {
        bonus=bonus1;
    }

};
int main()
{
    derive add;
    add.addsalary(10000);
    add.addbonus(5000);
    add.totalsalary();
     
    cout<<"bonus:"<<add.bonus<<endl;
    cout<<"total salary:"<<add.total;

}