#include<stdio.h>
#include<conio.h>
void main(void)

{
	int a;
	clrscr();
	scanf("%d",&a);
	if(a >= 1 && a<= 5)
	{
		printf("you entered %d",a);
	}
	else
	{
		printf("you enterd invalid number");
	}
	getch();


}