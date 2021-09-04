#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1, psy, chem, ca;
double sum, percen;
char name [20];
printf("Input the Roll Number of the student: ");
scanf("%d", &num1);
printf("Input the Name of the Student: ");
scanf("%s", name);
printf("Input the marks of Physics, Chemistry and Computer Application: \n");
scanf("%d%d%d", &psy, &chem, &ca);
sum = psy + chem + ca;
percen = (psy + chem + ca)/3.0;

printf("Total Marks: %f \n", sum);
printf("Percentage: %f\n", percen);

(percen >= 60) ? printf("Division: First") : ((percen < 60) && (percen >= 48)) ? printf("Division: Second") : ((percen < 48) && (percen >= 36)) ? printf("Division: Pass") : printf("Fail");

return 0;
}
