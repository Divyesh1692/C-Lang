#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("enter three numbers a b c : ");
	scanf("%d %d %d",&a,&b,&c);

	(a>b)
	     ? (a>c)
		    ? printf("%d is maximum",a)
		    : printf("%d is maximum",c)
	     : (b>c)
		    ? printf("%d is maximum",b)
		    : printf("%d is maximum",c);
	getch();

}