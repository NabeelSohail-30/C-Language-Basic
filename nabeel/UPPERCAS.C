#include <stdio.h>
#include <conio.h>

void main(void)
{
	char name[25];
	int len,pos,asc;

	clrscr();
	printf("enter name in lower case to change in upper case : ");
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

		if(asc >=97 && asc <= 122)
		{
			asc = asc - 32;
		}

		printf("%c",asc);

	}



	getch();
}