#include <stdio.h>
#include <conio.h>
void main(void)
{
	char ch;
	clrscr();
	printf("type any character ");
	ch=getche();
	if(ch=='y' || ch=='Y')
	{
		printf("\n you entered correct charecter %c",ch);
	}
	else
	{
		printf("\n you did not enter y");
	}
	getch();



}