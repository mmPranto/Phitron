#include<stdio.h>
int main()
{
    int mat[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    int c,r;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(mat[i][j]==1)
            {
                c=j+1;
                r=i+1;
                break;
            }
        }
    }
    int move=0;
    if(c==3 )
    {
        move+=0;
    }
    else if(c==1)
    {
        move+=2;
    }
    else if(c==2)
    {
        move+=1;
    }
    else if(c==4)
    {
        move+=1;
    }
    else if(c==5)
    {
        move+=2;
    }

    if(r==3)
    {
        move+=0;
    }
    else if(r==1)
    {
        move+=2;
    }
    else if(r==2)
    {
        move+=1;
    }
    else if(r==4)
    {
        move+=1;
    }
    else if(r==5)
    {
        move+=2;
    }
    
    printf("%d",move);



    return 0;
}