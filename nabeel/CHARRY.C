#include <stdio.h>
#include <conio.h>

void main(void)
{
	char ch[10];
	int a;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("\nenter character %d : ",a+1);
		ch[a] = getche();
	}
	ch[a]='\0';

	printf("\n");
	for(a=0;a<=9;a++)
	{
		printf("%c\t",ch[a]);
	}

	printf("\n\n Print using %s",ch);

	getch();
	return;

	clrscr();
	printf("Example of Carriage Return and Line Feed");
	gotoxy(1,12);printf("My Name is Sohail");
	printf("%c",13);  /* Carriage Return (Begining of Row) */
	getch();
	printf("%c",10); /* Line Feed (Next Row) */
	getch();
	gotoxy(1,15); printf("My Name is Raheel");
	getch();
	printf("\n");
	getch();
	gotoxy(1,18); printf("My Name is Nabeel");
	printf("%c%c",13,10);
	getch();
}



