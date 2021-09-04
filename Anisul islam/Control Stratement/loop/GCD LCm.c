#include<stdio.h>
int main ()
{
    int n1,n2,gcd,lcm,rem,num1,num2;
    printf("Type Your value = ");
    scanf("%d %d",&num1,&num2);
   n1 = num1;
   n2 = num2;
   while(n2!=0)
     {
         rem=n1%n2;
         n1=n2;
         n2=rem;
     }
    gcd = n1;
    lcm=(num1*num2)/gcd;
        printf("Your gcd number = %d\n",gcd);

        printf("Your lcm number = %d",lcm) ;
}
