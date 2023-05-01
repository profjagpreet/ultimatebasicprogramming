//PROGRAM TO FIND AREA OF RECTANGLE
#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b,ar;
	clrscr();
	printf("\nENTER LENGTH AND BREADTH OF RECTANGLE ");
	scanf("%f%f",&l,&b);
	ar=l*b;
	printf("\nAREA OF RECTANGLE = %f",ar);
	getch();
}
