#include<stdio.h>
#include<string.h>


int mod_11(char ch[1005])
{
    int d,i;
    d=(ch[0]-'0')%11;
    i=1;
    while(ch[i]){
        d=(d*10+(ch[i]-'0'))%11;
        i++;
    }
    return d;
}

int main()
{
    char num[1005];
    while(gets(num)){
        if(!strcmp(num,"0")){
            break;
        }
        else if(mod_11(num)==0){
            printf("%s is a multiple of 11.\n",num);
        }
        else{
            printf("%s is not a multiple of 11.\n",num);
        }
    }
    return 0;
}
