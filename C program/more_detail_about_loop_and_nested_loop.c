#include<stdio.h>

int main()
{
    int count=0;


    for(int i=0;i<3;i++)
    {
    
        for(int j=0;j<6;j++)
        {
            for(int k=0;k<10;k++)
            {
                count++;
            }

        }
        
    
    }

    printf("%d",count);





    return 0;
}

//180 iteration