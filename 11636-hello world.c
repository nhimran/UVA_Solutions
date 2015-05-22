#include<stdio.h>

int main()
{
    int n,i,j;
    int kount;

    for(j=1;1;j++)
    {
        scanf("%d",&n);
        if(n<0){
            break;
        }
        else if(n==0 || n==1){
            kount=0;
        }
        else{
             kount=1;
            for(i=1; n>i+i; i+=i)
            {
                kount++;
            }
        }
        printf("Case %d: %d\n",j,kount);
    }

    return 0;
}
