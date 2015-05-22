#include<stdio.h>
#include<math.h>

int main()
{
    int kase,length,i;
    double pi,area1,area2;
    pi=acos(-1);
    scanf("%d",&kase);
    for(i=0;i<kase;i++){
        scanf("%d",&length);
        area1=length*length*(6/10.0);
        area2=pi*(length/5.0)*(length/5.0);
        printf("%0.2lf ",area2);
        area1=area1-area2;
        printf("%0.2lf\n",area1);
    }
    return 0;
}
