#include<stdio.h>

int main()
{
    int day = 1, hour=20;
    switch(day)
    {
        case 1:
             switch (hour)
             {
             case 20:
             printf("fuck");
                break;
             
             default:
                break;
             }
       
        break;

        case 2:
        printf("Sunday\n");
        break;

        case 3:
        printf("Tuesday\n");
        break;

        case 4:
        printf("Wednesday\n");
        break;

        case 5:
        printf(" \n");
        break;

        case 6:
        printf("Thursday\n");
        break;

        case 7:
        printf("Friday\n");
        break;

        default:
        printf("Wrong day");


    }






    return 0;
}