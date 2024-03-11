#include<iostream>
using namespace std;
class bank
{
    int amount;
 
    public:
    bank()
    {
       amount=0;   
    }  

    void deposit(int amt);
    void withd(int amt);
    void balance();
};


void bank ::deposit(int amt)
{
    if(amt<0)
    cout<<"invalid amount:";
    amount=amount+amt;
}

void bank ::withd(int amt)
{
    if(amt<0)
    cout<<"invalid amount:";

    if(amt>amount)
    {
        cout<<"\nInsufficient balance.. pls check";
    }
    else{
    amount=amount-amt;
    }
}
void bank:: balance()
{
    cout<<"\n Enter the balance:"<<amount;
}

int main()
{
    int pin;
    cout<<"enter pin:";
    cin>>pin;

    if(pin==1234)
    {
    int choice,myamt;
    bank b;
    do
    {
    cout<<"\n--------------------------Bank Account-------------------------------"<<endl;
    cout<<"Account id :1"<<endl;
    cout<<"Account number:bansi"<<endl;
    cout<<"Account type:saving"<<endl;
   
    cout<<"\n1. Deposit";
    cout<<"\n2. Withdral";
    cout<<"\n3. Check Balance";
    cout<<"\n4. Exit..!!"<<endl;
    
   
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    switch (choice)
    {
    
     case 1:
        {
            cout<<"Enter amount for deposit:";
            cin>>myamt;
            b.deposit(myamt);
            break;
        }
     case 2:
        {
            cout<<"Enter amount for withdrawal:";
            cin>>myamt;
            b.withd(myamt);
            break;
        }
    case 3:b.balance();
    {
        break;
    }
   case 4:
   {
       cout<<"<<--------------------------Thank you!!!----------------->>";
   }
    }
    }
    while(choice!=4);
}
else
cout<<"Invalid pin";
}