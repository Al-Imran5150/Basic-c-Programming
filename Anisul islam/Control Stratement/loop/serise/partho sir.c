#include<stdio.h>
int main ()
{
    int n,i=1,s=1,sum=1;
    printf("Type Your Value = ");
    scanf("%d",&n);
    while(sum<n)
{
        if(i%2!= 0)
        {
        sum=sum+4;
        }
        if(i%2==0)
        {
        sum=sum+2;
        }
        s=s+sum;
         printf("%d ",sum);
    i++;
}
    printf("your result %d ",s);
}

