#include<stdio.h>
int main()
{

  int a[5][5],b[5][5];
  int i,j;
  //int row,col;

  //printf("Enter Your Row and collam numbers = ");
  //scanf("%d %d",&row,&col);



   //printf("\nPrintf Your A matrix\n");

  for(i=1; i<5; i++)
  {
      for(j=1; j<5; j++)
      {
           printf("A[%d][%d] = ",i,j);
           scanf("%d",&a[i][j]);
      }

      printf("\n");
  }


   printf("Your A matrix: \n");
   for(i=1; i<5; i++)
 {
    for(j=1; j<5; j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
 }


// printf("Printf Your B matrix\n");

  for(i=1; i<5; i++)
  {
      for(j=1; j<5; j++)
      {
           printf("B[%d][%d] = ",i,j);
           scanf("%d",&b[i][j]);
      }

      printf("\n");
  }

printf("Your B matrix: \n");
 for(i=1; i<5; i++)
 {
    for(j=1; j<5; j++)
    {
        printf("%d ",b[i][j]);
    }
    printf("\n");
 }



}
