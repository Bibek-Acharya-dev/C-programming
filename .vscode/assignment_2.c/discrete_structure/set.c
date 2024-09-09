#include<stdio.h>
void intersectionset(int set1[],int set2[],int i,int j){
    int set3[100],k=0;;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(set1[i]==set2[j]){
            set3[k++]=set1[i];
            break;
            }
        
        }
    }
    for(int i=0;i<k;i++){
        printf("%d",set3[i]);
        if(i<k-1){
            printf(",");
        }
    }
}
void unionset(int set1[],int set2[],int i,int j){
    int set3[20],k=0;
    for(int i=0;i<10;i++){
        set3[k++]=set1[i];
    }
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if(set3[i]!=set2[])
        }
    }
}
int main(){
    int set1[100],set2[100],set3[100],i=0,j=0;
    printf("enter the elements of the set1");
    for(i=0;i<10;i++){
        scanf("%d",&set1[i]);
    }
    printf("enter the elements of the set");
    for(i=0;i<10;i++){
        scanf("%d",&set2[i]);
    }
    intersectionset(set1,set2,i,j);

    return 0;
}