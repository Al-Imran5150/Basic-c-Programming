#include<stdio.h>
int main ()
{
    int arr1[30],arr2[30],i,n;
    printf("How many Numbers In array1 = ");
    scanf("%d",&n);
     printf(" Numbers In array1 = \n");
     for(i=0; i<n; i++)
     {
         scanf("%d",&arr1[i]);
     }
     printf(" array1 =" );
      for(i=0; i<n; i++)
     {
         printf(" %d ",arr1[i]);
     }
for(i=0; i<n; i++)
{
    arr2[i]=arr1[i];
}
printf(" array2 =  ");
for(i=0; i<n; i++)
{
    printf(" array2 = %d ",arr2[i]);
}
}
