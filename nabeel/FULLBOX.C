#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a,x,y;
	char n[7];

	clrscr();

	printf("enter name of 4 words \n");
	gets(n);
	clrscr();

	for(x=1;x<=76;x++)
	{
		gotoxy(x,1);
		printf("%s",n);
		gotoxy(x,25);
		printf("%s",n);

		for(a=0;a<=20000;a++);
		gotoxy(x,1);
		printf(" ");
		gotoxy(x,25);
		printf(" ");

	}

	for(y=1;y<=25;y++)
	{
		gotoxy(1,y);
		printf("%s",n);
		gotoxy(76,y);
		printf("%s",n);

		for(a=0;a<=20000;a++);
		gotoxy(1,y);
		printf("    ");
		gotoxy(76,y);
		printf("    ");

	}



	getch();

}