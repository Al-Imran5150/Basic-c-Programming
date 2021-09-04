#include<stdio.h>
int main()
{
   char str[100];
   int i,vowel,consonant,digit,other;
   int words=1,ch;
   printf("Type Your Letter = ");
   gets(str);
   i=vowel=consonant=digit=other=0;
   while((ch=str[i])!='\0')
   {
    if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u'
      || ch=='A' || ch=='E' || ch=='I' ||ch=='O' || ch=='U') 
             vowel++;

    else if(ch>='a' && ch<='z'||ch>='A' && ch<='Z')
            consonant++;
    else if (ch>='0' && ch<='9')
            digit++;
    else if (ch==' ')
           words++;
    else 
    other++;
       
      i++;
   }
         printf("\nvowel is : %d",vowel);
         printf("\nconsonant is : %d",consonant);
         printf("\ndigit is : %d",digit);
         printf("\nwords is : %d",words);
         printf("\nother is : %d",other);

}