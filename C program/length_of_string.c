#include<stdio.h>
#include <string.h>
int main()
{
    char str[20]="abcde agb?";

    // int length = 0;

    // for(int i=0;str[i]!='\0';i++)
    // {
    //     length+=1;

    // }

    int length=strlen(str);

    printf("%d",length);


    return 0;
}