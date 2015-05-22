#include<stdio.h>

long long fibo[2][53];

int main()
{
    long long a,b,c,i,sum,male,female;
    int n;
    a=0;
    fibo[0][1]=0;
    fibo[1][1]=0;
    b=1;
    fibo[0][2]=1;
    fibo[1][2]=1;
    i=3;
    sum=1;
    while(i<=52){
        c=a+b;
        sum=sum+c;
        fibo[0][i]=c;
        fibo[1][i]=sum;
        a=b;
        b=c;
        i++;
    }

    while(scanf("%d",&n)==1 && n!=-1){
        male=fibo[1][n+1];
        female=fibo[0][n+2];
        printf("%lld %lld\n",male,male+female);
    }


    return 0;
}
