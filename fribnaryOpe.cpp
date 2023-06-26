#include<iostream>
using namespace std;
class Box
{
    int l,w;
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
      friend Box operator+(Box,Box);
};
Box operator+(Box x,Box y)
{
    Box t;
    t.l=x.l+y.l;
    t.w=x.w+y.w;
    return t;
}
int main()
{
    Box a,b,c;
    a.setdata(3,2);
    cout<<"Area of Box A:"<<a.getdata()<<endl;
    b.setdata(4,3);
    cout<<"Area of Box B:"<<b.getdata()<<endl;
    c=a+b;
  //  c.setdata(a,b);
    cout<<"Area of Box C:"<<c.getdata()<<endl;

}