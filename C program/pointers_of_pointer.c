#include<stdio.h>
int main()
{
    // int a=5;

    // int *x=&a;

    // int **y=&x;


    // printf("%d %d",**y,*x);

    int x=50,y=10;
    int *p,*q;

    p=&x;
    q=&y;

    q=p;

    printf("%d",*q);



    return 0;
}