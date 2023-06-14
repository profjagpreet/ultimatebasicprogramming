//PROGRAM TO PRINT FIBONACCI SERIES USING RECURSION
#include<stdio.h>
#include<conio.h>
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return (fib(n-1)+fib(n-2));
}
void main()
{
	int n,i,x;
	clrscr();
	printf("ENTER NUMBER OF ELEMENTS IN SERIES ");
	scanf("%d",&n);
	printf("\n\nTHE REQUIRED FIBONACI SERIES IS\n\n");
	for(i=0;i<n;i++)
	{
		x=fib(i);
		printf("%d ",x);
	}
	getch();
}
