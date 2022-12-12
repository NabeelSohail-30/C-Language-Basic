#include <stdio.h>
#include <conio.h>

void main(void)
{
	int num[10];
	int a,b,c;
	int swap;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("enter number %d : ",a+1);
		scanf("%d",&num[a]);
	}

	for(a=0;a<=8;a++)
	{
		for(b=0;b<=8-a;b++)
		{
			if(num[b] < num[b+1])
			{
				swap = num[b+1];
				num[b+1] = num[b];
				num[b]=swap;
			}
		}

	}

	for(a=0;a>=9;a++)
	{
		printf("\n%d",num[a]);
	}

	getch();
}