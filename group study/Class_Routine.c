#include<stdio.h>
int main()
{
    int time;
    printf(" My Daily Routine ");
    printf("\nType Your Time = ");
    scanf("%d",&time);

if(time>=2 && time<=3)
      printf("C programming");
else if(time>=4 && time<=5)    
      printf("Data Structure"); 
else if(time>=7 && time<=8)
      printf("Digital Electronics");
else if(time>=9 && time<=10)
      printf("Math II");
else if(time>=11 && time<=12)    
      printf("English"); 
else    
      printf("Invalid Time");

}