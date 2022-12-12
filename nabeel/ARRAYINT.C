#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a[5],b;
	clrscr();

	a[0]=1;
	a[1]=2;
	a[2]=4;
	a[3]=2;
	a[4]=8;

	printf("%d",a[0]);
	printf("\n%d",a[1]);
	printf("\n%d",a[2]);
	printf("\n%d",a[3]);
	printf("\n%d\n",a[4]);

	printf("by using loop\n");
	for(b=0;b<=4;b++)
	{
		printf("\n%d",a[b]);
	}

	getch();
}