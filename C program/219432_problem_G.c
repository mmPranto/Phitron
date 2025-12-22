#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    int x;

    for(int i=1;i<=t;i++)
    {
        scanf("%d",&x);
        long long fact=1;

        for(int j=1;j<=x;j++)
        {
            fact*=j;
        }

        printf("%lld\n",fact);


    }




    return 0;
}