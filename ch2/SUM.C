#include<stdio.h>
#include<conio.h>
void main()
{
	int a=12,b=6;
	int sum = a+b, sub= a-b, multi=a*b, div=a/b, mod=a%b;
	clrscr();
	printf("Addition of %d and %d is %d\n",a,b,sum);
	printf("Substraction of %d and %d is %d\n",a,b,sub);
	printf("Multiplication of %d and %d is %d\n",a,b,multi);
	printf("Division of %d and %d is %d\n",a,b,div);
	printf("Modulo of %d and %d is %d\n",a,b,mod);
	getch();

}
