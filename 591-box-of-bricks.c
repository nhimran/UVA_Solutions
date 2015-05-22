#include<stdio.h>

int main()
{
    int stacks,heights[100],sum,moves;
    int i,j;
    for(j=1;;j++)
    {
        sum=0;
        moves=0;
        scanf("%d",&stacks);
        if(stacks==0){
            return 0;
        }
        for(i=0;i<stacks;i++){
            scanf("%d",&heights[i]);
            sum=sum+heights[i];
        }
        sum=sum/stacks;
        for(i=0;i<stacks;i++){
            if(heights[i]>sum){
                moves=moves+(heights[i]-sum);
            }
        }
        printf("Set #%d\n",j);
        printf("The minimum number of moves is %d.\n\n",moves);
    }

    return 0;
}
