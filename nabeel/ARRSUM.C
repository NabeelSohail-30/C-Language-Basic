#include <stdio.h>
#include <conio.h>

void main(void)
{
	/* Program to sum array variable values */
	int num[10];
	int a;
	int sum=0;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("enter number : ");
		scanf("%d",&num[a]);
	}

	for(a=0;a<=9;a++)
	{
		sum = sum + num[a];
	}

	printf("sum of 10 numbers = %d",sum);


	getch();
}