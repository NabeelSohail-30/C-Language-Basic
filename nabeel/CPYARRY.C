#include <stdio.h>
#include <conio.h>

void main(void)
{
	int num1[10];
	int num2[10];
	int a;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("enter number : ");
		scanf("%d",&num1[a]);
	}

	for(a=0;a<=9;a++)
	{
		num2[a] = num1[a];
	}

	printf("values of 1st array are\n");
	for(a=0;a<=9;a++)
	{
		printf("%d\t",num1[a]);
	}

	printf("values of 2nd array are\n");
	for(a=0;a<=9;a++)
	{
		printf("%d\t",num2[a]);
	}

	getch();
}