/*PROGRAM TO SORT AN ARRAY USING SELECTION SORT*/
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
	for (i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	printf ("\nSORTED ARRAY IS ");
	for (i=0;i<n;i++)
		printf ("%d ",a[i]);
	getch ();
}
