#include<iostream>
using namespace std;
class Base
{
    public:
      virtual void getter()=0;
      
};
class derived:public Base
{
   public:
     void getter()
     {
        cout<<"Derived class Function called............"<<endl;
     }
};

class derived1:public derived
{
   public:
     void getter()
     {
        cout<<"Derived 1 class Function called............"<<endl;
     }
};
int main()
{
    Base *p;
    derived d;
    derived1 d1;
    p=&d;
    p->getter();
    
    p=&d1;
    p->getter();
}