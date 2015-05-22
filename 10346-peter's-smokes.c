#include<stdio.h>

int main()
{
    int cigar,butt,d,r,div;
    int j;
    while(scanf("%d %d",&cigar,&div)!=EOF){
        d=1;
        butt=cigar;
        while(d){
            d=butt/div;
            r=butt%div;
            cigar=cigar+d;
            butt=d+r;
        }
        printf("%d\n",cigar,r);
    }
    return 0;
}
