#include<stdio.h>
#include<conio.h>

void main()
{
	char c;
	clrscr();
	printf("enter value : ");
	scanf("%c",&c);

	switch(c)
	{ case 'M': printf("\nMonday");
		    break;
	  case 'T': printf("\nTuesday");
		    break;
	  case 'W': printf("\nWednesday");
		    break;
	  case 't': printf("\nThursday");
		    break;
	  case 'F': printf("\nFriday");
		    break;
	  case 'S': printf("\nSaturday");
		    break;
	  case 's': printf("\nSunday");
		    break;
	  default : printf("\nenter valid value!!!");
	  }
	 getch();
 }