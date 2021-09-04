#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Input Your Number = ");
   scanf("%d %d %d",&a,&b,&c);

   if(a>b && a>c)
      printf("first number is Big");
   if(b>c && b>a) 
      printf("Second number is Big");
   if(c>a && c>b) 
      printf("Third number is Big");  
   else
      printf("Number Are Equal"); 
  
}