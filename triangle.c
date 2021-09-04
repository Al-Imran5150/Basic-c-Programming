#include<stdio.h>

int main()
{
int a, b, c;
printf("input the data:");
scanf_s("%d %d %d", &a, &b, &c);
if(a==b && b==c){
printf("this is an equilateral triangle\n");
}else if(a!=b && b!=c && a!=c){
printf("this is an scalene triangle\n");
}else{
printf("this is an isosceles triangle\n");
}
return 0;
}
