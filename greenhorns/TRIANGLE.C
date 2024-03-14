#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("first angle : \n");
	scanf("%d",&a);
	printf("second angle : \n");
	scanf("%d",&b);
	c=180-(a+b);
	printf("third angle : %d\n",c);
	getch();

}