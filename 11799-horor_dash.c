#include<stdio.h>

int main()
{
    int kase,stdnts,max,speed,j,i;
    scanf("%d",&kase);
    for(j=1;j<=kase;j++){
        max=0;
        scanf("%d",&stdnts);
        i=0;
        while(i<stdnts){
            scanf("%d",&speed);
            if(max<speed){
                max=speed;
            }
            i++;
        }
        printf("Case %d: %d\n",j,max);
    }
    return 0;
}
