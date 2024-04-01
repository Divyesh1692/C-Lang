#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	c='a';
	clrscr();
	do
	{	printf("%c ",c);
		c=c+4;
	}
	while(c>='a' && c<='z');
	getch();

}