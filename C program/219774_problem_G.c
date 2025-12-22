#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=0;

    for(int i=0,j=n-1;i<=j;i++,j--)
    {
        if(a[i]==a[j])
        {

        }
        else
        {
            flag=-1;
        }
    }

    if(flag==-1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }



    return 0;
}