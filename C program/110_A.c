#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);

    int ld=0;

    while(n>0)
    {
        if(n%10==4 || n%10==7)
        {
            ld+=1;

        }
        
        n/=10;


    }

    if(ld==4 || ld==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }







    return 0;
}