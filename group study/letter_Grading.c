#include<stdio.h>
int main()
{
   int mark;
   printf("Enter Your Marks = ");
   scanf("%d",&mark);
if(mark<=100 && mark>=80)
    printf("\nYour Grade is A+");
else if(mark<=79 && mark>=70)
    printf("\nYour Grade is A");
else if(mark<=69 && mark>=60)
    printf("\nYour Grade is A-");
else if(mark<=59 && mark>=50)
    printf("\nYour Grade is B");
else if(mark<=49 && mark>=40)
    printf("\nYour Grade is C");
else if(mark<=39 && mark>=33)
    printf("\nYour Grade is D");
else if(mark<=32 && mark>=0)
    printf("\nYour Grade is F");
else
    printf("\nInvalid Your Grade");
}