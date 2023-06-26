#include<iostream>
#include<string.h>
using namespace std;
class Resto
{
     float g_t=0.0;
    
    float t,dis,gst,net_price;
    

    int t_i=0;
    
    public:
    Resto()
    {
        
        cout<<"***************************KRISHNA RESAURANT**************"<<endl<<endl;

        cout<<"************************** MENU **************************"<<endl<<endl<<endl;
        cout<<"Gujarati Dish"<<endl<<"*******************************************"<<endl<<endl;
        cout<<"\t   1.sev tameta...............40/-"<<endl;
        cout<<"\t   2.Dahi fry.................50/-"<<endl;
        cout<<"\t   3.Mung Dal.................45/-"<<endl;
        cout<<"\t   4.sev Kanda ...............130/-"<<endl;
        cout<<endl<<"panjabi Dish"<<endl<<"********************************************"<<endl<<endl;
        cout<<"\t   5.paneer tika..............150/-"<<endl;
        cout<<"\t   6.kaju panner..............170/-"<<endl;
        cout<<"\t   7.shahi panner.............140/-"<<endl;
        cout<<"\t   8.Matter panner............130/-"<<endl;
        cout<<endl<<"Chinise Dish"<<endl<<"********************************************"<<endl<<endl;
        cout<<"\t   9.Manchurium...............90/-"<<endl;
        cout<<"\t   10.Nudales..................80/-"<<endl;
        cout<<"\t   11.Grevy Manchurian.........100/-"<<endl;
        cout<<"\t   12.Hakka Nudles.............110/-"<<endl;
        cout<<"\t   13.Vegi. soup...............50/-";
        cout<<endl<<"Our Special"<<endl<<"********************************************"<<endl<<endl;
        cout<<"\t   14.veg. Biriyani...............100/-"<<endl;
        cout<<"\t   15.sev usal.....................70/-"<<endl<<endl;
    }

    void order()
      {
          
          
       
       
          
        
        
        
      }
     /* void cal_bill()
      {
            t=p*q;
            if(t>=300)
            {
                dis=t*20/100;
            }
            else{
                dis=0.0;
            }
            gst=t*5/100;
            net_price=t+gst-dis;

      }

     

      void getBill()
      {

            
         cout<<endl<<endl<<"Total Item ::->"<<t_i<<endl<<endl;
        cout<<"\n\n Pro_No      Pro_nm     Pro_qty    Pro_price   Dis   GST    Net price "<<endl;
        cout<<pno<<"        "<<nm<<"           "<<q<<"         "<<p<<"       "<<dis<<"        "<<gst<<"      "<<net_price;
         cout<<endl<<"__________________________________________________________________________________"<<endl<<endl;
         g_t+=net_price;
         cout<<"Grand total ::"<<g_t<<endl<<endl;

      }*/

      



};
int main()
{
    string unm,mob,nm;
    int n,i,q,id,pno;
    float p,t=0.0;
    
     cout<<"\n \n Enter Your name::"<<endl;
         cin>>unm;
         cout<<"\n Enter 10 digit Mobile no::"<<endl;
         cin>>mob;
         if(mob.size() !=10)
         {
         cout<<"\n Enter 10 digit Mobile no::"<<endl;
         cin>>mob;
         }
   
        cout<<"how many items you want to order ?";
        cin>>n;
       
       Resto r[n];

       for(int i=1;i<=n;i++)
       {
        cout<<"Item ::"<<i<<endl;
        cout<<"Enter your order Item No:";
        cin>>i;
        cout<<"enter Number of Quentity :";
        cin>>q;
       

       // t_i+=q;
        
        
            if(i==1)
            {
               pno=i;
               nm="sev tameta";
                p=40;
                t+=t+(p*q);

            }
            if(i==2)
            {   
                pno=i;
                nm="Dahi fry";
                p=50;
                  t+=t+(p*q);
            }
            if(i==3)
            {
                pno=i;
               nm="mung dal";
                p=45;
                  t+=t+(p*q);
            }
            if(i==4)
            {
                pno=i;
               nm="sev kanda";
                p=130;
                  t+=t+(p*q);
            }
            if(i==5)
            {
                pno=i;
               nm="panner tika";
                p=150;
                  t+=t+(p*q);
            }
            if(i==6)
            {
                pno=i;
                nm="kaju paneer";
                p=170;
                  t+=t+(p*q);
            }
            if(i==7)
            {
                pno=i;
                nm="shahi paneer";
                p=140;
                  t+=t+(p*q);
            }
            if(i==8)
            {
                pno=i;
                nm="matter paneer";
                p=130;
                  t+=t+(p*q);
            }
            if(i==9)
            {
                pno=i;
               nm="manchurium";
                p=90;
                  t+=t+(p*q);
            }
            if(i==10)
            {
                pno=i;
               nm="Nuduls";
                p=80;
                  t+=t+(p*q);
            }
            if(i==11)
            {
                pno=i;
                nm="G. manchurium";
                p=100;
                  t+=t+(p*q);
            }
            if(i==12)
            {
                pno=i;
                nm="Hakka nudules";
                p=110;
                  t+=t+(p*q);
            }
            if(i==13)
            {
                pno=i;
               nm="veg. soup";
                p=50;
                  t+=t+(p*q);
            }
            if(i==14)
            {
                pno=i;
                nm="veg. biriyani";

                p=100;
                  t+=t+(p*q);
            }
            if(i==15)
            {
                pno=i;
                nm="veg. Nudules";
                p=70;
                  t+=t+(p*q);
            }
                   
            cout<<pno<<endl;
            cout<<nm<<endl;
            cout<<p<<endl;
            cout<<p*q<<endl;
            cout<<"-------------------------"<<endl;
           
           
            
    
       }     
        cout<<t<<endl;
                    
       
   
}