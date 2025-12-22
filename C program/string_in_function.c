#include<stdio.h>
#include<string.h>

void length(char x[])
{
    int z=strlen(x);
    printf("%d",z);
}
int main()
{
    char a[20]="programming";

    length(a);



    return 0;
}