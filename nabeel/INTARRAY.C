#include <stdio.h>
#include <conio.h>

void main(void)
{
	int num[5];
	int a,b;

	clrscr();

	for(a=0;a<=4;a++)
	{
		printf("\nenter number %d: ",a+1);
		scanf("%d",&num[a]);
	}

	for(b=0;b<=4;b++)
	{
		printf("\n%d",num[b]);
	}

	getch();
}