#include <stdio.h>
#include <conio.h>

void main(void)
{
	char name[25];
	int  a,left;

	clrscr();
	printf("enter name : ");
	gets(name);

	printf("\nenter number of characters to be pick from Left Side : ");
	scanf("%d",&left);

	printf("\n");

	/* Calculate Length */
	a = 0;
	while(name[a] != '\0')
	{
		a++;
	}

	/* Check if Value of Left is greater than Length (a) then
	   assign Length (a) to Left varibale */
	if(left>a)
	{
		left = a;
	}

	/* clrscr(); */

	for(a=0;a<left;a++)
	{
		printf("%c",name[a]);
	}


	getch();
}