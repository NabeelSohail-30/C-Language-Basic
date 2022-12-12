#include <stdio.h>
#include <conio.h>

void main(void)
{
	int dayweek;

	clrscr();

	printf("enter day number (1-7) :");
	scanf("%d",&dayweek);

	switch(dayweek)
	{
		case 1:
		printf("sunday");
		break;

		case 2:
		printf("monday");
		break;

		case 3:
		printf("tuesday");
		break;

		case 4:
		printf("wednesday");
		break;

		case 5:
		printf("Thursday");
		break;

		case 6:
		printf("Friday");
		break;

		case 7:
		printf("Saturday");
		break;

		default:
		printf("Invalid Number");
	}
	getch();

}