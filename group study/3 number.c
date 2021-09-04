#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three numbers  = ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
        printf("A is big");
    else if (b>a && b>c)
        printf(" B is big");
    else if (c>a && c>b)
        printf ("C is big");
        else
             printf ("Numbers Are Equal ");

}
