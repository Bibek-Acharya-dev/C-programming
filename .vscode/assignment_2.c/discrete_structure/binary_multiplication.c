//binary multiplication of two numbers
#include<stdio.h>
#include<math.h>
int intodecimal(long long binary){
    int i=0,decimal=0;
    while(binary!=0){
        decimal+=(binary%10)* pow(2,i);
        binary/=10;
        i++;
    }
    return decimal;
}
long long intobinary(int decimal){
    long long binary=0;
    int remainder,i=1;
    while(decimal!=0){
        remainder=decimal%2;
        binary+=remainder*i;
        decimal=decimal/2;
        i=i*10;
    }
    return binary;

}
int main(){
 long long binary1,binary2,binaryResult;
    int decimal1,decimal2,decimalResult;
    printf("enter two binary numbers");
    scanf("%lld%lld",&binary1,&binary2);
    
    decimal1=intodecimal(binary1);
    decimal2=intodecimal(binary2);

    decimalResult=decimal1*decimal2;

    binaryResult=intobinary(decimalResult);

    printf("multiplication=%lld",binaryResult);
    return 0;
}