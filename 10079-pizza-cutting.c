#include<stdio.h>

long long cut(long long n);

int main()
{
    long long  int n;
    while(1){
        scanf("%lld",&n);
        if(n<0){
            return 0;
        }
        printf("%lld\n",cut(n));
    }
}

long long cut(long long n)
{
    if(n==0){
        return 1;
    }
    else{
        return n+cut(n-1);
    }
}
