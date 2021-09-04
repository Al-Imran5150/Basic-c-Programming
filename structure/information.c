#include<stdio.h>
struct person
{
   char name[20];
   int age;
   float salary;
};

int main()
{

    int i,n;
     struct person student[10];
     printf("Student numbers = ");
     scanf("%d",&n);
    for(i=0; i<n; i++)
    {  
       printf("\nEnter student %d Name = ",i+1);
        //scanf("%s",&student[i].name);
        fflush(stdin);
        gets(student[i].name);
        
        printf("Enter student %d age = ",i+1);
        scanf("%d",&student[i].age);
        printf("Enter student %d salary = ",i+1);
        scanf("%f",&student[i].salary);
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        printf("\nName %d = %s",i+1,student[i].name);
        printf("\nstudent %d age = %d",i+1,student[i].age);
        
        printf("\nstudent %d salary = %0.1f",i+1,student[i].salary);
        printf("\n\n");
    }
     
}
       
    
   