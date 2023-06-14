/*PROGRAM TO FIND FACTORIAL OF A NUMBER BY USING RECURSION*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f;
	int fact(int i);
	clrscr();
	printf("ENTER A NUMBER ");
	scanf("%d",&n);
	f=fact(n);
	printf("\nFACTORIAL = %d",f);
	getch();
}

int fact(int i)
{
	if(i==1 || i==0)
	{
		return(1);
	}
	else
	{
		return(i*fact(i-1));
	}
}
