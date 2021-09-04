#include<stdio.h>
int main()
{
   int a;
   printf("Input Your Year = ");
   scanf("%d",&a);
   if(a%100!=0 && a%4==0)
    printf("Leap Year ");
    else
    printf("Not Leap Year ");

}
   