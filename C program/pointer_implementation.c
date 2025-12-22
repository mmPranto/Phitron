#include<stdio.h>
int main()
{
    int a=5,b=6;
    int *x=&a,*y=&b;
   //dereference
   int temp=*x;
   
   *x=*y;

   *y=temp;

   printf("a = %d\n",a);
   printf("b = %d\n",b);



    return 0;
}