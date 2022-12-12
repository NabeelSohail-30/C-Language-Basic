#include <stdio.h>
#include <conio.h>

void main(void)
{
	char name[20];
	int len,rev;

	clrscr();

	printf("enter name you want to reverse : ");
	gets(name);

	len=0 ;
	while(name[len] != '\0')
	{
		len++;
	}

	for(rev=(len-1);rev>=0;rev--)
	{
		printf("%c",name[rev]);
	}

	getch();
}
