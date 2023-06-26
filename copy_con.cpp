#include<iostream>
using namespace std;
class Test
{
    int age;
    public:
      Test(int n)
      {
        age=n;
      }
      int getage()
      {
        return age;
      }
      Test(Test &n)
      {
        age=n.age;
      }

};
int main()
{
 Test a(10);
 cout<<"Age of A is :"<<a.getage()<<endl;
 Test b(a);
 cout<<"Age of B is :"<<a.getage()<<endl;

}