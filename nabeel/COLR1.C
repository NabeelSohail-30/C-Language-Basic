#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a;

	clrscr();

	for(a=0;a<=15;a++)
	{
		textcolor(a);
		cprintf("color number %d",a);
		printf("\n");
	}

	gotoxy(1,18);
	textcolor(GREEN);
	cprintf("This is my green color");

	/* For blinking*/
	gotoxy(30,18);
	textcolor(GREEN+BLINK);
	cprintf("name is nabeel");


	getch();

}