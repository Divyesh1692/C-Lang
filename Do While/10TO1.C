#include<stdio.h>
#include<conio.h>

void main()
{
	int i=10;
	clrscr();
	do
	{
	printf("%d ",i--);
	}
	while(i>=1);
	getch();
}