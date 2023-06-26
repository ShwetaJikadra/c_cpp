#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class Resto
{
     float g_t=0.0;
    string nm;
    float p,t,dis,gst,net_price;
    

    int q,i,pno ,t_i=0;
    
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
          
          
       cout<<"Enter your order Item No:";
        cin>>i;
        cout<<"enter Number of Quentity :";
        cin>>q;
        t_i+=q;
        
        
            if(i==1)
            {
               pno=i;
               nm="sev tameta";
                p=40;

            }
            if(i==2)
            {   
                pno=i;
                nm="Dahi fry";
                p=50;
            }
            if(i==3)
            {
                pno=i;
               nm="mung dal";
                p=45;
            }
            if(i==4)
            {
                pno=i;
               nm="sev kanda";
                p=130;
            }
            if(i==5)
            {
                pno=i;
               nm="panner tika";
                p=150;
            }
            if(i==6)
            {
                pno=i;
                nm="kaju paneer";
                p=170;
            }
            if(i==7)
            {
                pno=i;
                nm="shahi paneer";
                p=140;
            }
            if(i==8)
            {
                pno=i;
                nm="matter paneer";
                p=130;
            }
            if(i==9)
            {
                pno=i;
               nm="manchurium";
                p=90;
            }
            if(i==10)
            {
                pno=i;
               nm="Nuduls";
                p=80;
            }
            if(i==11)
            {
                pno=i;
                nm="G. manchurium";
                p=100;
            }
            if(i==12)
            {
                pno=i;
                nm="Hakka nudules";
                p=110;
            }
            if(i==13)
            {
                pno=i;
               nm="veg. soup";
                p=50;
            }
            if(i==14)
            {
                pno=i;
                nm="veg. biriyani";

                p=100;
            }
            if(i==15)
            {
                pno=i;
                nm="veg. Nudules";
                p=70;
            }
          
        
        
        
      }
      void cal_bill()
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

             ofstream f("filename6.txt",std::ios::app);

        
       
        f<<endl<<pno<<"\t"<<nm<<"\t\t\t"<<q<<"\t"<<p<<"\t\t"<<dis<<"\t\t"<<gst<<"\t\t"<<net_price;
        
         g_t+=net_price;
      
                  
                   f.close();

      }
      void grand_total()
      {
        ofstream f("filename6.txt",std::ios::app);
         f<<endl<<"__________________________________________________________________________________"<<endl<<endl;
           f<<"Grand total ::"<<g_t<<endl<<endl;
           f.close();
      }

      void total_itm()
      {
        ofstream f("filename6.txt",std::ios::app);
         f<<endl<<endl<<"Total Item ::->"<<t_i<<endl<<endl;
          f.close();
      }


~Resto()
{

       ifstream myfile;
       myfile.open("filename6.txt");
       string myline;
         if(myfile.is_open()) 
         {
              while ( myfile ) { 
                       getline (myfile, myline);
                       cout << myline << '\n';
                               }                       
        }
}

};
int main()
{
    Resto r;
    int n;
    string unm,mob;

       ofstream f("filename6.txt",std::ios::app);
         f<<"\n\n Pro_No\tPro_nm\t\t\tPro_qty\tPro_price\t\tDis\tGST\tNet_price "<<endl;
f.close();
     cout<<"\n \n Enter Your name::"<<endl;
         cin>>unm;
         cout<<"\n Enter 10 digit Mobile no::"<<endl;
         cin>>mob;
         if(mob.size() !=10)
         {
         cout<<"\n Enter 10 digit Mobile no::"<<endl;
         cin>>mob;
         }
     cout<<"enter how many item :"<<endl;
     cin>>n;
     
         
              for ( int i = 1; i <=n; i++)
              {
                
                r.order();  

                r.cal_bill();
                r.getBill();
              }
              r.total_itm();
              r.grand_total();
              
                
              
    
              
                    
       
   
}