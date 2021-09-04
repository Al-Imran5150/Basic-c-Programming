#include<stdio.h>
int main()
{
    
  int a[10][10],b[10][10],c[10][10];
  int i,j;
  int row,col;
  
  printf("Enter Your Row and collam numbers = ");
  scanf("%d %d",&row,&col);



   printf("\nPrintf Your A matrix\n");

  for(i=1; i<=row; i++)
  {
      for(j=1; j<=col; j++)
      {
           printf("A[%d][%d] = ",i,j);
           scanf("%d",&a[i][j]);
      }
         
      printf("\n");
  }
  

 printf("Printf Your B matrix\n");
   
  for(i=1; i<=row; i++)
  {
      for(j=1; j<=col; j++)
      {
           printf("B[%d][%d] = ",i,j);
           scanf("%d",&b[i][j]);
      }
         
      printf("\n");
  }

   printf("Your A matrix: \n");
for(i=1; i<=row; i++)
 {
     
    for(j=1; j<=col; j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
 }

  printf("Your B matrix: \n");
for(i=1; i<=row; i++)
 {
    
    for(j=1; j<=col; j++)
    {
        printf("%d ",b[i][j]);
    }
    printf("\n");
 }
 
 
 for(i=1; i<=row; i++)
 {
    for(j=1; j<=col; j++)
    {
        c[i][j] = a[i][j] + b[i][j];   
    }
 }  
printf("Your Sum matrix: \n");
 for(i=1; i<=row; i++)
 {
     
    for(j=1; j<=col; j++)
    {
        printf("%d ",c[i][j]);
    }
    printf("\n");
 }

}