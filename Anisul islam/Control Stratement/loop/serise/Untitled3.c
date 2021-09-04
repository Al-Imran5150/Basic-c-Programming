#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Type Your Value = ");
    scanf("%d",&n);
    printf("1*2*3*...........*%d ",n);
    for (i=1; i<=n; i=i+1)
    {
        sum =sum*i;
    }
    printf("=%d",sum);
}
