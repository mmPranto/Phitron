#include<stdio.h>

void add()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("%d\n",sum);
}
void mul(int x,int y)
{
    printf("%d\n",x*y);
}

int main()
{
    mul(add() , 10);



    return 0;
}