#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
//#include<fstream.h>
using namespace std;
void getbill(int amt1,int a1)
{

  if(amt1>=500)
  {

    int dis=amt1*10/100;
    int gst=amt1*5/100;

    int net=amt1+gst-dis;

   cout<<"\n\n###########################  Bill #########################\n\n";
  cout<<"No_item  Total_amount  Disc  GSt   Net_price\n";
  cout<<a1<<"        "<<amt1<<"                   "<<dis<<"     "<<gst<<"        "<<net;
  cout<<"\n \n                        Thank you";

   /* fstream f;
    f.open("f3.txt",ios::out);

  f<<"\n\n###########################  Bill #########################\n\n";
  f<<"No_item  Total_amount  Disc  GSt   Net_price\n";
  f<<a1<<"        "<<amt1<<"                   "<<dis<<"     "<<gst<<"        "<<net;
  f<<"\n \n                        Thank you";
    f.close();*/
  }
}
int main()
{
  static int a=0,pp=0,gg=0,pt=0,gd=0,bb=0;



  int menu,c,i,q;
  int amt=0;
  
  while(1)
  {
	      cout<<"\n 1. continue";
	      cout<<"\n 2. Complete";
	      cout<<"\n 3. Exit";
	      cout<<"\n\nEnter Your Choice:";
	      cin>>c;
       switch(c)
       {
	  case 1:


	  cout<<"\n______________Menu____________";
	  cout<<"\n 1. pizza              140/-";
	  cout<<"\n 2. garlic bread       80/-";
	  cout<<"\n 3. gujarati dish      150/-";
	  cout<<"\n 4. panir Tika         120/-";
	  cout<<"\n 5. Burger             170/-;";
      cout<<"\n enter Your order No:";
      cin>>i;
    switch(i)
    {
       case 1:
	  cout<<"\n Item : Pizza";
	  cout<<"\n enter Qty:  ";
	  cin>>q;
	  a=a+q;
	  pp=pp+q;

	  amt=amt+(140*q);
	  q=0;
	  break;
	case 2:
	  cout<<"\n Item : Garlic Bread";
	  cout<<"\n enter Qty:  ";
	  cin>>q;
	  a=a+q;
	  gg=gg+q;
	  amt=amt+(80*q);
	  q=0;
	  break;
      case 3:
	  cout<<"\n Item : Gujarati Dish";
	  cout<<"\n enter Qty:  ";
	  cin>>q;
	  a=a+q;
	  gd=gd+q;
	  amt=amt+(150*q);
	  q=0;
	  break;
      case 4:
	  cout<<"\n Item : Paneer Tika";
	  cout<<"\n enter Qty:  ";
	  cin>>q;
	  a=a+q;
	  pt=pt+q;
	  amt=amt+(120*q);
	  q=0;
	  break;
       case 5:
	  cout<<"\n Item : burger";
	  cout<<"\n enter Qty:  ";
	  cin>>q;
	  a=a+q;
	  bb=bb+q;
	  amt=amt+(170*q);
	  q=0;
	  break;
       default:
	  cout<<"Your choice is wrong.....";
    }
    break;
    case 2:
      cout<<"Complete";
       cout<<"\n.......No. of Item..........\n";
       if(pp>0)
       {
       cout<<"\nPizza:        "<<pp;
       }
       if(gg>0)
       {
       cout<<"\nGarlic Bread: "<<gg;
       }
       if(gd>0)
       {
       cout<<"\nGujarati Dish:"<<gd;
       }
       if(pt>0)
       {
       cout<<"\nPaneer tikka: "<<pt;
       }
       if(bb>0)
       {
       cout<<"\nburger:       "<<bb;
       }

     /* fstream f;
       f.open("f3.txt",ios::out);
	    f<<"\n.......No. of Item..........\n";
       if(pp>0)
       {
       f<<"\nPizza:        "<<pp;
       }
       if(gg>0)
       {
       f<<"\nGarlic Bread: "<<gg;
       }
       if(gd>0)
       {
       f<<"\nGujarati Dish:"<<gd;
       }
       if(pt>0)
       {
       f<<"\nPaneer tikka: "<<pt;
       }
       if(bb>0)
       {
       f<<"\nburger:       "<<bb;
       }
       f.close(); */



	  getbill(amt,a);

      break;
   case 3:
	  exit(0);
   default:
	cout<<"\n Choice incorrect";
   }

 }

  
}
