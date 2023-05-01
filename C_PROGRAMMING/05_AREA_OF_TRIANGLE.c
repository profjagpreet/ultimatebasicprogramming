//PROGRAM TO FIND AREA OF TRIANGLE USING HERONS FORMULAR
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float b,a,c,s,ar;
	clrscr();
	printf("\nENTER THREE SIDES OF TRIANGLE OF TRIANGLE ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nAREA OF TRIANGLE = %f",ar);
	getch();
}
