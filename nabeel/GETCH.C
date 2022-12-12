#include <stdio.h>
#include <conio.h>

void main(void)
{
	char ch;
	int a;

	clrscr();

	do
	{
		ch = getch();

		printf("%c",ch);

		/* 13 = ENTER KEY */
		if(ch == 13)
		{
			printf("%c",10); /* LINE FEED */
		}

		if(ch == 27)
		{
			break;
		}
	} while(1==1);
}