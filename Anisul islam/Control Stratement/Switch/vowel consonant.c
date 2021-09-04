#include<stdio.h>
int main()
{
    int ch;
    printf("Type Your Letter =");
    scanf("%c",&ch);

    switch (ch)
    {
        case 'a' :
        case 'e' :
        case 'o' :
        case 'i'  :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I'  :
        case 'O' :
        case 'U' :
        printf("Vowel\n");
        break;

        default :
        printf("Consonant\n");
    }
}
