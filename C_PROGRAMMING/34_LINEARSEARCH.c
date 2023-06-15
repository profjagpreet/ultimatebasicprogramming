/*PROGRAM OF LINEAR SEARCH*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	int a[10],i,n,p;
	clrscr();
	printf("ENTER NUMBER OF ELEMENTS ");
	scanf("%d",&n);
	printf("\nENTER ELEMENTS ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nENTER ITEM ");
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		if(a[i]==p)
		{
			printf("\nITEM FOUND AT LOCATION %d",i+1);
			getch();
			exit(0);
		}
	}
	printf("\nITEM NOT FOUND ");
	getch();
}
