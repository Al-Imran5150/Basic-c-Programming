#include<stdio.h>
int main ()
{
    char num;
    printf("Type Your number  = ");
    scanf("%d",&num);

        if(num<=100 && num>=80)
        printf("Your Grade is A+\n");
                if(num<=79 && num>=70)
        printf("Your Grade is A\n");
            if(num<=69 && num>=60)
        printf("Your Grade is B\n");
            if(num<=59 && num>=50)
        printf("Your Grade is C\n");
            if(num<=49 && num>=40)
        printf("Your Grade is D\n");

        else if (num<39)
         printf(" Fail\n ");

}
