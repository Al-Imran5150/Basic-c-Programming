#include<stdio.h>
int main ()
{
    int fact=1,num;
    int i=1;
    printf("Type Your positive value = ");
    scanf("%d",&num);
    while(i<=num)
    {
        fact = fact * i ;
        printf("Your Value = %d",fact);
        i++;
    }

}