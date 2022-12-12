#include <stdio.h>
#include <conio.h>

void main(void)
{
	char ch[10];
	char ch2[10];
	int a;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("\nenter character %d : ",a+1);
		ch[a] = getche();
	}

	for(a=0;a<=9;a++)
	{
		ch2[a] = ch[a];
		ch[a] = '\0';
	}

	printf("\n\ncharacters of 1st array are\n");
	for(a=0;a<=9;a++)
	{
		printf("%c\t",ch[a]);
	}

	printf("\n\ncharacters of 2nd array are\n");
	for(a=0;a<=9;a++)
	{
		printf("%c\t",ch2[a]);
	}

	getch();
}