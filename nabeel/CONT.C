#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a;

	clrscr();

	for(a=1;a<=20;a++)
	{
		if(a==10)
			continue;


		printf("%d\t",a);
	}
	getch();


}