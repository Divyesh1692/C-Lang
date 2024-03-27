#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();
	printf("enter Year 1 and Year 2 \n");
	scanf("%d %d",&i,&n);
	do
	{
	   if(i%4==0){	printf("%d ",i);}
	   i++;
	}
	while(i<=n);
	getch();
}
