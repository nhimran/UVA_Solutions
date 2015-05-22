#include<stdio.h>

int main()
{
    double h_of_well,climb,fall,decrease_climb,fatig,init,after_climb,after_fall;
    int day_count;

    while(1){
        scanf("%lf %lf %lf %lf",&h_of_well,&climb,&fall,&decrease_climb);

        if(h_of_well==0)return 0;

        day_count=0;
        fatig=climb*decrease_climb/100.0;
        init=0;
        while(1){
            day_count++;

            if((climb-fatig)<0){
                climb=0;
            }

            after_climb=init+climb;

            if(after_climb>h_of_well){
                printf("success on day %d\n",day_count);
                break;
            }

            after_fall=after_climb-fall;

            if(after_fall<0){
                printf("failure on day %d\n",day_count);
                break;
            }

            init=after_fall;
            climb=climb-fatig;
        }
    }
    return 0;
}
