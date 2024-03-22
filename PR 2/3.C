#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	clrscr();
	printf("enter four numbers : ");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a>b)
	      {
	      if(a>c)
		     {
		     if(a>d) {printf("%d is max",a);}
		     else {printf("%d is max",d);}
		     }
	       else
		  {
		  if(c>d){printf("%d is max",c);}
		  else {printf("%d is max",d);}
		  }
	      }
	else
	    {
	    if(b>c)
		   {
		   if(b>d) {printf("%d is max",b);}
		   else {printf("%d is max",d);}
		   }
	    else
		{
		if(c>d) {printf("%d is max",c);}
		else {printf("%d is max",d);}
		}
	    }

	getch();

}