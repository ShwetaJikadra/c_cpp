#include<iostream>
using namespace std;

template<class T>
void display(T t1)
{
    cout<<"Displaying Template :"<<t1<<endl;
}
template<class x ,class y>
/*void display(x a,y b)
{
    cout<<"Displaying Template :"<<a<<"\t"<<b<<endl;
}*/
void addition(x a,y b)
{
    cout<<"Displaying Templete : "<<a+b<<endl;
}
int main()
{
    display(200);
    display(12.56);
    display('G');
    display("GIRISH");
  //  display('x',25);
   // display(25,23.67);
   addition('A',25.5);
   addition('a','b');
}