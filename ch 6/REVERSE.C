#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rem,rev=0;
	clrscr();
	printf("enter n : ");
	scanf("%d",&n);
	while(n!=0)
	{ rem = n%10;          // 123 % 10 = 3 ,     12 % 10 = 2      1%10=0
	  rev = rev*10 + rem;  // 0 = 0*10 + 3,      3 = 3*10+2       32 = 32*10+1
	  n=n/10;              // 123/10 = 12.3 =12, 12/10 = 1.2 = 1  1/10 = 0.1 = 0
	}
	printf("%d",rev);
	getch();
}