#include<stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("enter the number of terms \n");
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",fibo(i));
    }

}
int fibo(int n)
{
    if(n<=1)
    return n;
    else
    return(fibo(n-1)+fibo(n-2));
}