#include <stdio.h>
#include <conio.h>

void main(void)
{
	const float pi=3.142;
	const int sunday=1;
	const int monday=2;
	int daynumber;


	clrscr();

	printf("Value of Pi = %.3f\n\n",pi);

	printf("Value of Pi now = %.3f",pi);

	printf("\n Enter Day Number: ");
	scanf("%d",&daynumber);

	if(daynumber==sunday)
		printf("Sunday");
	else if(daynumber==monday)
		printf("Monday");


	getch();


}