#include<stdio.h>
int main()
{
    int n=0,i,j,sum=0;
    printf("input Your Value = ");
    scanf("%d",&n);
  
    for(i=1; i<=n; i++)
    {
       for(j=1; j<=i; j++)
       {
          printf("%d + ",j);
          sum +=  j;
       }
      
    }    
   
  
    printf("\n Sum = %d",sum);
    
 return 0;
}