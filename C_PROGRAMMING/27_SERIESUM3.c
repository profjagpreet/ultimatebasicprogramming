//PROGRAM TO PRINT SUM OF SERIES  +x^2/2i+x^4/4+…+x^n/n.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,n,i,j;
	float sum=0;
	clrscr();
	printf("\nENTER THE VALUE OF X ");
	scanf("%d",&x);
	printf("\nENTER NUMBER OF TERMS ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	if(i==0)
	sum=sum+x;
	else
	sum=sum+(pow(x,2*i)/(2*i));
	printf("\nSUM = %f",sum);
	getch();
}
