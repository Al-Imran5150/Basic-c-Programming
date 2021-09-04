#include<stdio.h>
int main()
{
   int A[10][10],B[10][10],result[10][10];
   int i,j,k,sum=0;
   int r1,r2,cl1,cl2;
  
   printf("Enter your First row and col number = ");
   scanf("%d %d",&r1,&cl1);
   printf("Enter your Second row and col number = ");
   scanf("%d %d",&r2,&cl2);
   



   printf("\nPrintf Your A matrix\n");

  for(i=0; i<=r1; i++)
  {
      for(j=0; j<=cl1; j++)
      {
           printf("A[%d][%d] = ",i,j);
           scanf("%d",&A[i][j]);
      }
         
      printf("\n");
  }
 
  printf("\nPrintf Your B matrix\n");

  for(i=0; i<=r2; i++)
  {
      for(j=0; j<=cl2; j++)
      {
           printf("B[%d][%d] = ",i,j);
           scanf("%d",&B[i][j]);
      }
         
      printf("\n");
  }

   
  for(i=0; i<r1; i++)
  {
      for(j=0; j<cl2; j++)
      {
          for(k=0; k<cl1; k++)
          {
              sum = sum + A[i][k]*B[k][j];
          }
          result[i][j]= sum;
          sum = 0;
      }
  }

printf("Your A matrix: \n");
   for(i=0; i<r1; i++)
 {
    for(j=0; j<cl1; j++)
    {
        printf("%d ",A[i][j]);
    }
    printf("\n");
 }

printf("Your B matrix: \n");
   for(i=0; i<r2; i++)
 {
    for(j=0; j<cl2; j++)
    {
        printf("%d ",B[i][j]);
    }
    printf("\n");
 }
printf("Your Result matrix: \n");
   for(i=0; i<r1; i++)
 {
    for(j=0; j<cl2; j++)
    {
        printf("%d ",result[i][j]);
    }
    printf("\n");
 }


}