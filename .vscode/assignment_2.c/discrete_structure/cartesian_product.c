#include<stdio.h>
int main(){
    int set1[10],set2[10],i,j;
    printf("enter 5 elements of set1");
    for( i=0;i<5;i++){
        scanf("%d",&set1[i]);
    }
    printf("enter 5 elementss of set2");
    for( i=0;i<5;i++){
        scanf("%d",&set2[i]);
    }
    printf("{");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("(%d,%d)",set1[i],set2[j]);
        }
        printf(",");
    }

}