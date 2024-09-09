//WAP to generate the truth table for (pvq)n(~pvr)n(p<=>s)=>(rvs)
#include<stdio.h>
int pbicons(int p[],int s[],int i);
int conditional(int exp2[],int rvs[],int i);
int main(){
    int p[16]={1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0},
        q[16]={1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0},
        r[16]={1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0},
        s[16]={1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
        int i,pvq[16],npvr[16],rvs[16],exp1[16],exp2[16],exp3[16],bi[16];
        printf("p q r s pvq ~pvr p<=>s rvs (pvq)n(~pvr) (pvq)n(~pvr)n(p<=>s) (pvq)n(~pvr)n(p<=>s)=>rvs\n ");
        for(i=0;i<16;i++){
            pvq[i]=p[i]||q[i];
            npvr[i]=(!p[i])|| r[i];
            exp1[i]=(pvq[i]&&npvr[i]);
            bi[i]=pbicons(p,s,i);
            exp2[i]=exp1[i]&&bi[i];
            rvs[i]=r[i]||s[i];
            exp3[i]=conditional(exp2,rvs,i);
            printf("%d %d %d %d %d %d %d %d %d %d %d \n",p[i],q[i],r[i],s[i],pvq[i],npvr[i],bi[i],rvs[i],exp1[i],exp2[i],exp3[i]);
        }
}
        int pbicons(int p[],int s[],int i){
            if(p[i]==s[i]){
                return 1;
            }
            else return 0;
        }
        int conditional(int exp2[],int rvs[],int i){
            if((exp2[i]==1)&&(rvs[i]==0))
                return 0;
                else 
                return 1;
            
        }

