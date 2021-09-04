#include<stdio.h>

int main()
{
    int te;
    printf("input the temperature:");
    scanf_s("%d", &te);
    if(te<0)
    {
        printf("Freezing weather\n");
    }
    else if(te>=0 && te<10)
    {
        printf("very cold weather\n");
    }
    else if(te>=10 && te<20)
    {
        printf("cold weather\n");
    }
    else if(te>=20 && te<30)
    {
        printf("normal in temp\n");
    }
    else if(te>=30 && te<40)
    {
        printf("it's hot");
    }
    else
    {
        printf("it's very hot");
    }
    return 0;
}

