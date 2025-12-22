#include<stdio.h>

// int swap(int x,int y)
// {
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     printf("%d %d",x,y);
// }

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    // swap(a,b);
     

     int *p,*q,*temp;
     p=&a;
     q=&b;
     temp=&p;
     p=&q;
     q=&temp;

     printf("%d %d",*p,*q);


    return 0;
}