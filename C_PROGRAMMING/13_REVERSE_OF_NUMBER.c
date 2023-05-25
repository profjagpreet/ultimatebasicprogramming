//PROGRAM TO FIND REVERSE OF A NUMBER
#include<conio.h>
#include<stdio.h>
void main()
{
	int n,q,r,rev=0;
	clrscr();
	printf("\nENTER A NUMBER "  );
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		rev=(rev*10)+r;
	}
	printf("\n\nREVERSE OF NUMBER = %d",rev);
	getch();
}
