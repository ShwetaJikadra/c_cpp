#include<iostream>
using namespace std;
class Base
{
    public:
    int m,n;

    Base()
    {
        cout<<"Enter value of m and n ::"<<endl;
        cin>>m>>n;
    }
};
class XYZ : public Base
{
   public:
     XYZ()
     {
        cout<<"addition of m and n ::"<<m+n<<endl;

     }
};
class ABC :public Base
{
  public:
     ABC()
     {
        cout<<"multiplication of m and n ::"<<m*n<<endl;
     }

};
int main()
{
    XYZ x;
    ABC a;
}