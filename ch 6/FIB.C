#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,x=0,y=1,z;
	clrscr();
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  	printf("%d ",x);
		z=x+y;
		x=y;
		y=z;
	}
	getch();
}