#include<stdio.h>

int fun(int x[],int n)  
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=x[i];
    }
    return sum;
}

int main()
{
    int a[10]={1,8,4,5,3,2,4,1,5,3};

    int res=fun(a,10);

    printf("%d",res);



    return 0;
}