#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a;
	int b =15;

	for(a=0;a<=15;a++)
	{
		textbackground(a);
		textcolor(b+BLINK);
		clrscr();

		gotoxy(50,10);
		cprintf("name is nabeel");
		b--;
		getch();
	}
}