//make a calculator with +,-,*,/ operator using switch case statement
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    char op;
    printf("Enter operator");
    scanf("%c",&op);
    printf("Enter operands");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case '+':
            c=a+b;
            printf("the addition is %d",c);
            break;
        case '-':
            c=a-b;
            printf("the subtraction is %d",c);
            break;
        case '*':
            c=a*b;
            printf("the multiplication is %d",c);
            break;
        case '/':
            c=a/b;
            printf("the division is %d",c);
            break;
        default:
            printf("Invalid input");
            

    }
    getch();
}