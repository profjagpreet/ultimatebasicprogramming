//PROGRAM TO PRINT SUM OF SERIES 1+2+3+4......N
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("\nENTER THE LIMIT ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("\nSUM = %d",sum);
	getch();
}
