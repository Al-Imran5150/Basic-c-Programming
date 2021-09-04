#include<stdio.h>
int main()
{
   int i,j,num;
   int sum=0;
   num = 4;
   for(i=1; i<=4; i++)
   {
       for(j=1; j<=i; j++)
       {
           printf("%d +",j);
           sum = sum + j;
       }
       
   }
   
   printf("\nYour Result is = %d",sum);
}