#include <stdio.h>
#include <conio.h>

void main(void)
{
	int num[10];
	int max,a;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("enter number : ");
		scanf("%d",&num[a]);
	}

	max = num[0];
	for(a=0;a<=9;a++)
	{
		if(num[a] > max)
		{
			max = num[a];
		}

	}

	printf("\ngreatest value is = %d",max);

	getch();
}