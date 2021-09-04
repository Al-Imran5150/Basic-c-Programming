#include<stdio.h>
int main ()
{
    int a, b,c ;
    float average;
    printf("type your number = ");
    scanf("%d %d %d" ,&a ,&b ,&c);
    average = (a+b+c)/3;
    printf("Your average Number = %.1f",average);

}
