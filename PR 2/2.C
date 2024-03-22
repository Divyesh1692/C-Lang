#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("enter any number : ");
	scanf("%d",&a);
	(a%2==0) ? printf("%d is even") : printf("%d is odd");
	getch();

}