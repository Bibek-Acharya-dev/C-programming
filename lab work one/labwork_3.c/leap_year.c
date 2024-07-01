//WAP to check if weather the year you entered is leap year or not(use nested if else)
#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("It is a leap year",year);
            }
             else
            {
                printf("It is  not a leap year",year);

            }
        }else
            {
                printf("It is  a leap year",year);
            }    
    }
    else
        {
            printf("It is not a leap year",year);
        }    
    
    getch();
}