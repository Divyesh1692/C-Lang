#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	clrscr();
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d\t= %d\n",n,i,n*i);
	}
	getch();
}
