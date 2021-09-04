#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Choice Your Value  = ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("a number is big");
    else if (b>a && b>c)
    printf("b number is big");
    else
     printf("c number is big ");

}
