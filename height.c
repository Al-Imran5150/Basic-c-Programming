
#include <stdio.h>

int main()
{
float num;
printf("enter the height :");
scanf("%f",&num);
if(num<150 && num>0)
printf("the person is dwarf");
else if (num>150 && num<165)
printf("the person has average height");
else if (num>=165 && num <=185)
printf("the person is taller");
else
printf(" wrong information");
return 0;
}
