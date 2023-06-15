/*PROGRAM TO INSERT AN ELEMENT IN THE ARRAY AT THE GIVEN LOCATION*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	int a[11],i,n,p,j;
	clrscr();
	printf("ENTER NUMBER OF ELEMENTS ");
	scanf("%d",&n);
	printf("\nENTER ELEMENTS ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nENTER ELEMENTS TO BE INSERTED ");
	scanf("%d",&j);
	printf("\nENTER PLACE WHERE YOU WANT TO INSERT THE ELEMENT ");
	scanf("%d",&p);
	if(p>n)
	{
		printf("\nLOCATION DOESN'T EXIST ");
		getch();
		exit(0);
	}
	for(i=n;i>=p-1;i--)
	{
		a[i]=a[i-1];
	}
	a[p-1]=j;
	n=n+1;
	printf("\nAFTER INSERTION THE ARRAY IS ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
