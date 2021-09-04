/* C Program to Print Sum of Odd Numbers from 1 to N */

#include<stdio.h>

int main()
{
  int i, number, Sum = 0;

  printf("\n Please Enter the Maximum Limit Value : ");
  scanf("%d", &number);

  printf("\n Odd Numbers between 0 and %d are : ", number);
  for(i = 1; i <= number; i=i+2)
  {
    Sum = Sum + i;
    printf("%d  ", i);
  }
  printf("\n \n The Sum of Odd Numbers from 1 to %d  = %d", number, Sum);

  return 0;
}
