/*PROGRAM TO FIND WEATHER THE STRING IS PALINDRON OR NOT*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[20],b[20];
	int i,len;
	clrscr();
	printf("ENTER A STRING ");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		b[i]=a[len-i-1];
	}
	b[len]='\0';
	if(strcmp(a,b)==0)
	printf("\nSTRING IS PALINDRON ");
	else
	printf("\nSTRING IS NOT PAINDRON ");
	getch();
}
