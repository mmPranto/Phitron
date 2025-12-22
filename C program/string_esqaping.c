#include<stdio.h>
int main()
{
    char str[]="Bangladesh \t is a \"beautiful\" cou\\ntry";  // esqap sequence    \"   \"

    fputs(str,stdout);




    return 0;
}