//PROGRAM TO PRINT FACTORIAL OF A NUMBER
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	float p=1;
	clrscr();
	printf("\nENTER A NUMBER ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	p=p*i;
	printf("\nFACTORIAL OF %d = %.0f",n,p);
	getch();
}
