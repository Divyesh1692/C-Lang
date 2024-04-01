#include<stdio.h>
#include<conio.h>
void main()
{
	int f,l,n,s;
	clrscr();
	printf("enter number : ");
	scanf("%d",&n);
	l=n%10;
	while(n>9)
	{       f=n/10;
		n=n/10;
	}
	s=f+l;
	printf("sum of first and last digit is : %d",s);
	getch();
}