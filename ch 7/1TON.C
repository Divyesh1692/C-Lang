#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	i=1;
	clrscr();
	printf("enter number: ");
	scanf("%d",&n);
	while (i<=n)
	{
	printf(" %d ",i++);
	}
	getch();
}