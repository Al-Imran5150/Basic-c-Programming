#include <stdio.h>
#include <stdlib.h>

int main()
{
int ang1,ang2,ang3,sum;
printf("Input three angles:\n");
scanf("%d%d%d", &ang1,&ang2,&ang3);
sum = ang1+ang2+ang3;
if(sum==180)
{
printf("Is a triangle");
} else
{
printf("The triangle is not valid");
}
return 0;
}
