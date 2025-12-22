#include<stdio.h>
#include<string.h>
int main()
{
    char x[100000];
    char y[100000];
    scanf("%s",x);
    scanf("%s",y);

    int z=strcmp(x,y);

    if(z==-1)
    {
        printf("%s",x);
    }
    else
    {
        printf("%s",y);
    }

   

   


    return 0;
}