#include<stdio.h>
int main ()
{
    int sum=0,temp,num,r;
    printf("Type Your value = ");
    scanf("%d",&num);
    temp=num;
   while(temp!=0)
          {
              r=temp%10;
              sum = sum + r*r*r ;
              temp=temp/10;
          }
          if (num==sum)
        printf("Armstrong number");
        else
            printf("  Not Armstrong number");

}
