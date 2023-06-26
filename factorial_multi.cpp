#include<iostream>
using namespace std;
class a
{
   public:
       b()
       {
        cout<<"factorial number finding......................."<<endl;
       }
};
class b:public a
{
    
        protected:
     int a1;
     public:
       void setdata()
       {
        cout<<"enter value of n:";
        cin>>a1;
       }
       
};
class c:public b{
    public:
    int ans=1;
      void getdata()
      {
          for(int i=1;i<=a1;i++)
          {
            ans=ans*i;
          }
          cout<<ans;
      }
};
int main()
{
    c c1;
    c1.setdata();
    c1.getdata();
}