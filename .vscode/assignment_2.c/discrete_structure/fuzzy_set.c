//to find the complement of fuzzy set
#include<stdio.h>
int main(){
    int funiverse[5],i;
    float mem1[5],mem2[5];
    printf("enter the universe of fuzzyset");
    for( i=0;i<5;i++){
        scanf("%d",&funiverse[i]);
    }
    printf("membership value should be between 0 and 1 including 0 and 1");
    printf("enter the membership values for tall men");
     for( i=0;i<5;i++){
        scanf("%f",&mem1[i]);
    }
    printf("enter the membership values for small men");
     for( i=0;i<5;i++){
        scanf("%f",&mem2[i]);
    }
    printf("complement of tall men fuzzy set");
    complement(funiverse,mem1,5);
    printf("complement of small men fuzzy set");
    complement2(funiverse,mem2,5);
    printf("intersection of fuzzyset\n");
    intersection(funiverse,mem1,mem2,5);

    return 0;
}
void complement(int funiverse[],float mem1[],int i){
    for( i=0;i<5;i++){
        mem1[i]=1.0-mem1[i];
    }
    printf("complement of fuzzyset1={");
    for(i=0;i<5;i++){
        printf("(%f,%d),",mem1[i],funiverse[i]);
    }
    printf("\n");
}
void complement2(int funiverse[],float mem2[],int i){
    for( i=0;i<5;i++){
        mem2[i]=1.0-mem2[i];
    }
    printf("complement of fuzzyset1={");
    for(i=0;i<5;i++){
        printf("(%f,%d),",mem2[i],funiverse[i]);
    }
        printf("\n");

}
void intersection(int funiverse[],float mem1[],float mem2[],int i){
    printf("{");
    for(i=0;i<5;i++){
        if(mem1[i]<mem2[i]){
            printf("(%f,%d)",mem1[i],funiverse[i]);
        
        if(i<4){
            printf(",");
        }
        }
        else{
            printf("(%f,%d)",mem2[i],funiverse[i]);
        
        if(i<4){
            printf(",");
        }
        }
        
    }
    printf("}");
}