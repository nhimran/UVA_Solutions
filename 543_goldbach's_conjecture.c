#include<stdio.h>
#include<math.h>

#define size 1000000

char status[size];

void store_prime(void);

int main(){
    store_prime();
    int i,n,m;

    while(1){
        scanf("%d",&n);
        if(!n)return 0;
        m=n/2;
        for(i=3;i<=m;i+=2){
            if(status[i] && status[n-i]){
                printf("%d = %d + %d\n",n,i,n-i);
                break;
            }
        }
    }
    return 0;
}

void store_prime(void){
    int i,j,root;

    root=sqrt(size);
    for(i=3;i<size;i+=2){
        status[i]=1;
    }
    status[2]=1;
    for(i=4;i<size;i+=2){
        status[i]=0;
    }
    for(i=3;i<root;i+=2){
        for(j=i*i;j<size;j= j+i+i){
            status[j]=0;
        }
    }
}
