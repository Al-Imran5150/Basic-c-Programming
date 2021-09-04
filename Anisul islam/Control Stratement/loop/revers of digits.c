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
              sum = sum*10 + r ;
              temp=temp/10;
          }

        printf("Your Result = %d",sum);

}
