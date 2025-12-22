#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];

    int min=INT_MAX;
    int min_index;
    int max=INT_MIN;
    int max_index;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            min_index=i;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            max_index=i;
        }
    }

    int temp;

    temp=max;
    a[max_index]=min;
    a[min_index]=temp;

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    



    return 0;
}