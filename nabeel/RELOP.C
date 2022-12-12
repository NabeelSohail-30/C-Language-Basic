#include<stdio.h>
#include<conio.h>
void main(void)
{
      int a=1, b=5, c=10;
      int ans;
      clrscr();
      printf("a > b = %d",a > b);
      printf("\na < b = %d",a<b);
      printf("\na >= c = %d",a>=c);
      printf("\na <= b = %d",a<=b);
      printf("\na = c = %d",a==c);
      ans = a>b;
      ans = !ans;
      printf("\na not equal to b = %d",a!=b);
      printf("\n Value of ans = %d",ans);
      printf("\na>b && b<c =%d",(a>b)&&(b<c));
      printf("\na>b || b<c =%d",(a>b)||(b<c));
      getch();


}