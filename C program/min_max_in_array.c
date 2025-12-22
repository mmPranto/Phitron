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

    int min= INT_MAX;
    int max=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }

        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("min : %d\n",min);
    printf("max : %d\n",max);







    return 0;
}