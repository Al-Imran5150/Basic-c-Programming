#include<stdio.h>

int main()
{
    char ch;
    printf("input a character:");
    scanf_s("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("the alphabet is a vowel\n");
    }
    else
    {
        printf("the alphabet is a consonant\n");
    }
    return 0;
}
