#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,digit=0,remainder;
    printf("enter n");
    scanf("%d",&n);
    int originalnum=n;
    for(i=1;n!=0;i++)
    {
        remainder=n%10;
        digit+=remainder*remainder*remainder;
        n/=10;
    }
    if(digit==originalnum)
    printf("armstrong ");
    else
    printf("not armstrong");
    
}