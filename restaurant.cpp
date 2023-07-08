#include<iostream>
using namespace std;
int no,q,ti=0;
class Resto
{
    public:
       int p[10]={100,150,120,35,30,60,80,200,70,10};
      
       string itm[10]={"veg. manchuriam","hakka Nudles","paneer paratha","samosa Tukda","vada-pav","Ch. Fenki","Gujrati","Pizza","cheese sendwitch","masala pav"};
   Resto()
   {
      cout<<"________________________________________________________________"<<endl;
      cout<<"\t\tWelCome To My Restaurant"<<endl;
   }   
   void getmenu()
   {
    cout<<"_________________________________________________________________"<<endl;
    cout<<"\t ITEM \t\t\t\t Price"<<endl;
    cout<<"_______________________________"<<"|"<<"___________________________"<<endl<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"\t "<<i<<"\t"<<p[i]<<"\t\t\t\t"<<itm[i]<<endl;
        cout<<"_______________________________"<<"|"<<"_________________________"<<endl;
    }
   }
   order()
   {
      int yn;
      
      cout<<"\nEnter Your order Number :";
      cin>>no;
      
      cout<<"\nEnter Quentity :";
      cin>>q;
      ti++;
    for(i=0;i<=100;i++)
   {
      cout<<"\n1. yes";
      cout<<"\n2. No";
      cout<<"\nIf you want to other order ?";
      cin>>yn;
      
      if(yn==1)
      {
      cout<<"\nEnter Your order Number :";
      cin>>no;
      
      cout<<"\nEnter Quentity :";
      cin>>q;
      ti++;
      }
      else
      {
         cout<<"\n\n***************Thanks for order*******************\n\n";
         break;
      }
   }



   }
   int getprice()
   {
     
   }

   

};
int main()
{
   Resto r;
   r.getmenu();
   r.order();
}