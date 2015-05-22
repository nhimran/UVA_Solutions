#include<stdio.h>
#include<string.h>

int mod(char str[10000],int m)
{
    int i,d;
    d=(str[0]-'0')%m;
    i=1;
    while(str[i]){
        d=(d*10 + (str[i]-'0'))%m;
        i++;
    }
    return d;
}

int main()
{
    char year[10000];
    int a=0;
    while(gets(year)){
        if(a)printf("\n");
        if(mod(year,4)==0 && mod(year,100)!=0){
            printf("This is leap year.\n");
            if(mod(year,15)==0){
                printf("This is huluculu festival year.\n");
            }
            if(mod(year,55)==0){
                printf("This is bulukulu festival year.\n");
            }
        }
        else if(mod(year,4)==0 && mod(year,100)==0 && mod(year,400)==0){
            printf("This is leap year.\n");
            if(mod(year,15)==0){
                printf("This is huluculu festival year.\n");
            }
            if(mod(year,55)==0){
                printf("This is bulukulu festival year.\n");
            }
        }
        else{
            if(mod(year,15)==0){
                printf("This is huluculu festival year.\n");
            }
            else{
                printf("This is an ordinary year.\n");
            }
        }
        a++;
    }


    return 0;
}
