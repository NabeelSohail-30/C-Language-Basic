#include <stdio.h>
#include <conio.h>

void main(void)
{
	/*Program to find multiple characters from the character array variable*/
	char ch[10];
	char find,ch2;
	int a;
	int foundvalue=0;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("\nenter character %d : ",a+1);
		ch[a] = getche();
	}

	printf("\n\nenter the character to find : ");
	find = getche();

	printf("\n");

	for(a=0;a<=9;a++)
	{
		if(ch[a] == find)
		{
			printf("\nthe character %c you searched found at position %d",ch[a],a+1);
			foundvalue=1;
		}
	}
	if(foundvalue == 0)
	{
		printf("\nthe character %c you searched not found",find);
	}

	getch();
}