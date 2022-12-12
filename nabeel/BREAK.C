#include <stdio.h>
#include <conio.h>

void main(void)
{
	int dayweek;
	int a;
	int b=10;


	clrscr();

	printf("enter day number (1-7) :");
	scanf("%d",&dayweek);
	a=0;
	do
	{
		if(dayweek==5)
		{
			b = b +2;
			printf("\n Value of b = % d",b);
			break;
		}

		printf("%d ",a);
		a++;
	} while (a!=20);
	printf("\n");

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