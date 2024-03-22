#include<stdio.h>
#include<conio.h>

void main()
{
	float u,b,t;
	clrscr();
	printf("enter units : ");
	scanf("%f",&u);

	if (u<=50)
		{ b = u*0.5; }
	else if (51<=u && u<=150)
		{ b = (u-50)*0.75 + (50*0.5) ; }
	else if (151<=u && u<=250)
		{ b = (u-150)*1.20 + (100*0.75)  + (50*0.5); }
	else { b = (u-250)*1.50 + (100*1.20) + (100*0.75)  + (50*0.5);}

	t = b+(b*20/100);
	printf("electricity bill is : %.2f",t);
	getch();

}