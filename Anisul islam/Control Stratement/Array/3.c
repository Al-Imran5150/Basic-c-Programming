
#include<stdio.h>
int main()
{
    int a[5],sum=0,i,n;
    printf("Enter Five Numbers = ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0; i<=4; i++)
    {
        sum=sum+a[i];
    }

    printf("%d",sum);

}
