#include <stdio.h>
#include <conio.h>

void main(void)
{
	/*Program to find single value from the array variable*/
	int num[10];
	int a,find,num2,pos=0;
	int foundvalue=0;

	clrscr();

	for(a=0;a<=9;a++)
	{
		printf("enter number %d : ",a+1);
		scanf("%d",&num[a]);
	}

	printf("enter the value to find : ");
	scanf("%d",&find);

	for(a=0;a<=9;a++)
	{
		if(num[a] == find)
		{
			num2 = num[a];
			foundvalue=1;    /* 1 means Found it */
			pos = a+1;    /* store element position */
			break;
		}
	}

	if(foundvalue==1)
	{
		printf("\nthe value %d you searched found at position %d",num2,pos);
	}
	else
	{
		printf("\nthe value %d you searched not found",find);
	}
	getch();
}