#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);


    int x,y;


    for(int i=1;i<=t;i++)
    {
        scanf("%d%d",&x,&y);
        int odd_sum=0;

        if(x<y)
        {  //x=50 y=60
            for(int j=x+1;j<y;j++)
            {
                if(j%2!=0)
                {
                    odd_sum+=j;
                }
                
            }
            
        }

        else
        {
            //x=40 y=30
            for(int k=x-1;k>y;k--)
            {
                if(k%2!=0)
                {
                    odd_sum+=k;
                }
            }
        }

        printf("%d\n",odd_sum);
    }






    return 0;
}