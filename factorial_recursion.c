#include<stdio.h>
void main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    printf("factorial=%d",fact(n));

}
int fact(int n)
{
    
    if(n==0||n==1)
    return n;
else{
   
    return n*fact(n-1);
    

    }}