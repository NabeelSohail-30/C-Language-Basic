#include <stdio.h>
#include <conio.h>

void main(void)
{
	char name[25];
	int length;

	clrscr();

	printf("enter your name : ");
	gets(name);

	length = strlen(name);

	printf("\nyou entered name = %s",name);
	printf("\nthe length of the string you entered is =%d",length);

	getch();
}