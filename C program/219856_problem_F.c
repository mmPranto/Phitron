#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        char str[10000];
        scanf("%s",str);
        
        int count=0;

       int j=0;
       
        while(str[j]!='\0')
        {
            
            count+=1;
            j++;
           
        }

        if((count)<=10)
        {
            fputs(str,stdout);
            printf("\n");
        }

        else
        {
            printf("%c%d%c\n",str[0],count-2,str[count-1]);
        }

        



        
    }
    



    return 0;
}