#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("enter any number:");
	scanf("%d",&a);
	if(a>0)
	{	printf("%d is a positive",a);

	}
	else if (a<0)
		{
			printf("%d is negetive",a);
		}
	 else
	 {
	 printf("%d is neutral",a);
	 }
	 getch();
}
