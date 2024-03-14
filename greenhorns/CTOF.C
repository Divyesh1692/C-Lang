#include<stdio.h>
#include<conio.h>
void main ()
{
	float c,f;
	clrscr();
	printf("Temperature In Celcius:\n");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("Temperature in Fahrenhit:%.2f",f);
	getch();
}