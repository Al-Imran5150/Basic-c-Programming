#include<stdio.h>
int main()
{
    int ar[20];
    int sum=0,i,n;
    printf("How Many Numbers = ");
    scanf("%d",&n);
    printf("\ninput Your Numbers = ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
     for(i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
        // sum = sum + ar[i] ;
    }
   
    for(i=0; i<n; i++)
    {
        sum = sum + ar[i] ;
    }
    
    printf("\n%d",sum);
    
 return 0;
}