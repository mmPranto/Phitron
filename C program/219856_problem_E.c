#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];

    scanf("%s",a);

    int i=0;
    int sum=0;
    
    int str_len=strlen(a);

    for(int i=0;i<str_len;i++)
    {
        sum=sum+a[i];
    }

    
    printf("%d",sum);






    return 0;
}