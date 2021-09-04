#include<stdio.h>
int main()
{
    while(1)
    {
    int i,j,n,sum=1;
    printf("Type Your Value = ");
    scanf("%d",&n,&n);
    printf("1*2x2*3x3*4............x%d ",n);
    for (i=1; i<=n; i=i+1)
    {
        sum =sum*i*j;
        i=i+1;
        j=j+1;

    }
    printf("=%d\n\n\n",sum);
    }
}
