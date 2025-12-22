#include<stdio.h>

//returntype function_name(pera meters)
// {
//
//      return xyz;
// }

int add(int a,int b)
{
    printf("Function called\n");
    int sum = a + b ;

    return sum;
}

int main()
{
   // int result = add(10,20);


   printf("Before\n");

    printf("%d\n",add(20,20));

    printf("after\n");


    return 0;
}