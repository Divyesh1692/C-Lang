#include<stdio.h>
#include<conio.h>

void main()
{
	char c;
	clrscr();
	printf("enter character : ");
	scanf("%c",&c);
	if ('a'<=c && c<='z'||'A'<=c && c<='Z')
	{ printf("\n%c is character",c);}
	else if(0<=c && c<=9)
	{ printf("%c is digit",c); }
	else { printf("%c is special character",c); }
	getch();

}