#include<stdio.h>

//int a,b;
int add()
{

    int a,b;
    scanf("%d %d",&a,&b);

 
    int sum = a + b ;

    return sum;
}

double getpie()
{
    return 3.14159;
}

int main()
{
  

   

    printf("%d\n",add());
    printf("%lf\n",getpie());


   


    return 0;
}