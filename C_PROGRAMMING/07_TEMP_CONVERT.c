// PROGRAM TO CONVERT TEMPRATURE FROM CENTIGRADE TO FAHRENHEIT
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("\nENTER TEMPRATURE IN CENTIGRADE ");
	scanf("%f",&c);
	f=((c*9)/5)+32;
	printf("\n\nTEMPRATURE IN FAHRENHEIT = %f",f);
	getch();
}
