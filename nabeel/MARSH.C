#include<stdio.h>
#include<conio.h>
void main(void)

{
	char n[20], fn[20], mn[20], g[10], dob[10], rel[20], pb[10];
	clrscr();
	printf("enter child detail for birth certificate ");
	printf("\nEnter Child Name:? ");
	gets(n);
	printf("\nEnter Father Name:? ");
	gets(fn);
	printf("\nEnter Mother Name:? ");
	gets(mn);
	printf("\nEnter Gender Name:? ");
	gets(g);
	printf("\nEnter Date of Birth Name:? ");
	gets(dob);
	printf("\nEnter Religion Name:? ");
	gets(rel);
	printf("\nEnter Place of Birth Name:? ");
	gets(pb);
	clrscr();
	printf("name = %s",n);
	printf("\nfather name = %s",fn);
	printf("\nmother name = %s",mn);
	printf("\ngender = %s",g);
	printf("\ndate of birth = %s",dob);
	printf("\nreligion = %s",rel);
	printf("\nplace of birth = %s",pb);
	getch();





}