#include<iostream.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fs("abc.txt");
    if(fs.is_open())
    {
        fs<<"Wel-Come to skillQode";

        fs<<"\nWe Started New Line.........";
        fs.close();
    }
}