#include<stdio.h>
int main()
{
    while(1)
    {
    int a,b,c;
    printf("Enter Three numbers  = ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
        printf("A is big\n");
    else if (b>a && b>c)
        printf(" B is big\n");
    else if (c>a && c>b)
        printf ("C is big\n");
        else
             printf ("Numbers Are Equal\n ");
    }
}
