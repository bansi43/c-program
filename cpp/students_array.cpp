 #include<iostream>
 using namespace std;

 class students
 {
    int id;
     char name[10];
    int s1,s2,s3;
    float per;
    int total;
   

    public:
    void adddata()

    {
        int i;
        cout<<"enter the id:";
        cin>>id;
        cout<<"enter the name:";
        cin>>name;
        
        cout<<"enter the marks:"<<endl;
        cin>>s1>>s2>>s3;
        total=s1+s2+s3;
        per=total*100/300;
 
    }
    void print()
    {
       
        cout<<"value of id:"<<id<<endl;
        cout<<"value of name:"<<name<<endl;
        cout<<"value of marks:"<<s1<<s2<<s3<<endl;
        cout<<"value of total:"<<total<<endl;
        cout<<"value of per:"<<per<<endl;


    }
 };
 int main()
 {
    students x[3];
    for(int i=0;i<3;i++)
    {
        x[i].adddata();
    }
    for(int i=0;i<3;i++)
    {
        x[i].print();
    }
 }