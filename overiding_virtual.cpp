#include<iostream>
using namespace std;
class Base
{
    public:
      virtual void getter()
      {
        cout<<"Base class Function Function called.........."<<endl;
      }
};
class derived:public Base
{
   public:
     void getter()
     {
        cout<<"Derived class Function called............"<<endl;
     }
};
int main()
{
    Base *p,b;
    derived d;
    p=&b;
    p->getter();
    p=&d;
    p->getter();
}