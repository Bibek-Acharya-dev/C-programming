//largest in each row of 2D matrix
#include<stdio.h>
void main()
{
    int i,j,max,p,q;
    printf("enter the rows and column");
    scanf("%d%d",&p,&q);
    if(p>0||q>0)
    {
        int m[p][q];
        printf("enter the data of matrix");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("enter the data of (%d,%d):",i,j);
                scanf("%d",&m[i][j]);
            }
        }
        for(i=0;i<p;i++)
        {
            max=m[i][0];
            for(j=0;j<q;j++)
            {
                if(m[i][j]>max)
                max=m[i][j];

            }
            printf("the largest of %dth row is %d\n",i,max);
        }

    }    
}