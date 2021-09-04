#include<stdio.h>
int main()
{
    int i;
    int sum;
for(i=1; i<=100; i=i+4 ){

    for(i=1; i<=100; i=i+2)
        sum = sum+i;
}
    printf("%d",sum);

}
