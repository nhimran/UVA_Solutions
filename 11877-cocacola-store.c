#include<stdio.h>

int main()
{
    int kase,cola,botol,d,r;
    int j;
    while(1){
        scanf("%d",&botol);
        if(botol==0){
            return 0;
        }
        cola=0;
        d=1;
        while(d){
            d=botol/3;
            r=botol%3;
            cola=cola+d;
            botol=d+r;
        }
        if(r==2){
            cola++;
        }
        printf("%d\n",cola,r);
    }
    return 0;
}
