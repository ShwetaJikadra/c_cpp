/* 10 20 30 40 50
  20 30 40 50 10
  */
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
    int a[5]={10,20,30,40,50},i;
    int aa=a[0];
    for(i=0;i<5;i++)
    {
       
    a[i]=a[i+1];
    }
    a[4]=aa;
     for(i=0;i<5;i++)
        {
            printf("%d\t ",a[i]);
        }
 }
 