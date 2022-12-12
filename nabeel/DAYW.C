#include <stdio.h>
#include <conio.h>

void main(void)
{
	int dayweek;

	clrscr();

	printf("enter day number (1-7) :");
	scanf("%d",&dayweek);

	if(dayweek==1)
	{
		printf("sunday");
	}
	else if(dayweek==2)
	{
		printf("monday");
	}
	else if(dayweek==3)
	{
		printf("tuesday");
	}
	else if(dayweek==4)
	{
		printf("wednesday");
	}
	else if(dayweek==5)
	{
		printf("thursday");
	}
	else if(dayweek==6)
	{
		printf("friday");
	}
	else if(dayweek==7)
	{
		printf("saturday");
	}
	else if(dayweek<1 || dayweek>7)
	{
		printf("invalid number");
	}

	getch();
}