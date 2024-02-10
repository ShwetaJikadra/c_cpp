#include<iostream>
using namespace std;
void positivenagative(int no)
{
    if(no>0)
    {
        cout<<no<<" is positive"<<endl;
    }
    else
    {
         cout<<no<<" is nagative"<<endl;
    }
}
int main(){
    positivenagative(10);
    return 0;
}