//find all the rooots of quadractic equation using if else ladder statement
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,r1,r2,d;
    printf("Enter the cofficient of quadratic equation.\n");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0)
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("the roots are :%f,%f",r1,r1);
    }
    
    else if(d<0)
    {
        printf("the roots are imaginary");
    }
    getch();
}   