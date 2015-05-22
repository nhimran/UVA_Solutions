#include<stdio.h>
#include<string.h>

int main()
{
    char coded[200];
    int i,length;
    /*taking input the coded message*/
    while(gets(coded)){
        length=strlen(coded);
        i=0;
        while(i<length){
    /*printing the decoded message*/
            printf("%c",coded[i]-7);
            i++;
        }
        printf("\n");
    }

    return 0;
}
