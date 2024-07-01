#include<stdio.h>
void oddoreven(int n)
{
    if(n%2==0)
    printf("even\n");
    else 
    printf("odd\n");

}
void positiveornegative(int n)
{
    if(n>0)
    printf("positive\n");
    else
    printf("negative\n");
}
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    char ch;
    int n;
    printf("menu\n");
    printf("1.odd or even\n2.positive or negetive\n3.factorial\nD.exit\n");
   
do
 {
    printf("enter your choice\n");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '1': printf("enter the number\n");
                  scanf("%d",&n);
                  oddoreven(n);
                  break;
        case '2': printf("enter the number\n");
                  scanf("%d",&n);
                  positiveornegative(n);
                  break;      
        case'3':  printf("enter the number\n");
                  scanf("%d",&n);
                  printf("factorial =%d\n",fact(n));
                  break;    
        case 'd':
        case'D': printf("exiting function\n");
                return 0;
    }
 }while(ch=='d'||ch=='D');



    

}