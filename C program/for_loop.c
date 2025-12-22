#include<stdio.h>

int main()
{
    printf("Before loop\n");

    for(int i=3 ; i>=1 ; i--)
    {
        printf("Inside for loop\n ");
        printf("value of i=%d \n",i);
    }

    printf("Outside for loop\n");




    return 0;
}