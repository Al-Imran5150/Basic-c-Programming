#include <stdio.h>

int main()
{

int a,b,sub;

printf("input first and second value of the properties\n");

scanf("%d%d",&a,&b);

sub=b-a;

 if (sub>0) printf("Profit!");

else if(sub<0) printf("Loss!");

else printf("nothing gained or lost!");

return(0);
}
