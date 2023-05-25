// PROGRAM TO FIND SIMPLE AND COMPOUND INTEREST
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
     float p,r,si,ci;
     int t;
     clrscr();
     printf("\nENTER PRINCIPAL ");
     scanf("%f",&p);
     printf("\nENTER RATE ");
     scanf("%f",&r);
     printf("\nENTER TIME ");
     scanf("%d",&t);
     si=(p*r*t)/100;
     printf("\n\nSIMPLE INTEREST = %.2f",si);
     ci=p*((pow((1+(r/100)),t))-1);
     printf("\n\nCOMPOUND INTEREST = %.2f",ci);
     getch();
}
