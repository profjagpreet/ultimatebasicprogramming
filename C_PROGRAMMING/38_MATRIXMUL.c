/*PROGRAM TO MULTIPLY TWO MATRICES*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2,k;
	clrscr();
	printf("\nENTER ORDER OF FIRST MATRIX ");
	scanf("%d%d",&r1,&c1);
	printf("\nENTER ORDER OF SECOND MATRIX ");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("\nMULTIPLICATIN IS NOT POSSIBLE ");
	}
	else
	{
		printf("\nENTER ELEMENTS OF FIRST MARTIX ");
		for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		scanf("%d",&a[i][j]);
		printf("\nENTER ELEMENTS OF SECOND MATRIX ");
		for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
		scanf("%d",&b[i][j]);
		clrscr();
		printf("\nFIRST MATRIX IS\n\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			printf("%d\t",a[i][j]);
			printf("\n");
		}
		printf("\n\nSECOND MATRIX IS\n\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			printf("%d\t",b[i][j]);
			printf("\n");
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<r2;k++)
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
		printf("\n\nMULTIPLICATION OF TWO MATRICES IS\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			printf("%d\t",c[i][j]);
			printf("\n");
		}
	}
	getch();
}
