#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int x;
    scanf("%d",&x);

    int pos=-1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                pos=1;
                break;
            }
        }
    }

    if(pos==-1)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }
    



    return 0;
}