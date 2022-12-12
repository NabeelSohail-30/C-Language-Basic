#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a;
	int b;
	int c;
	int d;

	d=20;

	clrscr();
	printf("For Loop Example\n");
	for (a=0;a<=10 && d==20;a++)
	{
		printf("%d  ",a);
	}

	printf("\n\n While Loop Example\n");

	b=0;
	while(b<=10 && d==20)
	{
		printf("%d  ", b);
		b++;

	}

	printf("\n\n Do While Loop Example\n");
	c =0;
	do
	{
		printf("%d  ",c);
		c++;
	} while(c<=10 && d==20);

	getch();

}