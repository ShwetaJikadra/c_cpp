#include<iostream>
using namespace std;
class Bank
{
  int bal;
  string name;
  public:
    void setdata(int bal,string name)
    {
       this->bal=bal;
       this->name=name;
    }
    void getdata()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Balance :"<<bal<<endl;

    }

};
int main()
{
    Bank x;
    x.setdata(10000,"skill");
    x.getdata();
}