
#include<iostream>
using namespace std;

class hotel
{
    char name[10];
    char order[20];
    int pnumber;
    
    void PIZZA();
    void CHIENISE();
    void SOUP();
    void BURGER();
    void Sweet();
    void GUJRATI_THALI();
    void PANJABI_THALI();
    void DOSA();
    void BEVERAGES();
    void FRENKIE();
    void PANIPURI();
    void ICECREAM();
    void FAST_FOOD();
    void SUBHA_KI_SURUAAT();

public:
int qty,multi;
void PIZZA (int odr)
{
    int choice1,Margherita=195,Sweet_Corns=215,Onion_Twist=165,Double_Cheese=495,Panner_Special=725;
  
     cout<<"\t\t\t--------------PIZZA-----------------"<<endl;
     cout<<"\t\t\t 1.Margherita.........  Rs:195"<<endl;
     cout<<"\t\t\t 2.Sweet Corns Delight.........  Rs:215"<<endl;
     cout<<"\t\t\t 3.Onion Twist............  Rs:165"<<endl;
     cout<<"\t\t\t 4.Double Cheese..........  Rs:495"<<endl;
     cout<<"\t\t\t 5.Panner Special.........  Rs:725"<<endl;
     
       cout<<"Enter Your choice:";
       cin>>choice1;
       
       switch(choice1)
       {
           case 1:
           {
                cout<<"\n\n\t\t______|Margherita Rs.195/Only|_______\n\n";
         
               cout<<"How many Quantity You Want To Buy:";
               cin>>multi;
               cout<<" Quantity :";
               cin>>qty;
               int price=multi*Margherita;
               int gst=price*18/100;
               int total=price+gst;
         
               cout<<"\n\n\t\t\t______|BILL|______\n\n";
               cout<<"The Price Of Margherita Are:"<<price<<endl;
               cout<<"The 15%  gst:"<<gst<<endl;
               cout<<"The Total Amount Is:"<<total<<endl;
               cout<<"\n\n\t\t\t_______THANK YOU!!_____";
               break;  
           }
           case 2:
           {
             cout<<"\n\n\t\t______|Sweet Corns Rs.215/Only|_______\n\n";
         
             cout<<"How many Quantity You Want To Buy:";
             cin>>multi;
             cout<<" Quantity :";
             cin>>qty;
             int price=multi*Sweet_Corns;
             int gst=price*18/100;
             int total=price+gst;
         
             cout<<"\n\n\t\t\t______|BILL|______\n\n";
             cout<<"The Price Of Sweet Corns Are:"<<price<<endl;
             cout<<"The 15%  gst:"<<gst<<endl;
             cout<<"The Total Amount Is:"<<total<<endl;
              cout<<"\n\n\t\t\t_______THANK YOU!!_____";      
               
               break;
           }
           
           case 3:
           {
                 cout<<"\n\n\t\t______|Onion Twist Rs.165/Only|_______\n\n";
                 cout<<"How many Quantity You Want To Buy:";
                 cin>>multi;
                 cout<<" Quantity :";
                 cin>>qty;
                 int price=multi*Onion_Twist;
                 int gst=(price/100)*18;
                 int total=price+gst;
         
                 cout<<"\n\n\t\t\t______|BILL|______\n\n";
                 cout<<"The Price Of Onion Twist Are:"<<price<<endl;
                 cout<<"The 15%  gst:"<<gst<<endl;
                 cout<<"The Total Amount Is:"<<total<<endl;
                 cout<<"\n\n\t\t\t_______THANK YOU!!_____";
             break;  
           }
           
           case 4:
           {
               
                cout<<"\n\n\t\t______|Double_Cheese Rs.495/Only|_______\n\n";
                cout<<"How many Quantity You Want To Buy:";
                cin>>multi;
                cout<<" Quantity :";
                cin>>qty;
                int price=multi*Double_Cheese;
                int gst=(price/100)*18;
                int total=price+gst;
         
                cout<<"\n\n\t\t\t______|BILL|______\n\n";
                cout<<"The Price Of Double Cheese Are:"<<price<<endl;
                cout<<"The 15%  gst:"<<gst<<endl;
                cout<<"The Total Amount Is:"<<total<<endl;
                cout<<"\n\n\t\t\t_______THANK YOU!!_____";
               break;
               
           }
           
           case 5:
           {
                cout<<"\n\n\t\t______|Panner_Special Rs.725/Only|_______\n\n";
                cout<<"How many Quantity You Want To Buy:";
                cin>>multi;
                cout<<" Quantity :";
                cin>>qty;
                int price=multi*Panner_Special;
                int gst=(price/100)*18;
                int total=price+gst;
         
                cout<<"\n\n\t\t\t______|BILL|______\n\n";
                cout<<"The Price Of Panner Special Are:"<<price<<endl;
                cout<<"The 15%  gst:"<<gst<<endl;
                cout<<"The Total Amount Is:"<<total<<endl;
                cout<<"\n\n\t\t\t_______THANK YOU!!_____";
               
               
               break;
               
           }
       }
      
}     
     
void CHIENISE(int odr)
{
    int choice2,Manchurian=100,Chienise_Bhel=110,Chienise_rol=20,Manchurian_Rise=150,Panner_chilli=150;
  
     cout<<"\t\t<<<<<<<<<--------------CHIENISE----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Manchurian.........  Rs:100"<<endl;
     cout<<"\t\t\t 2.Chienise Bhel.........  Rs:110"<<endl;
     cout<<"\t\t\t 3.Chienise Rol............  Rs:20"<<endl;
     cout<<"\t\t\t 4.Manchurian Rise...........  Rs:150"<<endl;
     cout<<"\t\t\t 5.Panner Chilli.........  Rs:150"<<endl;



     cout<<"Enter Your choice:";
     cin>>choice2;
     
       switch(choice2)
       {
           case 1:
           { 
                 cout<<"\n\n\t\t______|Manchurian Rs.100/Only|_______\n\n";
                 cout<<"How many Quantity You Want To Buy:";
                 cin>>multi;
                 cout<<" Quantity :";
                 cin>>qty;
                 int price=multi*Manchurian;
                 int gst=(price/100)*18;
                 int total=price+gst;
         
                cout<<"\n\n\t\t\t______|BILL|______\n\n";
                cout<<"The Price Of Manchurian Are:"<<price<<endl;
                cout<<"The 15%  gst:"<<gst<<endl;
                cout<<"The Total Amount Is:"<<total<<endl;
                cout<<"\n\n\t\t\t_______THANK YOU!!_____";

               break;  
           }
           case 2:
           {
                cout<<"\n\n\t\t______|Chienise Bhel Rs.110/Only|_______\n\n";
                cout<<"How many Quantity You Want To Buy:";
                cin>>multi;
                cout<<" Quantity :";
                cin>>qty;
                int price=multi*Chienise_Bhel;
                int gst=(price/100)*18;
                int total=price+gst;
         
                 cout<<"\n\n\t\t\t______|BILL|______\n\n";
                 cout<<"The Price Of Chienise Bhel Are:"<<price<<endl;
                 cout<<"The 15%  gst:"<<gst<<endl;
                 cout<<"The Total Amount Is:"<<total<<endl;
                 cout<<"\n\n\t\t\t_______THANK YOU!!_____";          
               
               break;
           }
           
           case 3:
           {
                cout<<"\n\n\t\t______|Chienise rol Rs.20/Only|_______\n\n";
                cout<<"How many Quantity You Want To Buy:";
                cin>>multi;
                cout<<" Quantity :";
                cin>>qty;
                int price=multi*Chienise_rol;
                int gst=(price/100)*18;
                int total=price+gst;
         
                cout<<"\n\n\t\t\t______|BILL|______\n\n";
                cout<<"The Price Of Chienise rol Are:"<<price<<endl;
                cout<<"The 15%  gst:"<<gst<<endl;
                cout<<"The Total Amount Is:"<<total<<endl;
                cout<<"\n\n\t\t\t_______THANK YOU!!_____";
     
     
                 
             break;  
           }
           
           case 4:
           {
                cout<<"\n\n\t\t______|Manchurian_Rise Rs.150/Only|_______\n\n";
                cout<<"How many Quantity You Want To Buy:";
                cin>>multi;
                cout<<" Quantity :";
                cin>>qty;
                int price=multi*Manchurian_Rise;
                int gst=(price/100)*18;
                int total=price+gst;
         
                cout<<"\n\n\t\t\t______|BILL|______\n\n";
                cout<<"The Price Of Manchurian Rise Are:"<<price<<endl;
                cout<<"The 15%  gst:"<<gst<<endl;
                cout<<"The Total Amount Is:"<<total<<endl;
                cout<<"\n\n\t\t\t_______THANK YOU!!_____";   
               
               break;
               
           }
           
           case 5:
           {
               cout<<"\n\n\t\t______|Panner_chilli Rs.150/Only|_______\n\n";
               cout<<"How many Quantity You Want To Buy:";
               cin>>multi;
               cout<<" Quantity :";
               cin>>qty;
               int price=multi*Panner_chilli;
               int gst=(price/100)*18;
               int total=price+gst;
         
               cout<<"\n\n\t\t\t______|BILL|______\n\n";
               cout<<"The Price Of Panner_chilli Are:"<<price<<endl;
               cout<<"The 15%  gst:"<<gst<<endl;
               cout<<"The Total Amount Is:"<<total<<endl;
               cout<<"\n\n\t\t\t_______THANK YOU!!_____";
               
               break;
           }
       }
}     
void SOUP(int odr)
{
    int choice3,Manchav_Soup=80,Tameto_Soup=100,Sweet_Corns_Soup=150,Thukpa_Soup=169,Hot_And_Source_Soup=199;
      
     cout<<"\t\t<<<<<<<<<--------------SOUP----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Manchav Soup.........  Rs:80"<<endl;
     cout<<"\t\t\t 2.Tameto Soup.........  Rs:100"<<endl;
     cout<<"\t\t\t 3.Sweet Corn Soup............  Rs:150"<<endl;
     cout<<"\t\t\t 4.Thukpa Soup...........  Rs:169"<<endl;
     cout<<"\t\t\t 5.Hot And Source Soup.........  Rs:199"<<endl;


     cout<<"Enter Your choice:";
     cin>>choice3;
      
       switch(choice3)
       {
           case 1:
           { 
                cout<<"\n\n\t\t______|Manchav_Soup Rs.80/Only|_______\n\n";
                cout<<"How many Quantity You Want To Buy:";
                cin>>multi;
                cout<<" Quantity :";
                cin>>qty;
                int price=multi*Manchav_Soup;
                int gst=(price/100)*18;
                int total=price+gst;
         
                cout<<"\n\n\t\t\t______|BILL|______\n\n";
                cout<<"The Price Of Manchav_Soup Are:"<<price<<endl;
                cout<<"The 15%  gst:"<<gst<<endl;
                cout<<"The Total Amount Is:"<<total<<endl;
                cout<<"\n\n\t\t\t_______THANK YOU!!_____"; 

               break;  
           }
           case 2:
           {
                  cout<<"\n\n\t\t______|Tameto_Soup Rs.100/Only|_______\n\n";
                  cout<<"How many Quantity You Want To Buy:";
                  cin>>multi;
                  cout<<" Quantity :";
                  cin>>qty;
                  int price=multi*Tameto_Soup;
                  int gst=(price/100)*18;
                  int total=price+gst;
         
                  cout<<"\n\n\t\t\t______|BILL|______\n\n";
                  cout<<"The Price Of Tameto Soup Are:"<<price<<endl;
                  cout<<"The 15%  gst:"<<gst<<endl;
                  cout<<"The Total Amount Is:"<<total<<endl;
                  cout<<"\n\n\t\t\t_______THANK YOU!!_____";         
               
               break;
           }
           
           case 3:
           {
                cout<<"\n\n\t\t______|Sweet_Corns_Soup Rs.150/Only|_______\n\n";
                cout<<"How many Quantity You Want To Buy:";
                cin>>multi;
                cout<<" Quantity :";
                cin>>qty;
                int price=multi*Sweet_Corns_Soup;
                int gst=(price/100)*18;
                int total=price+gst;
         
                cout<<"\n\n\t\t\t______|BILL|______\n\n";
                cout<<"The Price Of Sweet Corns Soup Are:"<<price<<endl;
                cout<<"The 15%  gst:"<<gst<<endl;
                cout<<"The Total Amount Is:"<<total<<endl;
                cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
     
                 
             break;  
           }
           
           case 4:
           {
                cout<<"\n\n\t\t______|Thukpa_Soup Rs.169/Only|_______\n\n";
                cout<<"How many Quantity You Want To Buy:";
                cin>>multi;
                cout<<" Quantity :";
                cin>>qty;
                int price=multi*Thukpa_Soup;
                int gst=(price/100)*18;
                int total=price+gst;
         
                cout<<"\n\n\t\t\t______|BILL|______\n\n";
                cout<<"The Price Of Thukpa Soup Are:"<<price<<endl;
                cout<<"The 15%  gst:"<<gst<<endl;
                cout<<"The Total Amount Is:"<<total<<endl;
                cout<<"\n\n\t\t\t_______THANK YOU!!_____";
                
               break;
               
           }
           
           case 5:
           {
                 cout<<"\n\n\t\t______|Hot_And_Source_Soup Rs.195/Only|_______\n\n";
                 cout<<"How many Quantity You Want To Buy:";
                 cin>>multi;
                 cout<<" Quantity :";
                 cin>>qty;
                 int price=multi*Hot_And_Source_Soup;
                 int gst=(price/100)*18;
                 int total=price+gst;
         
                  cout<<"\n\n\t\t\t______|BILL|______\n\n";
                 cout<<"The Price Of Hot And Source Soup Are:"<<price<<endl;
                 cout<<"The 15%  gst:"<<gst<<endl;
                 cout<<"The Total Amount Is:"<<total<<endl;
                  cout<<"\n\n\t\t\t_______THANK YOU!!_____";   
               
               break;
               
           }
       }
      
}     
     
void BURGER(int odr)
{
     int choice4,Tikki_Burger=195,Zinger_Burger=215,Classic_Burger=165,Onion_Burger=495,Red_Hot_Burger=725;
  
     cout<<"\t\t<<<<<<<<<--------------BURGER----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Tikki Burger.........  Rs:195"<<endl;
     cout<<"\t\t\t 2.Zinger Burger.........  Rs:215"<<endl;
     cout<<"\t\t\t 3.Classic Burger............  Rs:165"<<endl;
     cout<<"\t\t\t 4.Onion Burger...........  Rs:495"<<endl;
     cout<<"\t\t\t 5.Red Hot Burger.........  Rs:725"<<endl;
     
       cout<<"Enter Your choice:";
       cin>>choice4;
       
    switch(choice4)
    {
        case 1:
        
        {   
         cout<<"\n\n\t\t______|Tikki Burger Rs.195/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Tikki_Burger;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Tikki Burger Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;
        
        }
        
        
        case 2:
        
        {
         cout<<"\n\n\t\t______|Zinger Burger Rs.215/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Zinger_Burger;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Zinger Burger Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";   
                 
        break;
        }
           
        case 3:
        
        {
         cout<<"\n\n\t\t______|Classic Burger Rs.165/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Classic_Burger;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Classic Burger Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
     
                 
        break;  
        }
           
        case 4:
           
        {
         cout<<"\n\n\t\t______|Onion Burger Rs.495/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Onion_Burger;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Onion Burger Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
                
        break;
               
        }
           
        case 5:
        
        {
         cout<<"\n\n\t\t______|Red Hot Burger Rs.725/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Red_Hot_Burger;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Red Hot Burger Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";       
               
        break;
               
        }
       }
      
}     
 

void SWEET(int odr)
{
    int choice5,Gulab_jamun=100,Kaju_Katri=195,Rasgulla=295,Rabri=155,Rasmalai=315;
     cout<<"\t\t<<<<<<<<<--------------SWEET----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Gulab jamun.........  Rs:100"<<endl;
     cout<<"\t\t\t 2.Kaju Katri.........  Rs:195"<<endl;
     cout<<"\t\t\t 3.Rasgulla............  Rs:295"<<endl;
     cout<<"\t\t\t 4.Rabri...........  Rs:155"<<endl;
     cout<<"\t\t\t 5.Rasmalai.........  Rs:315"<<endl;
  
  
        cout<<"Enter Your choice:";
        cin>>choice5;
    switch(choice5)
    {
        case 1:
        
        {   
         cout<<"\n\n\t\t______|Gulab jamun Rs.100/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Gulab_jamun;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Gulab jamun Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;
        
        }
        
        
        case 2:
        
        {
         cout<<"\n\n\t\t______|Kaju Katri Rs.195/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Kaju_Katri;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Kaju Katri Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
         
        break;
        }
           
        case 3:
        
        {
         
         cout<<"\n\n\t\t______|Rasgulla Rs.295/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Rasgulla;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Rasgulla Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
         
                 
        break;  
        }
           
        case 4:
           
        {
         cout<<"\n\n\t\t______|Rabri Rs.155/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Rabri;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Rabri Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
        
        break;
               
        }
           
        case 5:
        
        {
         cout<<"\n\n\t\t______|Rasmalai Rs.315/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Rasmalai;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Rasmalai Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
                
               
        break;
               
        }
       }
      
}     
    
void GUJRATI_THALI(int odr)
{
    int choice6,Fulka_Roti=30,Undhiyu=200,Dal_Fry=100,Kadhi_Khichadi=150,Rotala=50;
     cout<<"\t\t<<<<<<<<<--------------GUJRATI THALI----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Fulka Roti.........  Rs:30"<<endl;
     cout<<"\t\t\t 2.Undhiyu.........  Rs:200"<<endl;
     cout<<"\t\t\t 3.Dal fry............  Rs:100"<<endl;
     cout<<"\t\t\t 4.Kadhi Khichadi...........  Rs:150"<<endl;
     cout<<"\t\t\t 5.Rotla.........  Rs:50";
     
        cout<<"Enter Your choice:";
        cin>>choice6;
    switch(choice6)
    {
        case 1:
        
        {   
         cout<<"\n\n\t\t______|Fulka Roti Rs.30/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Fulka_Roti;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Fulka Roti Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
        break;
        
        }
        
        
        case 2:
        
        {
         cout<<"\n\n\t\t______|Undhiyu Rs.200/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Undhiyu;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Undhiyu Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;
        }
           
        case 3:
        
        {
         cout<<"\n\n\t\t______|Dal_Fry Rs.100/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Dal_Fry;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Dal Fry Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
            
         
                 
        break;  
        }
           
        case 4:
           
        {
        cout<<"\n\n\t\t______|Kadhi Khichadi Rs.150/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Kadhi_Khichadi;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Kadhi Khichadi Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         
        break;
               
        }
           
        case 5:
        
        {
         cout<<"\n\n\t\t______|Rotala Rs.50/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Rotala;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Rotala:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
         
                
               
        break;
               
        }
       }
      }         
     
     
void PANJABI_THALI(int odr)
{
   
    int choice7,Kaju_Curry=80,Panner_Tikka=100,Cholle=40,Rajma=50,Dal_Malai_KA_Tadka=60;
     cout<<"\t\t<<<<<<<<<--------------PANJABI THALI----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Kaju Curry.........  Rs:80"<<endl;
     cout<<"\t\t\t 2.Panner Tikka.........  Rs:100"<<endl;
     cout<<"\t\t\t 3.Cholle............  Rs:40"<<endl;
     cout<<"\t\t\t 4.Rajma...........  Rs:50"<<endl;
     cout<<"\t\t\t 5.Dal Malai Ka Tadkax.........  Rs:60"<<endl;
     
        cout<<"Enter Your choice:";
        cin>>choice7;
          switch(choice7)
    {
        case 1:
        
        { 
         cout<<"\n\n\t\t______|Kaju Curry Rs.80/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Kaju_Curry;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Kaju Curry Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;
        
        }
        
        
        case 2:
        
        {
         cout<<"\n\n\t\t______|Panner Tikka Rs.100/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Panner_Tikka;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Panner Tikka Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
         
         
        break;
        }
           
        case 3:
        
        {
         cout<<"\n\n\t\t______|Cholle Rs.40/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Cholle;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Cholle Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
         
            
         
                 
        break;  
        }
           
        case 4:
           
        {
         cout<<"\n\n\t\t______|Rajma Rs.50/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Rajma;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Rajma Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
        
         
        break;
               
        }
           
        case 5:
        
        {
         cout<<"\n\n\t\t______|Dal Malai KA Tadka Rs.60/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Dal_Malai_KA_Tadka;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Dal Malai KA Tadka Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
          
         
                
               
        break;
               
        }
       }
      }         
     
void DOSA(int odr)
{
    
    int choice8,plain_Dosa=70,Masala_Dosa=115,Onion_Dosa,Garlic_Masala_Dosa=200,Panner_Dosa=120;
     cout<<"\t\t<<<<<<<<<--------------DOSA----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.plain Dosa.........  Rs:70"<<endl;
     cout<<"\t\t\t 2.Masala Dosa.........  Rs:115"<<endl;
     cout<<"\t\t\t 3.Onion Dosa............  Rs:150"<<endl;
     cout<<"\t\t\t 4.Garlic Masala Dosa...........  Rs:200"<<endl;
     cout<<"\t\t\t 5.Panner Dosa.........  Rs:120"<<endl;
     
        cout<<"Enter Your choice:";
        cin>>choice8;
        
        switch(choice8)
    {
        case 1:
        
        { 
         cout<<"\n\n\t\t______|plain_Dosa Rs.70/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*plain_Dosa;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of plain Dosa Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
         
         
        break;
        
        }
        
        
        case 2:
        
        {
         cout<<"\n\n\t\t______|Masala_Dosa Rs.115/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Masala_Dosa;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Masala_Dosa Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
             
         
         
        break;
        }
           
        case 3:
        
        {
         cout<<"\n\n\t\t______|Onion_Dosa Rs.150/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Onion_Dosa;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Onion_Dosa Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
         
         
                 
        break;  
        }
           
        case 4:
           
        {
         cout<<"\n\n\t\t______|Garlic Masala Dosa Rs.200/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Garlic_Masala_Dosa;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Garlic Masala Dosa Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
        
         
        break;
               
        }
           
        case 5:
        
        {
         cout<<"\n\n\t\t______|Panner Dosa Rs.100/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Panner_Dosa;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Panner_Dosa Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         break;
               
        }
       }
      }         
     
void BEVERAGES(int odr)
{
    
    int choice9,Straweberry_Ice_Tea=20,Orange_Blush=25,Fresh_Lime=25,Coke=30,Sprite=30;
   
     cout<<"\t\t<<<<<<<<<--------------BEVERAGES----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Straweberry Ice Tea.........  Rs:20"<<endl;
     cout<<"\t\t\t 2.Orange Blush.........  Rs:25"<<endl;
     cout<<"\t\t\t 3.Fresh Lime............  Rs:25"<<endl;
     cout<<"\t\t\t 4.Coke...........  Rs:30"<<endl;
     cout<<"\t\t\t 5.Sprite.........  Rs:30"<<endl;
     
        cout<<"Enter Your choice:";
        cin>>choice9;
    
     switch(choice9)
    {
        case 1:
        
        {
         cout<<"\n\n\t\t______|Straweberry Ice TEa Rs.20/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Straweberry_Ice_Tea;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Straweberry Ice Tea Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
           
         break;
        
        }
        
       case 2:
        
        {
            
         cout<<"\n\n\t\t______|Orange Blush Rs.25/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Orange_Blush;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Orange_Blush Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";  
         
         break;
        }
           
        case 3:
        
        {
         
         cout<<"\n\n\t\t______|Fresh_Lime Rs.25/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Fresh_Lime;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Fresh_Lime Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____"; 
         
        break;  
        }
           
        case 4:
           
        {
        
         cout<<"\n\n\t\t______|Coke Rs.30/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Coke;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Coke Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;
               
        }
           
        case 5:
        
        {
         cout<<"\n\n\t\t______|Sprite Rs.30/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Sprite;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Sprite Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         break;
               
        }
       }
      }             

void FRENKIE(int odr)
{
     int choice10,Veg_Frenkie=50,Cheese_Frenkie=60,Schewan_Chesse_Frankie=80,Coktail_Freankie=100,Noddles_Chesse_Frankie=80; 
     cout<<"\t\t<<<<<<<<<--------------FRENKIE----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Veg Frenkie.........  Rs:50"<<endl;
     cout<<"\t\t\t 2.Chesse Frenkie.........  Rs:60"<<endl;
     cout<<"\t\t\t 3.Schewan Chesse Frenkie............  Rs:80"<<endl;
     cout<<"\t\t\t 4.Coktail Frenkie...........  Rs:100"<<endl;
     cout<<"\t\t\t 5.Noddles Chesse Frenkie.........  Rs:80"<<endl;
     
         
         cout<<"Enter Your choice:";
         cin>>choice10; 
         
        switch(choice10)
    {
        case 1:
        
        {
         cout<<"\n\n\t\t______|Veg Frenkie Rs.50/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Veg_Frenkie;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Veg Frenkie Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";   
           
         break;
        
        }
        
       case 2:
        
        {
         cout<<"\n\n\t\t______|Cheese Frenkie Rs.60/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Cheese_Frenkie;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Cheese Frenkie Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";    
         
         
         break;
        }
           
        case 3:
        
        {
         
         cout<<"\n\n\t\t______|Schewan Chesse Frankie Rs.80/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Schewan_Chesse_Frankie;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Schewan Chesse Frankie Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";  
         
        break;  
        }
           
        case 4:
           
        {
         cout<<"\n\n\t\t______|Coktail Freankie Rs.100/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Coktail_Freankie;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price O Coktail Freankie Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         
        break;
               
        }
           
        case 5:
        
        {
         
         cout<<"\n\n\t\t______|Noddles Chesse Frankie Rs.80/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Noddles_Chesse_Frankie;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Noddles_Chesse_Frankie Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         break;
               
        }
       }
      }   
      
    
 void PANIPURI(int odr)
{
    int choice11,Pani_puri=20,Sev_Puri=20,Bhel_Puri=20,Raggdha_Puri=20,Dahi_puri=30;
 
     cout<<"\t\t<<<<<<<<<--------------PANIPURI----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Pani Puri.........  Rs:20"<<endl;
     cout<<"\t\t\t 2.Sev Puri.........  Rs:20"<<endl;
     cout<<"\t\t\t 3.Bhel Puri............  Rs:20"<<endl;
     cout<<"\t\t\t 4.Raggdha Puri...........  Rs:20"<<endl;
     cout<<"\t\t\t 5.Dahi Puri.........  Rs:30"<<endl;
       
       
        
         cout<<"Enter Your choice:";
         cin>>choice11; 
        
        switch(choice11)
    {
        case 1:
        
        {
        
         cout<<"\n\n\t\t______|Pani puri Rs.20/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Pani_puri;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Pani_puri Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         break;
        
        }
        
       case 2:
        
        {
            
         cout<<"\n\n\t\t______|Sev Puri Rs.20/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Sev_Puri;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Sev Puri Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____"; 
         
         break;
        }
           
        case 3:
        
        {
         
         cout<<"\n\n\t\t______|Bhel Puri Rs.20/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Bhel_Puri;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Bhel Puri Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;  
        }
           
        case 4:
           
        {
        
         cout<<"\n\n\t\t______|Raggdha Puri Rs.20/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Raggdha_Puri;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Raggdha Puri Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;
               
        }
           
        case 5:
        
        {
         
         cout<<"\n\n\t\t______|Dahi puri Rs.30/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Dahi_puri;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Dahi puri Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         break;
               
        }
       }
      }             
       
void ICECREAM(int odr)
{
      
    
    int choice12,Vanilla=50,Chocolate=30,Straweberry=20,Raspberry=45,Lemon=10;
     cout<<"\t\t<<<<<<<<<-------------------ICECREAM------------>>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Vanilla.........  Rs:50"<<endl;
     cout<<"\t\t\t 2.Chocolate.........  Rs:30"<<endl;
     cout<<"\t\t\t 3.Straweberry............  Rs:20"<<endl;
     cout<<"\t\t\t 4.Raspberry...........  Rs:45"<<endl;
     cout<<"\t\t\t 5.Lemon.........  Rs:10"<<endl;
     
     cout<<"Enter Your choice:";
     cin>>choice12;
     
      switch(choice12)
    {
        case 1:
        
        {
            
         cout<<"\n\n\t\t______|Vanilla Rs.50/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Vanilla;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Vanilla Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         break;
        
        }
        
       case 2:
        
        {
            
         cout<<"\n\n\t\t______|Chocolate Rs.30/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Chocolate;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Chocolate Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         break;
        }
           
        case 3:
        
        {
         
         cout<<"\n\n\t\t______|Straweberry Rs.20/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Straweberry;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Straweberry Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____"; 
         
        break;  
        }
           
        case 4:
           
        {
        
         cout<<"\n\n\t\t______|Raspberry Rs.45/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Raspberry;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Raspberry Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;
               
        }
           
        case 5:
        
        {
        
         cout<<"\n\n\t\t______|Dahi puri Rs.10/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Lemon;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Lemon Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         break;
               
        }
       }
      }             
 
void FAST_FOOD(int odr)
{
    
    
    int choice13,Dabeli=25,Cheese_Vadapav=50,Hotdog=40,Timepass=45,Mayopav=60,Garilled_cheese_sandwich=123;

     cout<<"\t\t<<<<<<<<<--------------FAST FOOD----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Dabeli.........  Rs:25"<<endl;
     cout<<"\t\t\t 2.Cheese Vadapav.........  Rs:50"<<endl;
     cout<<"\t\t\t 3.Hotdog............  Rs:40"<<endl;
     cout<<"\t\t\t 4.Timepass...........  Rs:45"<<endl;
     cout<<"\t\t\t 5.Mayopav.........  Rs:60"<<endl;
     cout<<"\t\t\t 6.Grilled cheese sandwich.........  Rs:120"<<endl;

     
       cout<<"Enter Your choice:";
       cin>>choice13;
       
        switch(choice13)
    {
        case 1:
        
        {
         
          cout<<"\n\n\t\t______|Dabeli Rs.25/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Dabeli;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Dabeli Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         break;
        
        }
        
       case 2:
        
        {
            
         cout<<"\n\n\t\t______|Cheese Vadapav Rs.50/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Cheese_Vadapav;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Cheese Vadapav Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         break;
        }
           
        case 3:
        
        {
         
         cout<<"\n\n\t\t______|Hotdog Rs.40/Only|_______\n\n";
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Hotdog;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Hotdog Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;  
        }
           
        case 4:
           
        {
        
         cout<<"\n\n\t\t______|Timepass Rs.45/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Timepass;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Timepass Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
        break;
               
        }
           
        case 5:
        
        {
       
          cout<<"\n\n\t\t______|Mayopav Rs.60/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Mayopav;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Margherita Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         break;
               
        }
        case 6:
        
        {
            
         cout<<"\n\n\t\t______|Garilled cheese sandwich Rs.120/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Garilled_cheese_sandwich;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Garilled cheese sandwich Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____"; 
         
        break;
        
        }
       }
      }             
       
    
void SUBHA_KI_SURUAAT(int odr)
{
        int choice14,Tea=15,Coffe=20,Cold_Coffee=25,Milk=20,Bornvita_Milk=25;
   
     cout<<"\t\t<<<<<<<<<--------------SUBHA KI SURUAAT----------------->>>>>>>>>>>>"<<endl;
     cout<<"\t\t\t 1.Tea.........  Rs:15"<<endl;
     cout<<"\t\t\t 2.Coffe.........  Rs:20"<<endl;
     cout<<"\t\t\t 3.Cold Coffee............  Rs:25"<<endl;
     cout<<"\t\t\t 4.Milk...........  Rs:20"<<endl;
     cout<<"\t\t\t 5.Bornvita Milk.........  Rs:25"<<endl;
     
       cout<<"Enter Your choice:";
       cin>>choice14;
     
        switch(choice14)
    {
        case 1:
        
        {
          
         cout<<"\n\n\t\t______|Tea Rs.15/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Tea;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Tea Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
         break;
        
        }
        
       case 2:
        
        {
            
         cout<<"\n\n\t\t______|Coffe Rs.20/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Coffe;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Coffe Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";  
         
         break;
        }
           
        case 3:
        
        {
         
          cout<<"\n\n\t\t______|Cold Coffee Rs.25/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Cold_Coffee;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Cold Coffee Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;  
        }
           
        case 4:
           
        {
        
         cout<<"\n\n\t\t______|Milk Rs.20/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Milk;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Milk Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
         
        break;
               
        }
           
        case 5:
        
        {
        
         cout<<"\n\n\t\t______|Bornvita Milk Rs.25/Only|_______\n\n";
         
         cout<<"How many Quantity You Want To Buy:";
         cin>>multi;
         cout<<" Quantity :";
         cin>>qty;
         int price=multi*Bornvita_Milk;
         int gst=(price/100)*18;
         int total=price+gst;
         
         cout<<"\n\n\t\t\t______|BILL|______\n\n";
         cout<<"The Price Of Bornvita Milk Are:"<<price<<endl;
         cout<<"The 15%  gst:"<<gst<<endl;
         cout<<"The Total Amount Is:"<<total<<endl;
         cout<<"\n\n\t\t\t_______THANK YOU!!_____";
        
         break;
               
        }
       }
      }
};
      

int main()
{
    int order;
    int choice;
    int pnumber;
    char name[10];
    int myod;
    hotel od;
    
    cout<<"\t\t**---------------------WELCOME TO KHANA KHAJANA RESTURENT---------------*";
    cout<<"\n\n\n";
    
    cout<<"\t\t<<<---------------------------------MENU----------------------------------->>> "<<endl;

    
   
    cout<<"\n\t\t1. PIZZA";
    cout<<"\n\t\t2. CHIENISE";
    cout<<"\n\t\t3. SOUP";
    cout<<"\n\t\t4. BURGUER";
    cout<<"\n\t\t5. SWEET";
    cout<<"\n\t\t6. GUJRATI_THALI";
    cout<<"\n\t\t7. PANJABI_THALI";
    cout<<"\n\t\t8. DOSA";
    cout<<"\n\t\t9. BEVERAGES";
    cout<<"\n\t\t10. FRENKIE";
    cout<<"\n\t\t11. PANIPURI";
    cout<<"\n\t\t12. ICECREAM";
    cout<<"\n\t\t13. FAST_FOOD";
    cout<<"\n\t\t14. SUBHA_KI_SURUAAT"<<endl;
    cout<<"\n\n\n";
    cout<<"-------------------------ORDER PLEASE!!!!--------------------------------"<<endl;
    cout<<"\n\n";

    cout<<"Enter your name:";
    cin>>name;
    cout<<"\n";
    cout<<"Enter your Phone NO:";
    cin>>pnumber;
    cout<<"\n";
    cout<<"Enter your order:";
    cin>>order;
    cout<<"\n";
   
    switch(order)
    {
    case 1:
     {
         od.PIZZA(myod);
          break;
     }
    case 2:
    {
          od.CHIENISE(myod);
          break;

    }
  case 3:
   {
          od.SOUP(myod);
          break;
   }
    case 4:
   {
          od.BURGER(myod);
          break;
   }
    case 5:
  {

          od.SWEET(myod);
          break;

  }
    case 6:
    {
          od.GUJRATI_THALI(myod);
          break;
    }
    case 7:
    {
          od.PANJABI_THALI(myod);
          break;
    }
    case 8:
    {
          od.DOSA(myod);
          break;
    }
  case 9:
    {
        
          od.BEVERAGES(myod);
          break;
    }
  case 10:
    {
          od.FRENKIE(myod);
          break;
    }
    case 11:
    {
          od.PANIPURI(myod);
          break;
    }
    case 12:
    {
          od.ICECREAM(myod);
          break;
    }
    case 13:
   {
          od.FAST_FOOD(myod);
          break;
   }
    case 14:
   {
          od.SUBHA_KI_SURUAAT(myod);
          break;
   }
    default:
    cout<<"thank you";
     }
    return 0;
}