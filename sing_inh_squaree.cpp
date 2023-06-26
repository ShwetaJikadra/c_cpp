#include<iostream>
using namespace std;
class a
{
   public:
      int n;
      void setdata()
      {
     cout<<"Enter value of n:"<<endl;
     cin>>n;
      }

   
      
};
class b:public a
{
   public :
       void getdata()
         {
            for(int i=1;i<=n;i++)
            {
                cout<<i*i<<endl;
            }
         }
};
int main()
{
    b b1;

cout<<"Square is ::"<<endl;
 b1.setdata();
  b1.getdata();
   
}