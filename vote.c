#include<stdio.h>
int main ()
{
    int a;
    printf("type your Age = ");            //We also know that the appropriate time
    scanf("%d",&a );                             // to vote is 18 years
    if (a>=18)
        printf("Suitable For Voting");
    else
        printf(" Not Suitable For Voting");
    return 0 ;
}
