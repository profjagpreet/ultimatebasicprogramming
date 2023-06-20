/*PROGRAM TO SORT NAME OF CITIES IN ASSENDING ORDER*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[20][20],temp[20];
	int i,n,j;
	clrscr();
	printf("\nENTER NUMBER OF CITIES ");
	scanf("%d",&n);
	printf("\nENTRE THE NAMES OF CITIES\n");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(a[i]);
	}
	clrscr();
	printf("\nCITIES BEFORE SORTING\n");
	for(i=0;i<n;i++)
	puts(a[i]);
	printf("\n\nPRESS ENTER TO SORT CITIES ");
	getch();
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((strcmp(a[i],a[j]))>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}}
	}
	clrscr();
	printf("\nCITIES AFTRE SORTING ARE\n");
	for(i=0;i<n;i++)
	puts(a[i]);
	getch();
}
