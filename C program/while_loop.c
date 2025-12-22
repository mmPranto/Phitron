#include<stdio.h>

int main()
{ 
    /*

    intialization;

    while(condition)
    {
      statement;
      statement;

      increment/decrement;
    }
    */

   printf("Before loop\n");

   int i=1;

   while(i<=5)
   {
    printf("Inside while loop i = %d\n",i);
    i++;
   }

   printf("After while loop\n"); 

    i=1;

   for(;i<=5;)
   {
    printf("Inside for loop i = %d\n",i);
    i++;
   }

   printf("after for loop");






    return 0;
}