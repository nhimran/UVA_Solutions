#include<stdio.h>

int main()
{
    int kase,soda,botl_hv,botl_fnd,botl_req;
    int i,d,r;
    scanf("%d",&kase);
    for(i=1;i<=kase;i++){
        scanf("%d %d %d",&botl_hv,&botl_fnd,&botl_req);
        botl_hv=botl_hv+botl_fnd;
        d=1;
        soda=0;
        while(d){
            d=botl_hv/botl_req;
            r=botl_hv%botl_req;
            soda=soda+d;
            botl_hv=d+r;
        }
        printf("%d\n",soda);
    }
    return 0;
}
