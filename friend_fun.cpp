#include<iostream>
using namespace std;
class Box
{
    int l,w;
    friend Box add(Box,Box);
    public:
    void setdata(int a,int b)
    {
         l=a;
         w=b;
    }
    int getdata()
    {
        return l*w;

    }

};
Box add(Box x,Box y)
{
    Box z;
    z.l=x.l+y.l;
    z.w=x.w+y.w;
    return z;
}
int main()
{
    Box a,b,c;
    a.setdata(4,5);
    cout<<"Area of Box A:"<<a.getdata()<<endl;
    b.setdata(3,4);
    cout<<"Area of Box B:"<<b.getdata()<<endl;
    c=add(a,b);
    cout<<"Area of Box C:"<<c.getdata()<<endl;
}
