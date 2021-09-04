#include<stdio.h>
int main()
{   
   int n1,n2;
   int sum,sub,mul,dib; 
   char op;
   printf(" My Calculator\n\n ");
   printf("Choice Your Operator = ");
   scanf("%c",&op);
   switch(op)
   {
        case '+':
        {
           printf("input two numbers = ");
           scanf("%d %d",&n1,&n2);
           sum = n1 + n2 ;
           printf("Your Result = %d",sum);
           break;
        }
         case '-':
        {
           printf("input two numbers = ");
           scanf("%d %d",&n1,&n2);
           sub = n1 - n2 ;
           printf("Your Result = %d",sub);
           break;
        }
         case '*':
        {
           printf("input two numbers = ");
           scanf("%d %d",&n1,&n2);
           mul = n1 * n2 ;
           printf("Your Result = %d",mul);
           break;
        }
         case '/':
        {
           printf("input two numbers = ");
           scanf("%d %d",&n1,&n2);
           dib = n1 / n2 ;
           printf("Your Result = %d",dib);
           break;
        }





   }

   
}