#include <stdio.h>
#include <conio.h>

void main(void)
{
	char name[25];
	int a,startloop,stpos,totchar,endloop;

	clrscr();
	printf("enter name : ");
	gets(name);

	printf("enter starting position : ");
	scanf("%d",&stpos);

	printf("enter total characters : ");
	scanf("%d",&totchar);

	/* Calculate Length */
	a=0 ;
	while(name[a] != '\0')
	{

		a++;
	}

	if(totchar > a || (stpos+totchar) > a)
	{
		totchar = a-stpos+1;
	}

	printf("\n");

	endloop = 0;
	startloop = stpos-1;

	while(endloop <totchar)
	{
		printf("%c",name[startloop]);
		startloop++;
		endloop++;
	}

	printf("\n");

	for(endloop=0;endloop<totchar;endloop++)
	{
		printf("%c",name[stpos-1]);
		stpos++;

	}

	getch();
}