#include<stdio.h>

int main()
{
    int kase,cola,botol,d,r;
    int j;
    while(scanf("%d",&cola)!=EOF){
        d=1;
        botol=cola;
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
