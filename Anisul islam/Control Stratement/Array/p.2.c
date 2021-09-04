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
   max=num[0];
   for(i=1; i<n; i++)
   {
       if(max<num[i])
        max=num[i];
   }
   printf("Your Maximum Value Is = %d",max);
}
