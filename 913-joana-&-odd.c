#include<stdio.h>

int main()
{
    long long num_odd,serial_odd,sum;
    while(scanf("%lld",&num_odd)!=EOF)
    {
        serial_odd=((num_odd+1)*(num_odd+1))/4;
        sum=6*serial_odd-9;
        printf("%lld\n",sum);
    }

    return 0;
}
