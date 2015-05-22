#include<stdio.h>

int main()
{
    int t,i;
    int n,k,x;
    long long sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&n,&k,&x);
        sum=(n*(n+1))/2;
        sum=sum-((k*(2*x+k-1))/2);
        printf("Case %d: %lld\n",i,sum);
    }
    return 0;
}
