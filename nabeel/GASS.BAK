#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(void)
{
	char ps[10];
	char n[15],m[10];
	char ch;
	int mt,prv,crv,un,tu;
	float gs,st,am;

password:

	clrscr();

	printf("enter password\n");
	gets(ps);
	if(strcmp(ps,"nabeel123")== 0)
	{
	startprog:

		clrscr();

		printf("\nconsumer name : ");
		gets(n);

		printf("\nbill month : ");
		gets(m);

		printf("\nmeter number : ");
		scanf("%d",&mt);

		printf("\nprevious unit : ");
		scanf("%d",&prv);

		printf("\ncurrent unit : ");
		scanf("%d",&crv);


		un=(crv-prv);



		if(un >= 500)
		{
			gs = 5 ;
		}
		else if(un >= 400 && un < 500)
		{
			gs = 3.5 ;
		}
		else if(un >= 300 && un < 400)
		{
			gs = 3 ;
		}
		else if(un >= 200 && un < 300)
		{
			gs = 2 ;
		}
		else if(un < 200)
		{
			gs = 1.5 ;
		}


		tu =(gs * un);


		if(tu >= 2000)
		{
			st = (tu*7)/100 ;
		}
		else
		{
			if(tu >= 1000 && tu < 2000)
			{
				st = (tu*5)/100 ;
			}
			else
			{
				if(tu < 1000)
				{
					st = (tu*3.5)/100 ;
				}
			}
		}



		am = (tu+ st);


		clrscr();

		gotoxy(30,3);
		printf("consumer name = %s",n);
		gotoxy(5,5);
		printf("bill month = %s",m);
		gotoxy(55,5);
		printf("meter number = %d",mt);
		gotoxy(15,7);
		printf("previous unit = %d",prv);
		gotoxy(45,7);
		printf("current unit = %d",crv);
		gotoxy(30,9);
		printf("unit consumed = %d",un);
		gotoxy(10,11);
		printf("gas charges = %.2f",gs);
		gotoxy(45,11);
		printf("gas price of total unit = %d",tu);
		gotoxy(30,13);
		printf("sales tax = %.2f",st);
		gotoxy(30,15);
		printf("amount payable = %.2f",am);

		gotoxy(30,18);
		printf("do you want to continue");
		gotoxy(37,19);
		ch = getch();
		if(ch=='y')
		{
			goto startprog ;
		}
	}
	else
	{
		printf("you entered incorrect password");
		getch();
		goto password ;
	}




}


