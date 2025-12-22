#include<stdio.h>
int main()
{
    long long a,b,c;
    long long d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    if(a+b-c==d)
    {
        printf("YES");
        // printf("\n1");
    }
    
    else if(a-b+c==d)
    {
        printf("YES");
        // printf("\n3");
    }
    
    else if(a+b*c==d)
    {
        printf("YES");
        // printf("\n5");
    }
    
    else if(a*b+c==d)
    {
        printf("YES");
        // printf("\n7");
    }
    
    else if(a-b*c==d)
    {
        printf("YES");
        // printf("\n9");
    }
    
    else if(a*b-c==d)
    {
        printf("YES");
        // printf("\n11");
    }
   
    else
    {
        printf("NO");
    }





    return 0;
}