#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a = 10;
    int x=a++;
    --x;
    a--;
    int y=--x;


    printf("%d",y--);





    return 0;
}