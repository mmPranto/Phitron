#include<stdio.h>
int main()
{
    //pattern-1
    int n=5;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }

     //pattern-2
    // for(int i=n;i>=1;i--)
    // {
    //     for(int j=i;j>=1;j--)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    


    //pattern-3
    //  for(char i='A';i<('A'+n);i++)
    //  {
    //     for(char j='A';j<=i;j++)
    //     {
    //         printf("%c ",i);
    //     }
    //     printf("\n");
    //  }



    //pattern-4
    for(int i=1;i<=n;i++)
    {
        for(int j=(n-i);j>=1;j--)
        {
            printf("-");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        for(int j=(n-i);j>=1;j--)
        {
            printf("-");
        }
       
        printf("\n");
    }


    return 0;
}