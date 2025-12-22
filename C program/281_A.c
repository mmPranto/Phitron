#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000]="abc";
    scanf("%s",str);

   
   
    int x=strlen(str);
    for(int i=0;i<x;i++)
    {
        if(str[i]>=97 && i==0)
        {
            str[i]=str[i]-32;
            
        }
        
    }

    printf("%s",str);





    return 0;
}