#include<stdio.h>
int sum(int n)
{
    
    if(n<10)
    return n;
    else
   return (n%10)+sum(n/10);
}
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("sum=%d",sum(n));

}