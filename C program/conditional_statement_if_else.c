#include<stdio.h>

int main()
{
    int price = 60;

    if(price <= 50)
    {
        printf("Buy 4x\n");
        printf("take %d taka back",50-price);
    }

    else
    {
        printf("Buy 2x");
    }




    return 0;
}