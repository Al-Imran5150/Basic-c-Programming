#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>0)
     printf("n is 1");
    else if(num<0)
     printf("n is -1");
    else
        printf("num is 0");
    return 0;
}
