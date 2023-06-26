#include<iostream>
#include<string.h>
using namespace std;
class marksheet
{
   public:
       int rno; 
        string nm;
       int m[5];
       void getdetail()
       {
        cout<<"Enter Roll number :"<<endl;
        cin>>rno;
        cout<<"Enter Name :"<<endl;
        cin>>nm;
        cout<<"Enter five subject marks:"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"enter marks of subject :"<<i<<endl;
            cin>>m[i];     
        }
       }

};
class cal_Result : public marksheet
{
    public:
    float total=0.0;
    float per=0.0;
    string g;
    string pf;
    void calResult()
    {
       
            total=m[0]+m[1]+m[2]+m[3]+m[4];
            if(m[1]>=35 && m[2]>=35 &&  m[3]>=35 && m[4]>=35 && m[0]>=35)
            {
            per=total/5.0;
            pf="Pass";
            if(per>=90)
            {
                g="A";
            }
            else if(per>=80)
            {
                g="B";
            }
            else if(per>=70)
            {
                g="C";
            }
            else if(per>=60)
            {
                g="D";
            }
            else if(per>=35)
            {
                g="E";
            }
     }
    else{
      //  per=0.0;
        g="F";
        pf="Fail.....";
    }        
       
    }
       
};
class getResul:public cal_Result
{
    public:
        void printResult()
        {
           cout<<endl<<"Roll No: "<<rno<<endl;
           cout<<"Name :"<<nm<<endl<<endl;
           cout<<"*****************Marks of Subject*****************"<<endl;
           cout<<"Sub 1      Sub 2       Sub 3      Sub 4      Sub 5"<<endl;
           cout<<m[0]<<"         "<<m[1]<<"          "<<m[2]<<"           "<<m[3]<<"           "<<m[4]<<endl;

           cout<<"Total :"<<total<<endl;
           cout<<"Per(%) :"<<per<<endl;

           cout<<"Result :"<<pf<<endl;
           
           cout<<"Grade :"<<g<<endl;
        }
      
};
int main()
{
    while(1)
    {
    getResul a;
    a.getdetail();
    a.calResult();
    a.printResult();
    }
}