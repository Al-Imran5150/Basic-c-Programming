#include<stdio.h>
int main()
{
   int n,sum=0;
   int i;
   printf("Enter your Value = ");
   scanf("%d",&n);
   for(i=1; i<=n; i=i+2)
   {
     printf("%d + ",i);
      sum = sum + i;
   }
      printf("\nSum = %d",sum);


}