#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};

    int *p=arr;

    printf("%d %d\n",&arr[0],p);
    printf("%d\n",p+1);

    char a='a';
    char *x=&a;

    printf("%d %d\n",x,x+1);


    return 0;
}