#include<stdio.h>

int main()
{
    int hour,min;
    float angle;
    while(scanf("%d:%2d",&hour,&min)==2)
    {
        if(hour==0 && min==0){
            break;
        }
        angle=(hour*30+min/2.00)-min*6;
        if(angle<0){
            angle=-angle;
        }
        if(angle>180.000){
            angle=360.000-angle;
        }
        printf("%0.3f\n",angle);
    }

    return 0;
}
