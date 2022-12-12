#include<stdio.h>
#include<conio.h>

void main (void)

{
	char a[20];
	char ch;
	clrscr();
	printf("enter your name ?");
	gets(a);
	printf("\nmy name is %s",a);
	ch = getch();
	printf("\nYou Pressed %c key ",ch);
	getch();



}