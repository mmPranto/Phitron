 #include<stdio.h>
 int main()
 {
    char str[10];

    // scanf("%[^\n]s", str);

    // gets(str);   depreicated

    fgets(str, sizeof(str),stdin);

    // printf("%s",str);

   // puts(str);   //depricated

   fputs(str,stdout);





    return 0;
 }