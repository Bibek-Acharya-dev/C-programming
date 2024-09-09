#include<stdio.h>
int main(){
    int p[4]={1,1,0,0},q[4]={1,0,1,0};
    printf("p\tq\t~p\t~q\tpnq\tpVq\n");
    for(int i=0;i<4;i++){
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",p[i],q[i],!p[i],!q[i],(p[i]&&q[i]),(p[i]||q[i]));
    }
    return 0;
    
}