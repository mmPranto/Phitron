#include<stdio.h>

void print(int n,int x)
{
    if(n<=0)
    {
       
        return;
    }
    else if(n>1)
    {
        printf("%d ",n);
    }
    else
    {
        printf("%d",n);
    }


   
  print(n-1,x);
   
}

int main()
{
    int n;
    scanf("%d",&n);

    print(n,1);



    return 0;
}

