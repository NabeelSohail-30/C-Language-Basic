#include <stdio.h>
#include <conio.h>

void main(void)
{
	int num1[10];
	int num2[10];
	int a,swap;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("enter number : ");
		scanf("%d",&num1[a]);
	}

	for(a=0;a<=9;a++)
	{
		num2[a] = num1[a];
		num1[a] = '\0';
	}

	printf("values of second array are\n");
	for(a=0;a<=9;a++)
	{
		printf("%d\t",num2[a]);
	}

	printf("values of the main array are\n");
	for(a=0;a<=9;a++)
	{
		printf("%d\t",num1[a]);
	}

	getch();
}

