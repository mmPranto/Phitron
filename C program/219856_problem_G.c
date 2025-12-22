#include<stdio.h>
#include<string.h>
int main()
{

    char a[10000];

    int len=strlen(a);

    for(int i=0;i<len;i++)
    {
        if(a[i]<97)
        {
            a[i]+32;
        }
        else if(a[i]>=97)
        {
            a[i]-32;
        }
        else if(a[i]==',')
        {
            a[i]==' ';
        }
        else if()
    }






    return 0;
}