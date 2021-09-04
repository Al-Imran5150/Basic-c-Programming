#include<stdio.h>
int main()
{
   int i,j,n;
   int c;
  
   scanf("%d",&n);
    c=0;
   for(i=0; i<n; i++)
   {
       for(j=0; j<n; j++)
       
      {
         printf("* ");
       c++;
      } 
      printf("\n");
   }
printf(" %d    %d ",n,c);

}