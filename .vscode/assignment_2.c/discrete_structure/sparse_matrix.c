#include<stdio.h>
int main(){
    int i,j,m[3][3],c1=0,c2=0;
    printf("enter the values of matrix");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(m[i][j]==0)
            c1++;
            else
            c2++;
        }
       
    }
    if(c1>c2)
    printf("it is a sparse matrix");
    else
    printf("it is not a sparse matrix");
}