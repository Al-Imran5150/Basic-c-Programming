#include<stdio.h>
//void pos_neg(int a);
void pos_neg(int a)
{
    if(a>0)
    {
        printf("Positive Number");
    }
    else
     printf("Negative Number");
}



int main()
{
   int num;
   printf("Enter your Value = ");
   scanf("%d",&num);
   pos_neg(num);
}
