class a
{
     public:
       int n;
       void setdata()
       {
        cout<<"enter value of n:";
        cin>>n;
       }
};
class b
{
        
};
class c:public b,public a
{
    public:
       void getadat()
       {
        for(int i;i<=n;i++)
        {
        cout<<i;
        }
       }
};
int main()
{
    c c1;
    c1.getdata();
    c1.getdata();
}