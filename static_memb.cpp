#include<iostream>>
using namespace std;
class bike
{
  public:
  static int m;
    int car_id;
    int marks;
    bike()
    {
        cout<<"Enter car_ID :"<<endl;
        cin>>car_id;
        cout<<"Enter Remarks :"<<endl;
        cin>>marks;
        m++;

    }
    void display()
    {
        cout<<"Car_ID :: "<<car_id<<endl;
        cout<<"Car Remarks :: "<<marks<<endl;
    }
   
};
 int bike:: m=10;   //init
int main()
{
    cout<<"Initial member :"<<bike::m<<endl;
    bike b1,b2;
    b1.display();
    b2.display();
    cout<<"Final  member :"<<bike::m<<endl;
}