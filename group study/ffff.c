#include<stdio.h>
int main ()
{
    int a,b;
    printf("Input Your Number =");
    scanf("%d %d ",&a,&b );
    if (a>b)
        printf("%d is big Rima ",a);
    else if (a<b)
        printf("%d is big Santa",b);
    else
       printf("Equal Number");
}
