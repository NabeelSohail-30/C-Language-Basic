#include<stdio.h>
#include<conio.h>
void main(void)
{
	int a, b, aa;
	float sal = 15000;
	float tax = 0;
	float per;
	char grade[5]="";
	clrscr();
	printf("enter number one ");
	scanf("%d",&a);
	printf("\nenter second number ");
	scanf("%d",&b);
	printf("Enter your Percentage: ");
	scanf("%f",&per);

	/*

	if(a > b)
	{
		printf("\nvalue of a is greater than b");
	}
	else
	{
		printf("\nvalue of b is greater than a");
	}
	*/

	(a>b) ? (printf("value of a is greater than b")) : (printf("value of b is greater than a"));

	(sal>=15000) ? (tax = (sal*4)/100) : (tax=(sal*3)/100);
	printf("\nSalary is: %f, and Tax is %f",sal,tax);

	(per >=50 && per <60) ? (strcpy(grade,"C")): (strcpy(grade,"Fail"));
	(per>=60 && per<70) ? (strcpy(grade,"B")) : (aa=0);
	(per>=70 && per<80)  ? (strcpy(grade,"A")) : (aa=0);
	(per>=80) ? (strcpy(grade,"A-1")) : (aa=0);


	printf("\nYour Percentage is : %.2f, and Grade is: %s",per,grade);
	getch();



}