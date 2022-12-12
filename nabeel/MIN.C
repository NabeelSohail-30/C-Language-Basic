#include <stdio.h>
#include <conio.h>

void main(void)
{
	int num[10];
	int min,a;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("enter number : ");
		scanf("%d",&num[a]);
	}

	min = num[0];
	for(a=0;a<=9;a++)
	{
		if(num[a] < min)
		{
			min = num[a];
		}

	}

	printf("\nsmalllest value is = %d",min);

	getch();
}