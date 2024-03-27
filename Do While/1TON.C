#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	i=1;
	clrscr();
	printf("enter number: ");
	scanf("%d",&n);
	do
	{
	printf("%d ",i++);
	}
	while(i<=n);
	getch();
}