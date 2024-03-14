#include<stdio.h>
#include<conio.h>

void main()
{
	int h,d,t,g,b;
	h=10,d=5,t=8;
	clrscr();
	printf("enter base salary\n");
	scanf("%d",&b);
	g=b+(b*h/100)+(b*d/100)+(b*t/100);
	printf("gross salary is : %d",g);
	getch();

}