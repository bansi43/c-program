#include<iostream>
using namespace std;

class book
{

    int bookno;
    char booktitle[10];
    int price;
    float tcost;
    void total_cost(int n)
    {
        price=tcost*n;
        cout<<"tcost:";
    }

    public:
    void input();
    void purchase();

};
void book::input()
{
    cout<<"enter the bookno:";
    cin>>bookno;
    cout<<"enter the booktitle:";
    cin>>booktitle;
     cout<<"enter the price:";
    cin>>price;
}
void book::purchase()
{
  int n;
  cout<<"enter the copies number:";
  cin>>n;
  total_cost(n);

}
int main()
{
    book b;
    b.input();
    b.purchase();
}