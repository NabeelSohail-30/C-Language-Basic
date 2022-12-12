#include <stdio.h>
#include <conio.h>

void main(void)
{
	/*Program to find single character from the array variable*/
	char ch[10];
	char find,ch2;
	int a,pos=0;
	int foundvalue=0;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("\nenter character %d : ",a+1);
		ch[a] = getche();
	}

	printf("\nenter the character to find : ");
	find = getche();

	for(a=0;a<=9;a++)
	{
		if(ch[a] == find)
		{
			ch2 = ch[a];
			foundvalue=1;    /* 1 means Found it */
			pos = a+1;    /* store element position */
			break;
		}
	}

	if(foundvalue==1)
	{
		printf("\nthe character %c you searched found at position %d",ch2,pos);
	}
	else
	{
		printf("\nthe character %c you searched not found",find);
	}
	getch();
}