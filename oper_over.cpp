#include<iostream>
using namespace std;

class Box
{

    int l,w,h;
    public:
      void setdata(int a,int b,int c)
      {
        l=a,w=b,h=c;
      }
      int getdata()
      {
        return l*w*h;
      }
      Box operator +(Box n)
      {
        Box t;
        t.l=l+n.l;
        t.w=w+n.w;
        t.h=h+n.h;
        return t;
      }
};
int main()
{
    Box a1,b1,c1;
    a1.setdata(2,2,2);
    cout<<"value of A :"<<a1.getdata()<<endl;
    b1.setdata(3,3,3);
    cout<<"value of B:"<<b1.getdata()<<endl;
    c1=a1+b1;
    
    cout<<"value of C :"<<c1.getdata()<<endl;
 return 0;
}