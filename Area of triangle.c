#include<stdio.h>
int main ()
{
    float base,height,area;
    printf("Type of a base number =");
    scanf("%f ",&base);

    printf("\nType of a Height number =");
    scanf("%f ",&height);

    area = (0.5) *base*height;
    printf("Area of Triangle =%.3f",area);
    return 0 ;

}

