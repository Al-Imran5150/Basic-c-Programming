#include<stdio.h>

int main()
{
char g, n;
printf("input the grade:");
scanf("%c", &g);

switch (g)
{

case 'E': printf("Excellent\n");
 break;
case 'V': printf("Very good\n");
break;
case 'G': printf("Good\n");
break;
case 'A': printf("Average\n");
 break;
case 'F': printf("Fail\n");
 break;
default:
     printf("Invalid grade\n");
 break;
}
return 0;
}
