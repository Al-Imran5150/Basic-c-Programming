#include<stdio.h>
int main()
{
   int a[5][5]={{2,4},{3,4}};
   int i,j;
   int *p;
   p = &a[0][0];
   for(i=0; i<2; i++)
   {
       for(j=0; j<2; j++)
       {
           printf("%d ",*p);
           
       }
       printf("\n");
       p++;
   }

}