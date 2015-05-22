#include<stdio.h>

int main()
{
    int kase,stdnts,marks[1000],sum;
    int i,j,k;
    float avrg,percent;
    scanf("%d",&kase);
    for(j=1;j<=kase;j++){
        sum=0;
        scanf("%d",&stdnts);
        for(i=0;i<stdnts;i++){
            scanf("%d",&marks[i]);
            sum=sum+marks[i];
        }
        avrg=(float)sum/stdnts;
        k=0;
        for(i=0;i<stdnts;i++){
            if(marks[i]>avrg){
                k++;
            }
        }
        percent=(float)(k*100)/stdnts;
        printf("%0.3lf%%\n",percent);
    }

    return 0;
}
