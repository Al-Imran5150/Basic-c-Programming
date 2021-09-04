#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0;
    int i,j,r;
    printf("type Your Value = ");
    scanf("%d",&num);
    for(i=1,j=1; i<=num; i++,j++)
    {
       
           printf("%d^%d +",i,j);
           sum = sum + pow(i,j);
   
    }
   printf("your Result = %d",sum);
  
}