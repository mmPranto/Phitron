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
    int count=0;
    int t,b,l,r;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            if(i-1>=0)
            {
                t=a[i-1][j];
            }
            else
            {
                t=0;
            }

            if(i+1<n)
            {
                b=a[i+1][j];
            }
            else
            {
                b=0;
            }

            if(j-1>=0)
            {
                l=a[i][j-1];
            }
            else
            {
                l=0;
            }

            if(j+1<m)
            {
                r=a[i][j+1];
            }
            else
            {
                r=0;
            }

            


            if(a[i][j]>t && a[i][j]>l && a[i][j]>r && a[i][j]>b)
            {
                 count+=1;
                 printf("%d %d\n",i+1,j+1);
            }
            
        }
    }

    printf("%d",count);


    


    


   return 0;
}