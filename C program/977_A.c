#include<stdio.h>

int main()
{
    long long n;
    scanf("%lld",&n);

    int k;
    scanf("%d",&k);

    int i=0;

    while(i<k)
    {
        if(n%10==0)
        {
            n/=10;
        }
        else 
        {
            n-=1;
        }
        i++;
    }

    printf("%lld",n);





    return 0;
}