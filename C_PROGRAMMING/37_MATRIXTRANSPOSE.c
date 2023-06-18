/*PROGRAM TO FIND TRANSPOSE OF MATRIX*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],r,c,i,j;
	clrscr();
	printf("ENTER ORDER OF MATRIX ");
	scanf("%d%d",&r,&c);
	printf("\nENTER ELEMENTS OF FIRST MATRIX ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nTRANSPOSE OF MATRIX IS \n\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf(" %d ",a[j][i]);
		}
		printf("\n");
	}
	getch();
}
