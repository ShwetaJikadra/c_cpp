#include<iostream>
using namespace std;
class Resto
{
    public:
       int p[10]={100,150,120,35,30,60,80,200,70,10};
       int o,n;
       float Total=0.0;
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
        cout<<"\t "<<p[i]<<"\t\t\t\t"<<itm[i]<<endl;
        cout<<"_______________________________"<<"|"<<"_________________________"<<endl;
    }
   }

   void order()
   {
     
   int n,


   }

};
int main()
{
   Resto r;
   r.getmenu();
   r.order();
}