#include<stdio.h>
int main()
{
   char ch;
   printf("Input Your Letter = ");
   scanf("%c",&ch);

   if('a'==ch || 'e'==ch || 'i'==ch || 'o'==ch ||
      'u'==ch ||'A'==ch || 'E'==ch || 'I'==ch || 'O'==ch || 'U'==ch)
      printf("Vowel\n");
    else
    printf("Consonant\n");
   
   
}