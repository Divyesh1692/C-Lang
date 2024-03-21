#include<stdio.h>
#include<conio.h>
#define p printf

void main()
{
	int n;
	clrscr();
	p("press 1 for english\n");
	p("press 2 for hindi\n");
	p("press 3 for gujrati\n");
	p("\nenter your choice\n");
	scanf("%d",&n);
	switch (n)
	{ case 1 : clrscr();
		   p("press 1 for internet recharge\n");
		   p("press 2 for top-up recharge\n");
		   p("press 3 for special recharge\n");
		   p("\nenter your choice\n");
		   scanf("%d",&n);
		   switch (n)
		   { case 1 : clrscr();
			      p("you have successfully done internet recharge\n");
			      break;

		     case 2 : clrscr();
			      p("you have successfully done top-up recharge\n");
			      break;

		     case 3 : clrscr();
			      p("you have successfully done special recharge\n");
			      break;
		     default :clrscr();
			      p("please enter valid choice\n");
		    }
		    break;
	  case 2 : clrscr();
		   p("internet recharge ke liye 1 dabaiye\n");
		   p("top-up recharge ke liye 2 dabaiye\n");
		   p("special recharge ke liye 3 dabaiye\n");
		   p("\naapka manpasand vikalp darj kijiye\n");
		   scanf("%d",&n);
		   switch (n)
		   { case 1 : clrscr();
			      p("aapne safaltapurvak internet recharge kar liya he\n");
			      break;

		     case 2 : clrscr();
			      p("aapne safaltapurvak top-up recharge kar liya he\n");
			      break;

		     case 3 : clrscr();
			      p("aapne safaltapurvak special recharge kar liya he\n");
			      break;
		     default :clrscr();
			      p("krupiya uchit vikalp darj kare\n");
		    }
		    break;
	  case 3 : clrscr();
		   p("internet recharge mate 1 dabavo\n");
		   p("top-up recharge mate 2 dabavo\n");
		   p("special recharge mate 3 dabavo\n");
		   p("\ntamaro manpasand vikalp darj karo\n");
		   scanf("%d",&n);
		   switch (n)
		   { case 1 : clrscr();
			      p("tame safaltapurvak internet recharge karyu chhe.\n");
			      break;

		     case 2 : clrscr();
			      p("tame safaltapurvak top-up recharge karyu chhe.\n");
			      break;

		     case 3 : clrscr();
			      p("tame safaltapurvak special recharge karyu chhe.\n");
			      break;
		     default :clrscr();
			      p("krupiya uchit vikalp darj karo\n");
		    }
		    break;
	  default : clrscr();
		    p("Please enter valid choice\n");
	  }
	  getch();
}










