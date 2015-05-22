#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char ch;
    i=1;
    while(scanf("%c",&ch)==1){
        if(i==1 && ch=='"'){
            printf("``");
            i=2;
        }
       else if(i==2 && ch=='"'){
            printf("''");
            i=1;
        }
        else{
            printf("%c",ch);
        }
    }
    return 0;
}
