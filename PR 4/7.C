#include<stdio.h>
#include<conio.h>

void main()

{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{       for(j=1;j<=5;j++)
		{ if((i<=5&&(j==1||j==5))||((i==3||i==1)&&(j==2||j==3||j==4)))
		       {  printf("*"); }
		  else { printf(" "); }
	}
	printf("\n");
	}
	getch();
}
