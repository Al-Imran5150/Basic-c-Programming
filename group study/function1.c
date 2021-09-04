#include<stdio.h>
void even_odd(int n);
int main()
{
   int n;
   printf("Enter Your Value = ");
   scanf("%d",&n);
   even_odd(n);
   
}

void even_odd(int n)
{
   if(n%2==0)
   {
      printf("Thr Number Is even");
   }
   else
   printf("Thr Number Is Odd");

}