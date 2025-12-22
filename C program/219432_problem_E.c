#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);

    long long max=INT_MIN;

    long long m;

    for(int i=0;i<n;i++)
    {
        scanf("%lld",&m);
        if(max<m)
        {
            max=m;
        }
    }

    printf("%lld",max);






    return 0;
}