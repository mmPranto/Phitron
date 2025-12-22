// #include<stdio.h>

// void fun(int *x,int n)  
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",*(x+i));
//     }
    
// }

// int main()
// {
//     int a[5]={1,2,3,4,6};

//     fun(a,5);

//     printf("\n");

//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);
//     }



//     return 0;
// }

#include<stdio.h>
#include<string.h>

void fun(char *x,char *y)  
{
    // for(int i=0;i<n;i++)
    // {
    //     printf("%s\n",x);
    // }
    x[0]='c';
    x=strcpy(x,y);
    
}

int main()
{
    char a[10]="air";
    char b[10]="apple";

    fun(a,b);

    printf("%s",a);

    

    return 0;
}