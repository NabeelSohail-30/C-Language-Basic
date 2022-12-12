#include<stdio.h>
#include<conio.h>
void main(void)
{
	long int a;
	char b;
	long float c;
	long double d;
	long long f;
	clrscr();
	printf("\nthe size of integer is = %d",sizeof(a));
	printf("\nthe size of charachter is = %d",sizeof(b));
	printf("\nthe size of float is = %d",sizeof(c));
	printf("\nthe size of double is = %d",sizeof(d));
	printf("\nthe size of long is = %d",sizeof(f));
	getch();

}