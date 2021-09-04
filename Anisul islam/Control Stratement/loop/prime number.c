#include<stdio.h>
int main ()
{
    int count=1,i,num;
    printf("Type Your value = ");
    scanf("%d",&num);
    for(i=2 ; i<num ; i++)
          {
             if(num%i==0)
             count++ ;
          }
    if (count==1)
        printf("Prime number");
        else
            printf("Not Prime Number");
}
