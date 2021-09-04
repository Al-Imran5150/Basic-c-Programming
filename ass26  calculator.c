#include<stdio.h>
int main ()
{
    double num,num2;
    char op;
    printf("enter your operator : " );
    scanf("%c",&op);
    printf("Enter Two Number : ");
    scanf("%lf  %lf",&num ,&num2);
    switch (op)

  {

  case '+' :
        printf("%lf + %lf =%lf",num,num2,num+num2);


    case '-' :
        printf("%lf - %lf =%lf",num,num2,num-num2);


    case '/' :
        printf("%lf / %lf =%lf",num,num2,num/num2);


    case '*' :
        printf("%lf * %lf =%lf",num,num2,num*num2);
  }
  return 0 ;
}
