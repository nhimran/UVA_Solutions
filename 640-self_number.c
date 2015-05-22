#include<stdio.h>

int self[1000001];

int digit_sum(int n)
{
    int sum=0;
    while(n){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    int i,num;
    for(i=0;i<1000001;i++){
        self[i]=1;
    }
    for(i=1;i<1000001;i++){
        self[i+digit_sum(i)]=0;
    }
    for(i=1;i<1000001;i++){
        if(self[i]==1){
            printf("%d\n",i);
        }
    }
    return 0;
}
