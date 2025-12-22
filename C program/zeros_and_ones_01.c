#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int N;

    int zc=0;
    int oc=0;

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);

        if(N==0)
        {
            zc+=1;
        }
        else
        {
            oc+=1;
        }
    }

    printf("%d %d",zc,oc);

    





    return 0;
}