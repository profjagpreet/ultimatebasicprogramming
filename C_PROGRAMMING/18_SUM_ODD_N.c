//PROGRAM TO PRINT SUM OF ODD NUMBERS BETWEEN 10 TO 100 DIVISIBLE BY N
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("\nENTER THE NUMBER ");
	scanf("%d",&n);
	for(i=11;i<=99;i=i+2)
	{
		if(i%n==0)
		sum=sum+i;
	}
	printf("\nSUM OF ODD NUMBERS DIVISIBLE BY %d = %d",n,sum);
	getch();
}
