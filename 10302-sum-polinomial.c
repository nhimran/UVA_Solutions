#include<stdio.h>

int main()
{
    long long x,sum;
    while(scanf("%lld",&x)!=EOF){
       sum =(x*(x+1))/2;
       sum=sum*sum;
       printf("%lld\n",sum);
    }
    return 0;
}
