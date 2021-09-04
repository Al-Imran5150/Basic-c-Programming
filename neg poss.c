#include<stdio.h>
int main ()
{
    int a;
    printf("type your value = ");
    scanf("%d",&a );
    if (a>0)
        printf("Positive");
    else if (a<0)
        printf("negative");
    else
        printf("0");
    return 0 ;
}
