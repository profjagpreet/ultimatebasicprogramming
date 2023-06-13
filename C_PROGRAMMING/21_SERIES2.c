/*PROGRAM TO PRINT FOLLOWING SERIES USING FOR LOOP
1
12
123….*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	clrscr();
	printf("\nENTER NO. OF LINES ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d ",j);
		printf("\n");
	}
	getch();
}
