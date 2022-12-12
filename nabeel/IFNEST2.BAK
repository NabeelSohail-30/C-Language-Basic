#include<stdio.h>
#include<conio.h>
void main (void)
{
	float a,b,c,d,e,obt,perc;
	char gr[5],ch;

start:
	clrscr();
	scanf("%f,%f,%f,%f,%f",&a,&b,&c,&d,&e);

	obt = (a+b+c+d+e);
	perc = (obt/500)*100;

	if(perc >=80)
	{
		strcpy(gr,"a+");
	}
	else if(perc >=70 && perc <80)
		{
			strcpy(gr,"a");
		}
		else if(perc >=60 && perc <70)
			{
				strcpy(gr,"b");
			}
			else if(perc >=50 && perc <60)
				{
					strcpy(gr,"c");
				}
				else if(perc <50)
					{
						strcpy(gr,"f");
					}





	printf("\nobtained marks = %.2f",obt);
	printf("\npercentage = %.2f",perc);
	printf("\ngrade = %s",gr);

	printf("\n press y to continue,any other key to exit");

	ch=getch();

	if(ch == 'y')
	{
		goto start;
	}


}