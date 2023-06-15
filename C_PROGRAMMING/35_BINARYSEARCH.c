/*PROGRAM TO SEARCH AN ELEMENT IN THE ARRAY BY USING BINARY SEARCH*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int beg,end,mid,n,a[10],item,i;
	clrscr();
	printf("ENTER NUMBER OF ELEMENTS ");
	scanf("%d",&n);
	printf("\nENTER SORTED ARRAY ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nENTER ELEMENT TO BE SEARCHED ");
	scanf("%d",&item);
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while(beg<=end && a[mid]!=item)
	{
		if(item<a[mid])
		end=mid-1;
		else
		beg=mid+1;
		mid=(beg+end)/2;
	}
	if(item==a[mid])
	{
		printf("\nITEM IS PRESENT IN THE ARRAY");
	}
	else
	{
		printf("\nITEM IS NOT PRESENT IN THE ARRAY");
	}
	getch();
}
 
