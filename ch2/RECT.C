#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b,a;
	clrscr();
	printf("Enter Length=");
	scanf("%f",&l);
	printf("Enter Breadth=");
	scanf("%f",&b);
	a=l*b;
	printf("Area Of Rectangle Is = %.2f",a);
	getch();

}