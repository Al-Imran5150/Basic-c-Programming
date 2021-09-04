#include <math.h>



int main() {

char a;

printf("input a character\n");

scanf("%c",&a);

if (a>=48&& a<58 ){printf("Digit\n");}

else if((a>=65&& a<91)||(a>=97&& a<121) ){printf("Alphabet\n");}

else {printf("Especial character\n");}

return(0);

}
