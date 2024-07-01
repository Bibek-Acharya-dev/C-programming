
#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,y,result=1;
    printf("enter base x and power y");
    scanf("%d%d",&x,&y);
    for(i=0;i<y;i++)
    {
        result=result * x;
    }    
    printf("result = %d",result);
    return 0;
}