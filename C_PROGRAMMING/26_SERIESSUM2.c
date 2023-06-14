//PROGRAM TO PRINT SUM OF SERIES 1+3+5+7......N
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("\nENTER THE NUMBER ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		sum=sum+i;
	}
	printf("\nSUM = %d",sum);
	getch();
}
