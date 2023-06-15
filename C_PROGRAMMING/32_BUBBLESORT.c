/*PROGRAM TO SORT AN ARRAY USING BUBBLE SORT*/
#include<stdio.h>
#include<conio.h>
void main ()
{
	int a[10],i,n,j,t;
	clrscr ();
	printf ("ENTER NUMBER OF ELEMENTS ");
	scanf ("%d",&n);
	printf ("\nENTER ELEMENTS ");
	for (i=0;i<n;i++)
		scanf ("%d",&a[i]);
	for (i=1;i<n;i++)
	{
		for (j=0;j<(n-i);j=j+1)
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf ("\nSORTED ARRAY IS ");
	for (i=0;i<n;i++)
		printf ("%d ",a[i]);
	getch ();
}
