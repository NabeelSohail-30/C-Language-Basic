#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a,x,y;


	clrscr();

	for(x=21;x<=59;x++)
	{
		gotoxy(x,5);
		printf("%c",196);
		gotoxy(x,20);
		printf("%c",196);
	}

	for(y=6;y<=19;y++)
	{
		gotoxy(20,y);
		printf("%c",179);
		gotoxy(60,y);
		printf("%c",179);
	}

	gotoxy(60,5);
	printf("%c",191);

	gotoxy(60,20);
	printf("%c",217);

	gotoxy(20,5);
	printf("%c",218);

	gotoxy(20,20);
	printf("%c",192);


	getch();

}