#include<stdio.h>

int main()
{
    int kase,farmers,space,animal,frndly,sum;
    int i,j,k;

    scanf("%d",&kase);
    for(i=0;i<kase;i++){
        sum=0;
        scanf("%d",&farmers);
        for(j=0;j<farmers;j++){
            scanf("%d %d %d",&space,&animal,&frndly);
            sum=sum+(space*frndly);
        }
        printf("%d\n",sum);
    }
    return 0;
}
