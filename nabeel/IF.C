#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a, b;
	clrscr();
	printf("enter two numbers to check\n");

	scanf("%d%d",&a, &b);

	if(a > b)
	{
		printf("%d is greater than %d ",a,b);
	}

	if(a < b)
	{
		printf("%d is less than %d ",a,b);
	}

	if(a == b)
	{
		printf("%d and %d are equal",a,b);
	}

	getch();



}