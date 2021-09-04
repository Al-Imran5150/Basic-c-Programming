#include<stdio.h>
int main()

 {
   int class,roll,age;
   printf("  Apply For Debate Competition\n  ");
   printf("\nEnter Your Class = ");
   scanf("%d",&class);
   printf("Enter Your Roll  = ");
   scanf("%d",&roll);
   printf("Enter Your age  = ");
   scanf("%d",&age);
   if(class>=9) 
   {
       if(roll<=5)  
       //printf("\nYou Are Selected");
      
       {
           if(age>=14)
             printf("\nYou Are Selected");
           else 
           printf("\nyou are not selected");
       }

       //printf("\nYou Are Selected");
       else 
       printf("\nyou are not selected");
   }

  else 
  printf("you are not selected");

 }  







