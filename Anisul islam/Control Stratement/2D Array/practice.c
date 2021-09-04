#include<stdio.h>
int main()
{   
   int i,j;
   int num[3][3];
   int num2[3][3];
   int sum[3][3];
   printf("Your A matrix:\n");
   for(i=0; i<3; i++)
   {
       for(j=0; j<3; j++)
       {
           printf("num[%d][%d] = ",i,j);
           scanf("%d",&num[i][j]);  
       }
       printf("\n");
   }

    printf("Your B matrix:\n");
   for(i=0; i<3; i++)
   {
       for(j=0; j<3; j++)
       {
           printf("num2[%d][%d] = ",i,j);
           scanf("%d",&num2[i][j]);  
       }
       printf("\n");
   }
   
    printf("Your A matrix:\n");
    for(i=0; i<3; i++)
   {
       for(j=0; j<3; j++)
       {
           printf("%d ",num[i][j]);
       }
       printf("\n");
   }
    printf("Your B matrix:\n");
    for(i=0; i<3; i++)
   {
       for(j=0; j<3; j++)
       {
           printf("%d ",num2[i][j]);
       }
       printf("\n");
   }

   for(i=0; i<3; i++)
   {
       for(j=0; j<3; j++)
       {
           sum[i][j] = num[i][j]+num2[i][j];
       }
   }
printf("Your Sum matrix:\n");
    for(i=0; i<3; i++)
   {
       for(j=0; j<3; j++)
       {
           printf("%d ",sum[i][j]);
       }
       printf("\n");
   }

}
