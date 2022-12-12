#include <stdio.h>
#include <conio.h>

void main(void)
{
	/*Program to find multiple values from the array variable*/
	int num[10];
	int foundnum[10],pos[10],foundpos=0;
	int a,find,num2;
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
			foundnum[foundpos] = num[a];
			pos[foundpos]=a+1;
			foundvalue=1;
			foundpos++;
		}
	}

	if(foundvalue==1)
	{
		for(a=0;a<foundpos;a++)
		{
			printf("\n Found Value %d at Position %d",foundnum[a],pos[a]);
		}
	}
	else
	{
		printf("\nthe value %d you searched not found",find);
	}

	getch();
}