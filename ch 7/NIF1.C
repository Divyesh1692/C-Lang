#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("enter third number:");
	scanf("%d",&c);
	if (a==b)
		{
		printf("%d and %d are same",a,b);
		}
	else if(b==c)
		{
		printf("%d and %d are same",b,c);
		}
	else if(a==c)
		{
		printf("%d and %d are same",a,c);
		}
       else
       {
       if (a<b)
	{ if(a<c){printf("%d is min",a);}
	  else printf("%d is min",c);
	  }
       else {
	    if(b<c){printf("%d is min",b);}
	    else {printf("%d is min",c);}
	    }

       }
       getch();

}