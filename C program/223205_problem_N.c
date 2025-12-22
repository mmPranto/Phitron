#include<stdio.h>

void shift(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count+=1;
            
        }
        else 
        {
            printf("%d ",a[i]);
        }
        
    }

    for(int i=0;i<count;i++)
    {
        printf("0 "); 
    }

}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    shift(a,n);





    return 0;
}


