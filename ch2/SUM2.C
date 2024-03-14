#include<stdio.h>
#include<conio.h>
void main()
{
	int a=12,b=6;
	int sum = a+b, sub= a-b, multi=a*b, div=a/b, mod=a%b;
	clrscr();
	printf("%d+%d=%d\n",a,b,sum);
	printf("%d-%d=%d\n",a,b,sub);
	printf("%d*%d=%d\n",a,b,multi);
	printf("%d/%d=%d\n",a,b,div);
	printf("%d%%%d=%d\n",a,b,mod);
	getch();

}
