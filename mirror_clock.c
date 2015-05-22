#include<stdio.h>

int main()
{
    int kase,i,j;
    int hour,min,cal;

    scanf("%d",&kase);
    for(i=0;i<kase;i++){
        scanf("%d:%d",&hour,&min);
        cal=720-hour*60-min;
        int hour2=cal/60;
        int min=cal%60;
        if(hour2==0){
            hour2=12;
        }
        if(min<0){
           min=min+60;
           hour2=hour-1;
        }
        printf("%02d:%02d\n",hour2,min);
    }

    return 0;
}
