#include<stdio.h>
int main()
{
    char ch;
    // getchar();
    scanf("%c",&ch);

    if(ch<97)
    {
        printf("%c",ch+32);

    }
    else
    {
        printf("%c",ch-32);

    }



    return 0;
}