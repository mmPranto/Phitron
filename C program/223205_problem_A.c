#include<stdio.h>

// int sum(int x,int y)
// {
//     int z=x+y;
//     printf("%d",z);
// }

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
   // sum(a,b);

   int *p,*q;
   p=&a;
   q=&b;

   int z=*p+*q;

   printf("%d",z);



    return 0;
}