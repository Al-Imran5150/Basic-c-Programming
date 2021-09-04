#include <stdio.h>
int main()
{
	int c1,c2;

	printf("Input your Number for X and Y coordinate : ");
	scanf("%d %d",&c1,&c2);

	if( c1 > 0 && c2 > 0)
	  printf("(%d,%d)  numbers are First quandrant.\n",c1,c2);
	else if( c1 < 0 && c2 > 0)
	  printf("(%d,%d)  numbers are Second quandrant.\n",c1,c2);
	else if( c1 < 0 && c2 < 0)
	  printf("(%d,%d)  numbers are Third quandrant.\n",c1,c2);
	else if( c1 > 0 && c2 < 0)
	  printf("(%d,%d)  numbers are Fourth quandrant.\n",c1,c2);
	else if( c1 == 0 && c2 == 0)
	  printf("(%d,%d)  numbers are origin.\n",c1,c2);

}
