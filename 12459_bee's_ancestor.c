#include<stdio.h>

long long ancestor[84];

int main()
{
    long long a,b,c;
    int i,gen;
    a=1;
    ancestor[1]=1;
    b=2;
    ancestor[2]=2;
    i=3;
    while(i<=82){
        c=a+b;
        ancestor[i]=c;
        a=b;
        b=c;
        i++;
    }
    for(;;){
        scanf("%d",&gen);
        if(gen==0){
            break;
        }
        else{
            printf("%lld\n",ancestor[gen]);
        }
    }
    return 0;
}
