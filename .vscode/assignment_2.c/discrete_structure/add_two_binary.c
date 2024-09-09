//binary addition
#include<stdio.h>
void main(){
    long binary1,binary2;
    int i=0,remainder=0,sum[20];
    printf("enter two  binary numbers to add");
    scanf("%ld%ld",&binary1,&binary2);
    while(binary1!=0 || binary2!=0){
        sum[i++]=(binary1%10+binary2%10+remainder)%2;
        remainder=(binary1%10+binary2%10+remainder)/2;
        binary1=binary1/10;
        binary2=binary2/10;
    }
    if(remainder!=0){
        sum[i]=remainder;
    }
    
    printf("sum of two binary numbers=");
    while(i>=0){
        printf("%d",sum[i--]);
    }
}