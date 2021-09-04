#include<stdio.h>
int main()
{
    while(1)
    {
    int i,n,sum=1;
    printf("Type Your Value = ");
    scanf("%d",&n);
    printf("1*1x1*2x2*............x%d ",n);
    for (i=1; i<=n; i=i+1)
    {
        sum =sum*i*i;
    }
    printf("=%d\n\n\n",sum);
    }
}
