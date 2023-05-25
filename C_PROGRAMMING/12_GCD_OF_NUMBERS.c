//PROGRAM TO FIND GCD OF TWO NUMBERS
#include<stdio.h>
#include<conio.h>#include<process.h>
void main()
{
	int a,b,ds,dd,r;
	clrscr();
	printf("\ENTER TWO NUMBERS ");
	scanf("%d%d",&a,&b);
	if(a==0 && b==0)
	{
		printf("\nNOT DEFINED");
		getch();
		exit(0);
	}
	else
	{
		if(a<b)
		{
			ds=a;
			dd=b;
		}
		else
		{
			ds=b;
			dd=a;
		}
	while(ds!=0)
	{
		r=dd%ds;
		dd=ds;
		ds=r;
	}
		printf("\nGCD OF %d AND %d = %d",a,b,dd);
	}


	getch();
}
