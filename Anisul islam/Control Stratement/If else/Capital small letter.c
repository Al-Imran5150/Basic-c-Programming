#include<stdio.h>
int main ()
{
    char ch;
    printf("Choice Your Letter  = ");
    scanf("%c",&ch);

        if(ch>='a' && ch<= 'z')
        printf("Small letter\n");


    else if (ch>='A' && ch<= 'Z')
        printf(" Capital letter\n ");

        else
         printf(" Not a letter\n ");

}
