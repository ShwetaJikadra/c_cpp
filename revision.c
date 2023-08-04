#include<stdio.h>
#include<conio.h>
int main(){
    int a[5] = {10,20,30,40,50},i;
    int c;
    c=a[0];
    a[0] = a[4];
    a[4] = c;
    for (i=0; i<5; i++)
    {
        printf("%d \t",a[i]);
    }    
}