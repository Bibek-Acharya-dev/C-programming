#include<stdio.h>
int sumofodd(int);
void main()
{
    
    printf("the sum of odd is %d",sumofodd(10));
}
int sumofodd(int n)
{
    int s;
    s=n/2*(2*2+(n-1)*2);
    return s;
}