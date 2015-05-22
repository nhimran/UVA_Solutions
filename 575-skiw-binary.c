#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char sk_bin[50];
    int dec,length;
    int i,digit,k;
    while(1){
        scanf("%s",sk_bin);
        if(!strcmp(sk_bin,"0")){
            return 0;
        }
        length=strlen(sk_bin);
        dec=0;
        for(i=length-1;i>=0;i--){
            digit=sk_bin[i]-'0';
            k=pow(2,length-i)-1;
            dec=dec+digit*k;
        }
       printf("%d\n",dec);
    }
    return 0;
}
