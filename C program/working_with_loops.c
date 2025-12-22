#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int number =1 ;
    int sum=0;

    for(int i=1;i<=n;i++)
    {
        printf("%d + %d = ",sum,i);
        sum=sum+i;
        printf("%d\n",sum);
   

    }

    




    return 0;
}
