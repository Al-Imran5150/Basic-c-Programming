#include<stdio.h>
void letter_grad(int a);
int main()
{
   int mark;
   printf("Enter your mark = ");
   scanf("%d",&mark);
   letter_grad(mark);
}
void letter_grad(int a)
{
    if(a>=80 && a<=100)
    
        printf("Your grade is  A+");
    
  else if(a>=70 && a<=79)
    
        printf("Your grade is  A");
       
   else if(a>=60 && a<=69)
    
        printf("Your grade is  A-"); 
          
   else  if(a>=50 && a<=59)
    
        printf("Your grade is  B");
    
   else if(a>=40 && a<=49)
    
        printf("Your grade is  C");

   else if(a>=33 && a<=39)
    
        printf("Your grade is  D");
     
    else if (a>=0 && a<=32)  

         printf("Your grade is  F");  
   else 
       printf("Invalid Grade") ;
             
}