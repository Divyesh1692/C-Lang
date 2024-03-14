#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
	float r, a;
	clrscr();
	printf("Input Radius Of A Circle= ");
	scanf("%f",&r);
	a=pi*r*r;
	printf("\nArea Of A Circle = %.2f\n",a);
	getch();

}