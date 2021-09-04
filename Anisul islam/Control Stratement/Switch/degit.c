#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    printf("Type Your Operator =");
    scanf("%c",&op);
    printf("Type your value = ");
    scanf("%d %d",&num1,&num2);
    switch (op)
    {
    case '+' :
        {
        printf("Your Result  %d + %d = %d \n",num1,num2,num1+num2);
        }
        break;
        case '-' :
            {

        printf("Your Result  %d - %d = %d \n",num1,num2,num1-num2);
            }
        break;
        case '*' :
            {

        printf("Your Result  %d * %d = %d \n",num1,num2,num1*num2);
            }
        break;
        case '/' :
            {

        printf("Your Result  %d / %d = %d \n",num1,num2,num1/num2);
            }
        break;

        default :
        printf("Invalid\n");
    }
}
