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

		printf("Key Pressed: %c, Code: %d\n",ch,ch);


		if(ch == 27)
		{
			break;
		}
	} while(1==1);
}