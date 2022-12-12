#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a,x,y;


	clrscr();

	gotoxy(20,5);
	printf("%c",218);

	for(a=0;a<=20000;a++);

	for(x=21;x<=59;x++)
	{
		gotoxy(x,5);
		printf("%c",196);
		for(a=0;a<=20000;a++);

	}
	for(a=0;a<=20000;a++);

	gotoxy(60,5);
	printf("%c",191);

	for(a=0;a<=20000;a++);

	for(y=6;y<=19;y++)
	{
		gotoxy(60,y);
		printf("%c",179);
		for(a=0;a<=20000;a++);
	}

	for(a=0;a<=20000;a++);

	gotoxy(60,20);
	printf("%c",217);

	for(a=0;a<=20000;a++);

	for(x=59;x>=21;x--)
	{
		gotoxy(x,20);
		printf("%c",196);
		for(a=0;a<=20000;a++);
	}

	for(a=0;a<=20000;a++);

	gotoxy(20,20);
	printf("%c",192);

	for(a=0;a<=20000;a++);

	for(y=19;y>=6;y--)
	{
		gotoxy(20,y);
		printf("%c",179);
		for(a=0;a<=20000;a++);
	}

	getch();

}