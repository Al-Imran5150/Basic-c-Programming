#include<stdio.h>
int main()
{
    
  int a[10][10];
  int i,j;
  int b[10][10];
  int k,l;


   printf("Printf Your A matrix\n");

  for(i=1; i<3; i++)
  {
      for(j=1; j<4; j++)
      {
           printf("A[%d][%d] = ",i,j);
           scanf("%d",&a[i][j]);
      }
         
      printf("\n");
  }

 printf("\n\nPrintf Your B matrix\n");
   
  for(k=1; k<3; k++)
  {
      for(l=1; l<4; l++)
      {
           printf("B[%d][%d] = ",k,l);
           scanf("%d",&b[k][l]);
      }
         
      printf("\n");
  }


  printf("Your A matrix: \n");
   for(i=1; i<3; i++)
 {
    for(j=1; j<4; j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
 }


printf("Your B matrix: \n");
 for(k=1; k<3; k++)
 {
    for(l=1; l<4; l++)
    {
        printf("%d ",b[k][l]);
    }
    printf("\n");
 }
}

 