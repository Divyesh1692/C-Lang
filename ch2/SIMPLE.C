#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,t,i;
	clrscr();
	printf("Enter Principal Amount\n");
	scanf("%f",&p);
	printf("Enter Rate Of Insterest\n");
	scanf("%f",&r);
	printf("Enter Time\n");
	scanf("%f",&t);
	i=(p*r*t)/100;
	printf("Simple Interest is %.2f",i);
	getch();

}