#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,rem,rev=0;
	clrscr();
	printf("enter n1 : ");
	scanf("%d",&n1);
	n2=n1;
	while(n1!=0)
	{ rem = n1%10;
	  rev = rev*10 + rem;
	  n1=n1/10;
	}
	if(n2==rev)
	{	printf("number is palindrom");
	}
	else
	{	printf("number is not palindrom");
	}
	getch();
}