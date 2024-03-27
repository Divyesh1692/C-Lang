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
	   if(n%2==1){	printf("%d ",n);}
	   n--;
	}
	while(n>=i);
	getch();
}

