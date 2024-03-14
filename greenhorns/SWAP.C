#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("enter first number a: ");
	scanf("%d",&a);
	printf("\n enter second number b: ");
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\n after swapping a=%d and b=%d\n",a,b);
	getch();

}