 #include<stdio.h>
 #include<string.h>

 int main()
 {
    char a[100];
    char b[100];
    char c[100];

    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);

    int count=0;

    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i] && b[i]==c[i])
        {
            continue;
        }
        else if(a[i]==b[i] || a[i]==c[i] || b[i]==c[i])
        {
            count+=1;
        }
        else
        {
            count+=2;
        }


       
         

    }

    printf("%d",count);
    
    

   



    return 0;
 }



    

    
    


