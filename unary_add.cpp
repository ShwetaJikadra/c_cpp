#include<iostream>
using namespace std;
class Box
{
    int l,w,h;
    public:
       void setdata(int a,int b,int c)
       {
        l=a;
        w=b;
        h=c;
       }
       int getdata()
       {
           return l*w*h;
       }
       Box operator /(Box n)
       {
        Box t;
        t.l=l/n.l;
        t.w=w/n.w;
        t.h=h/n.h;
        return t;
       }
};
int main()
{
    Box a,b,c;
    a.setdata(5,5,5);
    cout<<"Value of A: "<<a.getdata()<<endl;
     b.setdata(3,3,3);
    cout<<"Value of B: "<<b.getdata()<<endl;
    c=a/b;
    cout<<"Value of C: "<<c.getdata()<<endl;

}
