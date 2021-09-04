
#include <stdio.h>

int main()
{

    float Maths,Phy,Chem;

    printf("Input the marks of applicant for Maths, Phy, Chem respectively\n ");

    scanf( "%f%f%f",&Maths,&Phy,&Chem);

    if((Maths>=65 && Phy>=55 && Chem>=50 && (Maths+Phy+Chem)>=180)||((Maths+Phy)>=140)||((Maths+Chem)>=140))


        printf("Eligible for admission\n");

        else

            printf(" not Eligible\n");



        return(0);

    }
