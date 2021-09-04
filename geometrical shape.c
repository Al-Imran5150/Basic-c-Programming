#include<stdio.h>
int main()
{
int choice,r,l,w,b,h;
float area;
printf("1 for area of the circle\n");
printf("2 for area of the rectangle\n");
printf("3 for area of the triangle\n");
printf("enter your choice:"
);
scanf("%d",&choice);
switch(choice)
{

case 1 :
     printf("input the radious of the circle:");
scanf("%d",&r);
area=3.14*r*r;
break;
case 2:
     printf("input the length and width of the rectangle:");
scanf("%d%d",&l,&w);
area=l*w;
break;

case 3:
    printf("input the base and height of the triangle:");
scanf("%d %d",&b,&h);
area=.5*b*h;
break;

default :
    printf("invalid choice\n"); break;

}
printf("area is %f ",area);
}
