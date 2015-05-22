#include<stdio.h>

int main()
{
    int kase,heights[50],height,i,j,high,low;
    scanf("%d",&kase);
    for(i=1;i<=kase;i++){
        high=0;
        low=0;
        scanf("%d",&height);
        for(j=0;j<height;j++){
            scanf("%d",&heights[j]);
        }
        for(j=1;j<height;j++){
            if(heights[j]>heights[j-1]){
                high++;
            }
            if(heights[j]<heights[j-1]){
                low++;
            }
        }
        printf("Case %d: %d %d\n",i,high,low);
    }
    return 0;
}
