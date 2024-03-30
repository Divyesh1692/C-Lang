#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,sum=0;
	clrscr();
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{       sum=sum+i;
	}
	printf("sum of %d numbers : %d",n,sum);
	getch();
}