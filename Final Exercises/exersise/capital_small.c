#include<stdio.h>
int main()
{
   char ch;
   printf("Input Your Letter = ");
   scanf("%c",&ch);

   if('a'<=ch && 'z'>=ch)
      printf("Small letter");
   else if('A'<=ch && 'Z'>=ch) 
      printf("Capital Letter");
      else 
      printf("not Letter");
   
}