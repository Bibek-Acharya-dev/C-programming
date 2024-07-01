//find largest among three number you entered (use nested if else)
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter any three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the largest",a);
        }
        else
        {
            printf("%d is the largest",c);
        }
    }    
    else
    {
        if(b>c)
        {
            printf("%d is the largest",b);
        }
        else
        {
            printf("%d is the largest",c); 
        }
    }             
    getch();
}