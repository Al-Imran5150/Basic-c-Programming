#include<stdio.h>
int main()
{
    int choice;
    float convertedtemp,temp;
    printf("Temperature Conversion menu\n");
    printf("1.Fahrenheit to Celcius\n");
    printf("2.Celcius to Fahrenheit\n");
    printf("Enter Your Choice = ");
    scanf("%d",choice);
            switch(choice)
    {
    case 1 :

            printf("Enter the Fahrenheit Temperature : ");
            scanf("%f",&temp);
           convertedtemp =(temp-32)/1.8;
            printf("Your Celcius number :%f",convertedtemp);
            break;

    case 2 :

            printf("Enter the Celcius Temperature");
            scanf("%f",&temp);
            convertedtemp=(1.8*temp)+32;
            printf("Your Fahrenheit number :%f",convertedtemp);
            break;


    default :
        printf("no anser");
    }


}
