//PROGRAM TO PRINT FIRST N TABLES
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,l,i,j;
	clrscr();
	printf("ENTER NUMBER UPTO WHICH U WANT TO PRINT TABLE ");
	scanf("%d",&n);
	printf("\nENTER LIMIT FOR EACH TABLE ");
	scanf("%d",&l);
	clrscr();
	for(i=1;i<=n;i++)
	{
		printf("TABLE OF %d\n",i);
		for(j=1;j<=l;j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n\n");
	}
	getch();
}
