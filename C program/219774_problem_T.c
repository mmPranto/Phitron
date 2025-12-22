#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int sum_main=0;
    int sum_sec=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum_main+=a[i][j];
            }
            if(i+j==n-1)
            {
                sum_sec+=a[i][j];
            }
        }
    }

    int diff = sum_main - sum_sec;
    if(diff<0)
    {
        printf("%d",diff*(-1));
    }
    else
    {
        printf("%d",diff);
    }

   


    return 0;
}