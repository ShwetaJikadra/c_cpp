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
      friend Box operator++(Box);
};
Box operator++(Box x)
{
    Box t;
    t.l=++x.l;
    t.w=++x.w;
    return t;
}
int main()
{
    Box a,c;
    a.setdata(3,2);
    cout<<"Area of Box A:"<<a.getdata()<<endl;
    c=++a;
    cout<<"Area of Box C:"<<c.getdata()<<endl;

}