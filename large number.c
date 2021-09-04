#include<stdio.h>
int main()
{

    int a,b;
    printf("Enter a number  = ");
    scanf("%d %d",&a,&b);

    if (a>b)
        printf("A is big",a);
    else if (b>a)
        printf(" B is big",b);
    else
        printf ("equal");
}
