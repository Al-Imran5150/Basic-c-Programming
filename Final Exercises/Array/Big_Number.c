#include<stdio.h>
int main()
{
    int ar[20];
    int i,n;
    int max;
    printf("How Many Numbers = ");
    scanf("%d",&n);
    printf("\ninput Your Numbers = ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
     
   max=ar[0];
   for(i=1; i<n; i++)
   {
       if(max < ar[i])
        max=ar[i];
   }
   printf("Maximum Number is = %d",max);
 return 0;
}