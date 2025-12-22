#include<stdio.h>

int main()
{
    //break.................
    // for(int i=100;i<=300;i++)
    // {
    //     printf("Checking %d\n",i);

    //     if(i%2==0 && i%3==0 && i%5==0)
    //     {
    //         printf("%d is the number\n");
    //         break;
    //     }

    // }

    //continue...................

    for(int i=100;i<=300;i++)
    {
        if(i%2==0 && i%3==0 && i%5==0)
        {
            printf("%d is the number\n",i);
            continue;
        }
        printf("%d is not the number\n",i);
    }

    


    return 0;
}