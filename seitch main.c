#include<stdio.h>
int main ()

{
    int digit;
    printf("Enter your number = ");
    scanf("%d",&digit);

    switch(digit)

    {
    case 0:
        printf("zero\n");
        break;
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four\n");
        break;
    case 6:
        printf("six\n");
        break;
        default :
        printf("no need");
    }
}
