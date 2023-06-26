#include<iostream>
using namespace std;

class bank
{
    public:
      
 void bank1()
    {
       cout<<"**************** WELCOME TO THE BANKING SYSTEM *************"<<endl;


    }  
};
class saving:public bank
{
    public:
    int sc;
    float s_bal=1000;
    float s_d;
    float s_w;
   
    void saving1()
    {
        cout<<"\t\t\t****************** SAVING ACCOUNT ******************\t\t\t\t"<<endl;
        while(1)
        {
        cout<<"1.  Deposite Money"<<endl;
        cout<<"2.  Withdrow Money "<<endl;
        cout<<"3.  Check Balance"<<endl;
        cout<<"4.   Exit"<<endl;
        cout<<"\nEnter Your Choice ::";
        cin>>sc;

        switch (sc)
        {
        case 1:
        cout<<"Enter Money for Deposite :"<<endl;
        cin>>s_d;
           s_bal+=s_d;
            break;
        case 2:
           cout<<"Enter Money for Withdrow :"<<endl;
           cin>>s_w;
           if(s_w>s_bal)
           {
              cout<<"Insufficient Balance in your account.............."<<endl;
           }
           else
           {
           s_bal-=s_w;
           }
            break;
           
        case 3:
             cout<<"Balance is :" <<s_bal<<endl;
             break;
        case 4:
              cout<<"Thanks You for visit"<<endl;
             exit(0);
        default:
           cout<<"Your choice is wrong...............";
            break;
        }
    }
    }
    
};
class Current: public bank
{
    public:
    int cc;
    float c_bal=20000;
   float c_d;
    float c_w;
    
    void Current1()
    {
        cout<<"\t\t\t****************** CURRENT ACCOUNT ******************\t\t\t\t"<<endl;
        while(1)
        {
            
        cout<<"1.  Deposite Money"<<endl;
        cout<<"2.  Withdrow Money "<<endl;
        cout<<"3.  Check Balance"<<endl;
        cout<<"4.  Exit"<<endl;
        cout<<"\t\t\tEnter Your Choice ::";
        cin>>cc;

        switch (cc)
        {
        case 1:
        cout<<"Enter Money for Deposite :"<<endl;
        cin>>c_d;
           c_bal+=c_d;
            break;
        case 2:
           cout<<"Enter Money for Withdrow :"<<endl;
           cin>>c_w;
            if(c_w>c_bal)
           {
              cout<<"Insufficient Balance in your account.............."<<endl;
           }
           else
           {
           c_bal-=c_w;
           }
            break;
        case 3:
             cout<<"Balance is :" <<c_bal<<endl;
             break;
        case 4:
             cout<<"Thanks You for visit"<<endl;
             exit(0); 
        default:
           cout<<"Your choice is wrong..............."<<endl;
            break;
        }
        }
    }
    
};
int main()
{
    saving s1;
    Current c1;
   int c;

 cout<<"1.  Current Accont"<<endl;  
 cout<<"2.  Saving Account"<<endl<<endl;  
cout<<"\nEnter your choice"<<endl;
cin>>c;
    
   if(c==1)
    {
        c1.bank1();
        c1.Current1();
    }  
    else if(c==2)
    {
         s1.bank1();
         s1.saving1();
    }
    else
    {
       cout<<"Your choice is wrong..........."<<endl;
    }

}
    
  
   
    
    


    
