#include<stdio.h>
#include<stdbool.h>


int main()
{
    int tourDays =45;

    if(tourDays ==2)
    {
        bool isBoatAvailable =true;
        if(isBoatAvailable)
        {
            printf("Going to Tanguar Haur\n");
        }
        else
        {
            printf("Going to Sylhet");
        }
    }

    else if(tourDays==4)
    {
        bool isShipAvailable = false ; 

        if(isShipAvailable)
        {
            printf(" saint martin");
        }

        else
        {
            printf("cox's bazar");
        }




    }

    else 
    {
        printf("Ghore boshe thako");
    }







    return 0;
}