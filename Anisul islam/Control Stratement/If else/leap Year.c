#include<stdio.h>
int main ()
{
    while(1)
    {

    int a;
    printf("Choice Your Value  = ");
    scanf("%d",&a);

        if(a%100!=0 && a%4==0)
        printf("Leap Year\n");

    else
        printf(" Not Leap Year\n ");
   }
}

