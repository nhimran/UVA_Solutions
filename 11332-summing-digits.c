#include<stdio.h>


int digit_sum(int n);


int main()
{
    int num,sum;
    while(scanf("%d",&num)==1 & num!=0){
            while(num>9){
            sum=digit_sum(num);
            num=sum;
        }
        printf("%d\n",num);
    }
    return 0;
}


int digit_sum(int n)
{
    int sum=0;
    while(n){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
