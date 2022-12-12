#include <stdio.h>
#include <conio.h>

void main(void)
{
	char n[6];
	int x,y;
	int d;

	clrscr();

	printf("enter name of 6 words \n");
	gets(n);
	clrscr();

	for(x=1;x<=74;x++)
	{

		gotoxy(x,8);

		printf(" %s",n);

		for(d=0;d<=20000;d++)
		{

		}

	}
	getch();


}