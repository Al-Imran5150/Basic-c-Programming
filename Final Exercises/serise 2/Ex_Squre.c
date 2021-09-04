#include<stdio.h>
int main()
{
   int n,mul=0;
   int i;
   printf("Enter your Value = ");
   scanf("%d",&n);
   for(i=1; i<=n; i=i+1)
   {
     printf("%d*%d + ",i,i);
      mul = mul + i*i;
   }
      printf("n\nSum = %d",mul);

}