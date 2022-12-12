#include <stdio.h>
#include <conio.h>

void main(void)
{
	int num[1000];
	int arraysize;
	int a;

	clrscr();

	do
	{
		printf("\nEnter Array Size: ");
		scanf("%d",&arraysize);
	} while(arraysize >1000 || arraysize<=0);

	for(a=0;a<arraysize;a++)
	{
		printf("enter number %d : ",a+1);
		scanf("%d",&num[a]);
	}

	for(a=0;a<arraysize;a++)
	{
		printf("%d\t",num[a]);
	}

	getch();
}