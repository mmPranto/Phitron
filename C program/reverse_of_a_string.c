#include<stdio.h>
#include<string.h>

int main()
{
    // char str[100]="hi, we are learning string! ";

    // int len_str=strlen(str);

    // for(int i=0,j=len_str-1;i<=j;i++,j--)
    // {
    //     char temp = str[i];
    //     str[i]=str[j];
    //     str[j]=temp;
    // }

    // printf("%d",len_str);

    //strrev(str); // string reverse function..but not applicable for all compiler


    char a[1000]="ABC";

    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        printf("%c",a[i]+32);
    }



    return 0;
}