#include <stdio.h>
#include <conio.h>

void main(void)
{
	int t,r,a,m;

	clrscr();
	printf("enter table number : ");
	scanf("%d",&t);
	printf("\nenter table range : ");
	scanf("%d",&r);


	for(a=1;a<=r;a++)
	{
		   m = (t*a) ;
		   printf("%d*%d = %d\n",t,a,m);
	}
	getch();




}