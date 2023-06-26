#include<iostream>
using namespace std;
class base
{
    protected:
      int a;
      public:
      void setA(int x)
      {
        a=x;
      }
};
class xyz : public base{
    protected:
      int b;
      public:
         void setB(int y)
         {
            b=y;
         }
};
class abc:public xyz{
    public:
       void getdata()
       {
        cout<<"Myultiplication of a and b :"<<a*b<<endl;

       }
};
int main()
{
    abc a1;
    a1.setA(10);
    a1.setB(20);
    a1.getdata();
}