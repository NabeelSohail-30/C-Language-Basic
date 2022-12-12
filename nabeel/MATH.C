#include <conio.h>
#include <stdio.h>

void main (void)
{

	int  a, b, sum, mul, div, subt ;

	clrscr();

	a=20;
	b=40;
	sum= a+b;
	subt=b-a;
	mul=b*a;
	div=b/a;

	printf("the sum of %d and %d = %d",a,b,sum);
	printf("\nthe difference between %d and %d = %d",b,a,subt);
	printf("\nthe product of %d and %d = %d",a,b,mul);
	printf("\nthe qotient of %d by %d = %d",b,a,div);
	getch();
}