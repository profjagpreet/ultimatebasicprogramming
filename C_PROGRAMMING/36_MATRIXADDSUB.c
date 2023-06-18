/*PROGRAM TO ADD AND SUBTRACT TWO MATRICES*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],ad[10][10],sb[10][10],i,j,r,c;
	clrscr();
	printf("\nENTER ORDER OF TWO MATRICES ");
	scanf("%d%d",&r,&c);
	printf("\nENTER ELEMENTS OF FIRST MARTIX ");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	printf("\nENTER ELEMENTS OF SECOND MATRIX ");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&b[i][j]);
	clrscr();
	printf("\nFIRST MATRIX IS\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("\n\nSECOND MATRIX IS\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ad[i][j]=a[i][j]+b[i][j];
			sb[i][j]=a[i][j]-b[i][j];
		}
	}
	getch();
	clrscr();
	printf("\n\nADDITION OF MATRICES IS\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",ad[i][j]);
		printf("\n");
	}
	printf("\n\nSUBSTRACTION OF MATRICES IS\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",sb[i][j]);
		printf("\n");
	}

	getch();
}
