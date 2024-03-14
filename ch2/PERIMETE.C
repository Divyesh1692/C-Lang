#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
	float p, r;
	printf("Input Radius Of A Circle\n");
	scanf("%f",&r);
	p = 2*pi*r;
	printf("Perimeter Of A Circle = %.2f",p);
	getch();

}