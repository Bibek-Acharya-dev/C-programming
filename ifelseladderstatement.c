#include<stdio.h>
int sum(int n);
int sum(n){
{
    if(n==1)
    return 1;

else
{
    return n+sum(n-1);
}

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n<=0)
    printf("enter positive integer");
    else
    printf("the sum of n natural number is %d",n,sum(n));
    return 0;
}
