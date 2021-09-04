#include<stdio.h>
int main()
{
    int i,sum=0,n, num[100];
     printf("How many  numbers = ");
     scanf("%d",&n);
     printf("Enter 5 num = ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
   for(i=0; i<n; i++)
   {
       sum= sum + num[i];
   }

    printf("Your sum is = %d\n",sum);
    printf("Your avg is = %.2f\n",(float)sum/n);
}
