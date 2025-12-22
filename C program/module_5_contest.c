#include<stdio.h>

int main()
{
    char ch;

    scanf("%c",&ch);

    if(ch>='0' && ch<='9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");

        if(ch>='A' && ch<='Z')
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }



    return 0;
}

// 0=48
// 1=49
// 2=50
// 3=51
// 4=52
// 5=53
// 6=54
// 7=55
// 8=56
// 9=57


