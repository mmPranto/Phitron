#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int min=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }

   int frequency=0;

    for(int i=0;i<n;i++)
    {
        if(min==a[i])
        {
            frequency+=1;
        }
        

    }

    if(frequency%2==0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }



    return 0;
}