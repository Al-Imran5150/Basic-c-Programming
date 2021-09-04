#include<stdio.h>
int main()
{ 
   int digit;
   printf("Enter Your Digit = ");
   scanf("%d",&digit);
   switch(digit)
   {
        case 1 : 
        printf("One\n");
        break;
        case 2 : 
        printf("Two\n");
        break;
        case 3 : 
        printf("Three\n");
        break;
        case 4 : 
        printf("Four\n");
        break;
        case 5 : 
        printf("Five\n");
        break;
      default:
      printf("no digit");
   }


}