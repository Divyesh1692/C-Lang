#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("enter first number a : ");
	scanf("%d",&a);
	printf("\nenter second number b : ");
	scanf("%d",&b);
	if(a>b)
	{
	printf("\nthe minimum value is b : %d",b);
	}
	else
	{
	printf("\nthe minimum value is a : %d",a);
	}
	getch();
}