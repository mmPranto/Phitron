#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    scanf("%s",a);

    int x=0,y=0;

    int len=strlen(a);

    for(int i=0;i<len;i++)
    {
        if(a[i]>90)
        {
            x+=1;
        }
        
        else 
        {
            y+=1;
        }



    }

   // printf("%d %d",x,y);

    if(x>=y)
    {
        for(int i=0;i<len;i++)
        {
            if(a[i]>90)
            {
                printf("%c",a[i]);
            }
            else
            {
                printf("%c",a[i]+32);
            }
        }
    }

    else
    {
        for(int i=0;i<len;i++)
        {
            if(a[i]>90)
            {
                printf("%c",a[i]-32);
            }
            else
            {
                printf("%c",a[i]);
            }
        }

    }






    return 0;
}