#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a;

	clrscr();
	for(a=0;a<=255;a++)
	{
		printf("%d=%c ",a,a);
	}
	getch();

}