#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int oc=0,ec=0,pc=0,nc=0;

    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);

        if(x%2==0)
        {
            ec++;
        }
        else
        {
             oc++;
        }

        if(x>0)
        {
            pc++;
        }
        else if (x<0)
        {
            nc++;
        }
        else
        {
            //nothing
        }

    }


    printf("Even: %d\n",ec);
    printf("Odd: %d\n",oc);
    printf("Positive: %d\n",pc);
    printf("Negative: %d\n",nc);








    return 0;
}