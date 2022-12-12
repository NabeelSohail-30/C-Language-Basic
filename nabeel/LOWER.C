#include <stdio.h>
#include <conio.h>

void main(void)
{
	char name[25];
	int len,pos,asc,upcs;

	clrscr();
	printf("enter name in upper case to change in lower case : ");
	gets(name);

	len = 0;
	while(name[len] != '\0')
	{
		len++;
	}

	for(pos=0;pos<len;pos++)
	{
		/* asc is integer variable
		name[pos] is character
		if we assign character value into integer varaible
		then C will store the ASCII code of that character
		*/

		asc = name[pos];

		/* Check if ASC character is between 65-90 (A-Z) */
		if(asc>=65 && asc <=90)
		{
			asc = asc + 32;     /* Plus 32 to make Lower case */
		}

		printf("%c",asc);


	}


	getch();
}