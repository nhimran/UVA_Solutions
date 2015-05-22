#include<stdio.h>

int main()
{
    int amp,freq,m;
    int i,j,k,l,kase,n;
    scanf("%d",&kase);
    for(n=1;n<=kase;n++)
    {
        scanf("%d %d",&amp,&freq);
        for(l=1; l<=freq; l++)
        {
            m=amp+amp-1;
            for(i=1; i<=m; i++)
            {
                k=i;
                if(k>amp)
                {
                    k=amp+amp-k;
                }
                for(j=1; j<=k; j++)
                {
                    printf("%d",k);
                }
                printf("\n");
            }
            if(l!=freq){
                printf("\n");
            }
        }
        if(n!=kase){
            printf("\n");
        }
    }

    return 0;
}
