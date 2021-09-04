#include<stdio.h>
int main()
{
    int num[100],max,min,n,i;
    printf("how many number = ");
    scanf("%d",&n);
    printf("Enter your values = ");
   for(i=0; i<n; i++)
   {
       scanf("%d",&num[i]);
   }
   min=num[0];
   for(i=1; i<n; i++)
   {
       if(min>num[i])
        min=num[i];
   }
   printf("Your Minimum Value Is = %d",min);
}
