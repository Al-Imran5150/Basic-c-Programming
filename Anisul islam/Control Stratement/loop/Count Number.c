#include<stdio.h>
int main ()
{
    int count,num;
    printf("Type Your value = ");
    scanf("%d",&num);
   while(num!=0)
          {
              num= num/10;
              ++count;
          }

        printf("Your Result = %d",count);

}
