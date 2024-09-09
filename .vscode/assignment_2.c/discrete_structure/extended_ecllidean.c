//implimenting extended eclidean algorithm 
#include<stdio.h>
int main(){
    int q,r1,r2,r,s1=1,s2=0,s,t1=0,t2=1,t,gcd;
    printf("enter two numbers to find their gcd");
    scanf("%d%d",&r1,&r2);
    while(r2!=0){
        q=r1/r2;
        r=r1%r2;
        r1=r2;
        r2=r;
        s=s1-q*s2;
        t=t1-q*t2;
        s1=s2;
        s2=s;
        t1=t2;
        t2=t;
    }
    gcd=r1;
    printf("gcd=%d\n",gcd);
    printf("the cofficient x=%d, y=%d",s1,t1);
}