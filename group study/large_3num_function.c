#include<stdio.h>
void large(int a,int b,int c);
int main()
{
   int num1,num2,num3;
   printf("Enter your Three Values = ");
   scanf("%d %d %d",&num1,&num2,&num3);
   large(num1,num2,num3);
}


void large(int a,int b,int c)
{
    if(a>b && a>c)
    {
        printf("Large Number is %d ",a);
    }
    else if(b>c && b>a)
    {
        printf("Large Number is %d ",b);
    }
     else if(c>a && c>b)
    {
        printf("Large Number is %d ",c);
    }
    else 
    printf("Number are Equal"); 
}