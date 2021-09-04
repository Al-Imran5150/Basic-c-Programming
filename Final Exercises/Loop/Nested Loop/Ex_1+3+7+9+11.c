#include<stdio.h>
int main()
{
    int num,sum=0;
    int i=0,n,r=1;
    printf("type Your Value = ");
    scanf("%d",&n);
    while(r<n)
    {
       
         if(i%2==0)
        {
          r=r+2;
        }
       
       else if(i%2!=0)
       {
          r=r+4;
       }
      
        printf("%d + ",r);

        i++;
       sum= sum + r ;
    }
   printf("\nYour Sum = %d",sum);
}