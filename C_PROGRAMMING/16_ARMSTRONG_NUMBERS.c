//PROGRAM TO PRINT ARMSTRONG NUMBERS BETWEEN 1 TO 1000
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,sum=0,r;
	clrscr();
	printf("ARMSTRONG NUMBERS BETWEEN 1 AND 1000 ARE\n");
	for(i=2;i<=999;i++)
	{
		sum=0;
		j=i;
		while(j!=0)
		{
			r=j%10;
			j=j/10;
			sum=sum+(r*r*r);
		}
		if(sum==i)
		printf("%d\n",i);
	}
	getch();

}
