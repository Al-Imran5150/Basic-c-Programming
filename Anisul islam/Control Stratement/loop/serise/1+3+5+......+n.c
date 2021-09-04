#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Type Your Value = ");
    scanf("%d",&n);
    printf("1+3+5+7............+%d ",n);
    for (i=1; i<=n; i=i+2)
    {
        sum =sum+i;
    }
    printf("=%d",sum);
}
