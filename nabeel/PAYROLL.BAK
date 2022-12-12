
#include<stdio.h>
#include<conio.h>
void main (void)
{
      float b;
      float m,h,g,t,p;
      char n[20], r[10];

      /*
      char myname[20]="Nabeel";
      Function strcpy() will be used to assign string values
	 e.g = strcpy(myname,"Sohail")
	       strcpy(myname,n);
      */

      clrscr();
      printf("\n enter employee name = ");
      scanf("%s",&n);
      printf("\n enter basic pay = ");
      scanf("%f",&b);

      printf("\n employee name = %s",n);
      printf("\n basic pay = %.2f",b);

      m = (b*12)/100 ;

      printf("\n medical allowance = %.2f",m);

      h = (b*40)/100 ;
      printf("\n house rent = %f",h);

      g = (b+m+h) ;
      printf("\n gross pay = %f",g);



      if(g > 15000)
      {
	t = (g*4)/100;
      }
      else
      {
	t = (g*3)/100;
      }
      printf("\n tax = %f",t);


      p = (g - t);
      printf("\n net pay = %f",p);

      if(p > 15000)
      {
	strcpy(r,"GRADE-1");
      }
      else
      {
	strcpy(r,"GRADE-2");
      }
      printf("\n grade = %s",r);

      getch();
}