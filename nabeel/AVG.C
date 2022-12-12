#include <stdio.h>
#include <conio.h>

void main(void)
{
	/* Program to find average of array variable values */
	int num[10];
	int a;
	int sum=0;
	float avg;

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

	avg = sum/a ;

	printf("\naverge value of the numbers = %.2f",avg);


	getch();
}