#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,x,y,z;
	clrscr();
	x=0,y=1;
	printf("enter number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d ",x);
	z=x+y;
	x=y;
	y=z;

	}
	getch();
}