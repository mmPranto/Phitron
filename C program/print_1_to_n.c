#include<stdio.h>

void fun(int x,int n)
{
    if(x>n)
    {
        return ;
    }


    printf("%d\n",x);

    printf("Before function call,current x=%d\n",x);
    fun(x+1,n);
    printf("after function call,current x=%d\n",x);
}

int main()
{
    printf("Before function call in main\n");
    int n=5;
    fun(1,6);
    printf("after main function call in main\n");


    return 0;
}