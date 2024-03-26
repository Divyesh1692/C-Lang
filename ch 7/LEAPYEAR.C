#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter two number \n");
	scanf("%d %d",&i,&n);
	while(i<=n)
		{
			if(i%4==0) { printf(" %d ",i); }
			i++;
		}
	getch();
}









