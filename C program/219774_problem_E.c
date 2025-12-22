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

    int m=INT_MAX;
    int position;

    for(int i=0;i<n;i++)
    {
        if(m>a[i])
        {
            m=a[i];
            position=i;

        }
    }

    printf("%d %d",m,position+1);





    return 0;
}