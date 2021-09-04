#include<stdio.h>
int main()
{
   int n,mul=1;
   int i;
   printf("Enter your Value = ");
   scanf("%d",&n);
   for(i=1; i<=n; i=i+1)
   {
     printf("%d x ",i);
      mul = mul * i;
   }
      printf("n\nMultiply = %d",mul);


}