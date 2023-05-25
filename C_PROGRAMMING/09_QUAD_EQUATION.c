//PROGRAM TO FIND ROOTS OF A QUADRATIC EQUATION
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
{
	float a,b,c,d,x1,x2;
	clrscr();
	printf("\nENTER COFF OF X SQUARE ");
	scanf("%f",&a);
	printf("\nENTER COFF OF X  ");
	scanf("%f",&b);
	printf("\nENTER CONSTANT ");
	scanf("%f",&c);
	if(a==0)
	{
		if (b==0)
		{
			printf("\nNOT POSSIBLE");
		}
		else
		{
			printf("\nTHE EQUATION IS LINEAR");
		}
		getch();
		exit(0);
	}
	else
	{
		d=(b*b)-(4*a*c);
		if (d<0)
		{
			printf("\nROOTS ARE IMAGINARY");
			getch();
			exit(0);
		}
		else if(d==0)
		{
			printf("\nTHE ROOTS ARE REAL AND EQUAL");
			x1=(((-1)*b)+(sqrt(d)))/(2*a);
			printf("\n\nTHE ROOT IS %f ",x1);
		}
		else
		{
			printf("\nTHE ROOTS ARE REAL AND DIFFERENT");
			x1=(((-1)*b)+(sqrt(d)))/(2*a);
			x2=(((-1)*b)-(sqrt(d)))/(2*a);
			printf("\n\nROOTS OF THE EQUATION ARE %f AND %f ",x1,x2);
		}
	}
	getch();
}
