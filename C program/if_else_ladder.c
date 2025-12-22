#include<stdio.h>

int main()
{
    int a =14 ;

    if(a<5)
    {
        printf("a is less than 5\n");
    }

    else if(a<10)
    {
        printf("a is less than 10\n");
    }

    else if(a<15)
    {
        a=16;
        printf("a is less than 10\n");
    }
    else if(a<20)
    {
        printf("a is less than 20");
    }


    else
    {
        printf("a is less than 100");
    }
   
     
     printf("after if else ladder\n");
     printf("%d",a);




    return 0;
}