#include<stdio.h>
int main()
{
    int num,n,sum=0;
    int i,r,temp;
    printf("type Your Value = ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
       r = temp%10;
       sum=sum+r;
       temp=temp/10;
    }
   printf("your Result = %d",sum);

}
