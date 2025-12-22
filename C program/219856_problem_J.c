#include<stdio.h>
#include<string.h>

char str[10000000];

int main()
{
    
    scanf("%s",str);

    int x=strlen(str);

    int a[26]={0};

    for(int i=0;i<=x-1;i++)
    {
        a[str[i]-97]++;
    }

    for(int i=0;i<=25;i++)
    {
        if(a[i]>0)
        {
            printf("%c : %d\n",i+97,a[i]);
        }
    }

    return 0;
}