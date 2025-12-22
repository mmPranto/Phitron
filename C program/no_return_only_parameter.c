#include<stdio.h>

void add(int a,int b)
{
   int sum=a+b;

   printf("%d\n",sum);
   return ;
}

void alphacheck(char c)
{
    if('a'<=c && c<='z')
    {
        printf("Lower\n");
    }
    else
    {
        printf("Upper\n");
    }
}

int main()
{
    add(10,20);

    alphacheck('F');


    return 0;
}