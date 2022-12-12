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


	/* Start of Processing Bubble Sort */
	for(a=0;a<=8;a++)
	{
		for(b=0;b<=8-a;b++)
		{
			/* Start of Processing */
			if(num[b] > num[b+1])
			{
				swap = num[b];
				num[b] = num[b+1];
				num[b+1]=swap;
			}
			/* End of Processing */
		}

	}
	/* End of Processing Bubble Sort */

	for(a=0;a<=9;a++)
	{
		printf("\n%d",num[a]);
	}

	getch();
}

a = 30
b = 40

c = a
a = b
b = c

