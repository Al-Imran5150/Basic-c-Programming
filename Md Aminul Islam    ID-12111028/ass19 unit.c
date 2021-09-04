#include<stdio.h>

int main()
{
int unit;
char str1[10], str2[10];
float c, su =0, cu;
printf("input the customer id, name and unit consumed: ");
scanf("%s %s %d", &str1, &str2, &unit);

if(unit<200){
cu = 1.20;
}else if(unit>=200 && unit<400){
cu = 1.50;
}else if(unit>=400 && unit<600){
cu = 1.80;
}else if(unit>=600){
cu = 2.00;
}
c = unit * cu;

if(c>400){
su = c * 0.15;
}else{
su = 0;
}
printf("customer IDNO: %s\n", str1);
printf("customer Name: %s\n", str2);
printf("unit consumed: %d\n", unit);
printf("amount charges @Rs. %.2f per unit: %.2f\n", cu, c);
printf("surchage amount: %.2f\n", su);
printf("net amount paid by the customer: %.2f\n", c+su);

return 0;
}
