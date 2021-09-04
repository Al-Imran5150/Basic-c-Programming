#include<stdio.h>
int main()
{
    int a[30],max,n,i,m;
    printf("Enter N = ");
    scanf("%d",&n);
    printf("Enter Your Values =");
    for(i=0; i<n; i++)
    {
         scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
            max=a[i];
    }
       printf("maximum Number is %d ",max);

}
