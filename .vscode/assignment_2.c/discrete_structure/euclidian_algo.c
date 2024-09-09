#include<stdio.h>
int main(){
    int a,b,remainder,gcd;
    printf("enter a and b 'enter a greater than b'");
    scanf("%d%d",&a,&b);
    while(b!=0){
        remainder=a%b;
        a=b;
        b=remainder;
    }
    gcd=a;
    printf("gcd=%d",gcd);
    return 0;
}