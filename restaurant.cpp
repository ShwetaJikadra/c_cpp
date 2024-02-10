//if total is more than 600 then 10 percent discount on total
//5 percent GST...after the give discount.......................

#include<iostream>
#include<iomanip>

using namespace std;
int ordr_no,q=0;
float total=0;
static int qtn=0;
class Resto
{
    public:
     
       int p[10]={100,150,120,35,30,60,80,200,70,10};   //per Item Price
       int qn[10]={0,0,0,0,0,0,0,0,0,0};  //Quntity of per Item
      //All Item
       string itm[10]={"veg. manchuriam","hakka Nudles","paneer paratha","samosa Tukda","vada-pav","Ch. Fenki","Gujrati","Pizza","cheese sendwitch","masala pav"};
     
       float dis=0,gst;

       //For............................MENU..........................
   Resto()
   {
      cout<<"________________________________________________________________"<<endl;
      cout<<"\t\tWelCome To My Restaurant"<<endl;
   
    cout<<"_________________________________________________________________"<<endl;
    cout<<"\t ITEM \t\t\t\t Price"<<endl;
    cout<<"_______________________________"<<"|"<<"___________________________"<<endl<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"\t "<<i<<"\t"<<p[i]<<"\t\t\t\t"<<itm[i]<<endl;
        cout<<"_______________________________"<<"|"<<"_________________________"<<endl;
    }
   }
   //for Total ordered Quantity.....................
   static int Total_qty(int x)
   {
     qtn+=x;
     return qtn;
   }
   //to get order...............................
   void order()
   {
      cout<<"Enter Your Order Number :"<<endl;
      cin>>ordr_no;
      
      switch(ordr_no)
      {
         case 0:
         cout<<"Item :"<<itm[0]<<endl;
         cout<<"Price :"<<p[0]<<endl;
         cout<<"Enter Quantity:"<<endl;
         cin>>q;
         Total_qty(q);//total quantity
         qn[0]+=q;
         
         total+=(p[0]*q);
         break;
         case 1:
         cout<<"Item :"<<itm[1]<<endl;
         cout<<"Price :"<<p[1]<<endl;
         cout<<"Enter Quantity:"<<endl;

          cin>>q;
           Total_qty(q);
         qn[1]+=q;
         total+=(p[1]*q);
         break;
          case 2:
         cout<<"Item :"<<itm[2]<<endl;
         cout<<"Price :"<<p[2]<<endl;
         cout<<"Enter Quantity:"<<endl;
          cin>>q;
           Total_qty(q);
         qn[2]+=q;
         total+=(p[2]*q);
         break;
          case 3:
         cout<<"Item :"<<itm[3]<<endl;
         cout<<"Price :"<<p[3]<<endl;
         cout<<"Enter Quantity:"<<q<<endl;
          cin>>q;
           Total_qty(q);
         qn[3]+=q;
         total+=(p[3]*q);
         break;
          case 4:
         cout<<"Item :"<<itm[4]<<endl;
         cout<<"Price :"<<p[4]<<endl;
         cout<<"Enter Quantity:"<<endl;
          cin>>q;
           Total_qty(q);
         qn[4]+=q;
         total+=(p[4]*q);
         break;
          case 5:
         cout<<"Item :"<<itm[5]<<endl;
         cout<<"Price :"<<p[5]<<endl;
         cout<<"Enter Quantity:"<<endl;
       cin>>q;
        Total_qty(q);
         qn[5]+=q;
         total+=(p[5]*q);
         break;
          case 6:
         cout<<"Item :"<<itm[6]<<endl;
         cout<<"Price :"<<p[6]<<endl;
         cout<<"Enter Quantity:"<<endl;
          cin>>q;
           Total_qty(q);
         qn[6]+=q;
         total+=(p[6]*q);
         break;
          case 7:
         cout<<"Item :"<<itm[7]<<endl;
         cout<<"Price :"<<p[7]<<endl;
         cout<<"Enter Quantity:"<<endl;
          cin>>q;
           Total_qty(q);
         qn[7]+=q;
         total+=(p[7]*q);
         break;
          case 8:
         cout<<"Item :"<<itm[8]<<endl;
         cout<<"Price :"<<p[8]<<endl;
         cout<<"Enter Quantity:"<<q<<endl;
          cin>>q;
           Total_qty(q);
         qn[8]+=q;
         total+=(p[8]*q);
         break;
          case 9:
         cout<<"Item :"<<itm[9]<<endl;
         cout<<"Price :"<<p[9]<<endl;
         cout<<"Enter Quantity:"<<endl;
          cin>>q;
           Total_qty(q);
         qn[9]+=q;
         total+=(p[9]*q);
         break;
          
         default:
           cout<<"Your choice is wrong Please select (0-9):"<<endl;

      }
}


//Get the Bill of Your Order for Generate the  bill
void get_bill()
{
  
   if(total>=600)
   {
    dis=(total*10.0)/100;
   }
    gst=((total-dis)*5.0)/100;
   
    cout<<"ITEM"<<setw(20)<<"QTY"<<setw(10)<<"PRICE"<<setw(10)<<"TOTAL_PRICE"<<setw(10)<<endl;
    cout<<"____________________________________________________________________"<<endl;
   for(int i=0;i<10;i++)
   {
     
      if(qn[i]==0)
      {
        continue;
      }
      else
      {
       
       cout<<itm[i]<<setw(20)<<qn[i]<<setw(10)<<p[i]<<setw(10)<<p[i]*qn[i]<<endl;
      }
         
   }
   cout<<"_______________________________________________________________________________________"<<endl;
   cout<<"Total Quntity:"<<qtn<<endl<<"Total Amount :"<<total<<endl<<"Discount :"<<dis<<endl<<"GST(5%) :"<<gst<<endl<<"Net price :"<<total-dis+gst<<endl;
   cout<<"_______________________________________________________________________________________"<<endl;
}
   ~Resto()
   {
      
      cout<<endl<<"Thank You"<<endl;
   }
  
 };
int main()
{
   Resto r;
  char x;
  //Functionality for User 
  while(1)
  {
  cout<<"press y or Y for .... Continue"<<endl;
  cout<<"press n or N for .... Complete"<<endl;
  cout<<"press M or m for .... Menu List"<<endl;
  cout<<"press E or e for EXIT"<<endl;

  cout<<"You want to order continue ? :"<<endl;
  cin>>x;
  if(x=='y' || x=='Y')
  {
    r.order();
  }
  else if(x=='n' || x=='N')
  {
  
 
    r.get_bill();
   
    
  }
  else if(x=='m' || x=='M')
  {
    Resto();
  }
  else
  {
    exit(0);
  }
  

  }
}