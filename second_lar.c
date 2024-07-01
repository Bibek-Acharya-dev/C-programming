//second largest in an array
#include<stdio.h>
void main()
{
    int a[10],i,l,s;
    printf("enter the elements of an array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    s=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>l)
        {
            s=l;
            l=a[i];
        }
        else if(a[i]>s&&a[i]!=l)
        {
            s=a[i];
        }
    }
    printf("second largest=%d",s);
}