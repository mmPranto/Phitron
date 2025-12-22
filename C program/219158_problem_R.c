#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int year=0,month=0,day=0;

    while(n>=365)
    {
        year+=1;
        n-=365;
        
    }

    while(n>=30)
    {
        month+=1;
        n-=30;

    }

    while(n>=1)
    {
        day+=1;
        n-=1;
    }

    printf("%d years\n",year);
    printf("%d months\n",month);
    printf("%d days\n",day);



    return 0;
}