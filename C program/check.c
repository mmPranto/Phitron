#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001]="programming";
    int a[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        a[s[i]-97]+=1;
    }
    for(int i=0;i<26;i++)
    {
        printf("%d : %d\n",i,a[i]);
    }

    printf("%d",s[2]-97);
}