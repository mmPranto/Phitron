#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];

    char b[1000];

    char c[1000];

    scanf("%s %s %s",a,b,c);

    // finding the smallest value

   if(strcmp(a,b)>0)
   {
       if(strcmp(b,c)>0)
       {
        printf("%s\n",c);
       }
       else if(strcmp(b,c)<0)
       {
        printf("%s\n",b);
       }
       else
       {
        printf("%s\n",c);
       }
   }

   else if(strcmp(a,b)<0)
   {
      if(strcmp(a,c)>0)
       {
        printf("%s\n",c);
       }
       else if(strcmp(a,c)<0)
       {
        printf("%s\n",a);
       }
       else
       {
        printf("%s\n",c);
       }
   }

   else
   {
      if(strcmp(a,c)>0)
       {
        printf("%s\n",c);
       }
       else if(strcmp(a,c)<0)
       {
        printf("%s\n",a);
       }
       else
       {
        printf("%s\n",c);
       }
   }


   // print largest

      if(strcmp(a,b)>0)
   {
       if(strcmp(a,c)>0)
       {
        printf("%s\n",a);
       }
       else if(strcmp(a,c)<0)
       {
        printf("%s\n",c);
       }
       else
       {
        printf("%s\n",c);
       }
   }

   else if(strcmp(a,b)<0)
   {
      if(strcmp(b,c)>0)
       {
        printf("%s\n",b);
       }
       else if(strcmp(b,c)<0)
       {
        printf("%s\n",c);
       }
       else
       {
        printf("%s\n",c);
       }
   }

   else
   {
      if(strcmp(a,c)>0)
       {
        printf("%s\n",a);
       }
       else if(strcmp(a,c)<0)
       {
        printf("%s\n",c);
       }
       else
       {
        printf("%s\n",c);
       }
   }



    




    return 0;
}