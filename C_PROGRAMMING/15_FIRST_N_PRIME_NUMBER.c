//PROGRAM TO PRINT N PRIME NUMBERS
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,flag,count=0;
	clrscr();
	printf("\nENTER LIMIT ");
	scanf("%d",&n);
	printf("\n\nFIRST %d PRIME NUMBERS ARE\n\n",n);
	for(i=2;count<n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0){
		printf("%d ",i);
		count++;
	}
	}
	getch();
}
