//PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nENTER VALUE OF A AND B ");
	scanf("%d%d",&a,&b);
	printf("\n\nBEFORE SWAPPING");
	printf("\nA = %d \nB = %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\nAFTER SWAPPING");
	printf("\nA = %d \nB = %d",a,b);
	getch();
}
