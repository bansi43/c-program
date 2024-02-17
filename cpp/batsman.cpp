#include<iostream>
using namespace std;

class batsman
{
    private:
    int bcode;
    char bname[20];
    int inning,notout,runs;
    float batvag;
    float calvag;
   }
    
    public:
    
 void reddata()
 {
  cout<<"enter the bcode:";
  cin>>bcode;
  cout<<"enter the banme:";
  cin>>bname;
  cout<<"enter the inning:";
  cin>>inning;
  cout<<"enter the notout:";
  cin>>notout;
  cout<<"enter the runs:";
  cin>>runs;

 
};
    void displaydata()
    {
    cout<<"becode"<<bcode<<endl;
    cout<<"bname"<<bname<<endl;
    cout<<"inning"<<inning<<endl;
    cout<<"notout"<<notout<<endl;
    cout<<"runs"<<runs<<endl;
    cout<<"calvag"<<calvag<<endl;

    };

    
};


int main()
{
    batsman b;
    b.reddata();
    b.displaydata();
}