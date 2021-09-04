#include<stdio.h>
int main()
{
    int num,fact=1;
    int i;
    printf("type Your Value = ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
       fact = fact * i;
    }
   printf("your Result = %d",fact);

}