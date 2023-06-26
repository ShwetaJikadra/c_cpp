#include<iostream>
using namespace std;
class Test
{
    int r,m,s,e,t;
    char nm[50];
    public:
    void setdata()
    {
    cout<<"Enter Roll Number :"<<endl;
    cin>>r;
    cout<<"enter Name : "<<endl;
    cin>>nm;
    cout<<"Enter Maths marks :"<<endl;
    cin>>m;
    cout<<"Enter Science marks :"<<endl;
    cin>>s;
    cout<<"Enter English marks :"<<endl;
    cin>>e;
    }
    void getdata()
    {
        cout<<"Roll No:"<<r<<endl;
        cout<<"Name :"<<nm<<endl;
        cout<<"Maths marks :"<<m<<endl;
        cout<<"Science marks :"<<s<<endl;
        cout<<"English marks :"<<e<<endl;
        cout<<"Total :"<<(m+s+e)<<endl;
    }
};
/*void Test :: setdata()
{
    cout<<"Enter Roll Number :"<<endl;
    cin>>r;
    cout<<"enter Name : "<<endl;
    cin>>nm;
    cout<<"Enter Maths marks :"<<endl;
    cin>>m;
    cout<<"Enter Science marks :"<<endl;
    cin>>s;
    cout<<"Enter English marks :"<<endl;
    cin>>e;


}*/
int main()
{
    Test a[5];
    int i;
   for ( i = 0; i < 2; i++)
   {
    
   
   
    
        cout<<"************* Details of Students *************"<<endl;
        a[i].setdata();
        cout<<endl;
    }
   for ( i = 0; i < 2; i++)
   {
    
   
    
        cout<<"************* Details of Students *************"<<endl;
        a[i].getdata();
        cout<<endl;
    }
}
