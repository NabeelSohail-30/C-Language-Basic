#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(void)
{

	char ch[20];
	clrscr();
	printf("enter your name");
	gets(ch);
	if(strcmp(ch,"nabeel")==0)
	{
		printf("you entered correct name");
	}
	else
	{
		printf("you entered wrong name");
	}
	getch();
}