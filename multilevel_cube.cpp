#include<iostream>
using namespace std;
class a
{
   public:
       a()
       {
        cout<<"Cube of :"<<endl;
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
      void getdata()
      {
          for(int i=1;i<=a1;i++)
          {
            cout<<i*i*i<<endl;
          }
      }
};
int main()
{
    c c1;
    c1.setdata();
    c1.getdata();
}