//PROGRAM TO FIND POSITION AND LOCATION OF DIGIT IN A NUMBER
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	int n,r,q,d,count=0,loc=0,temp;
	clrscr();
	printf("\nENTER ANY NUMBER ");
	scanf("%d",&n);
	temp=n;
	printf("\nENTER ANY DIGIT ");
	scanf("%d",&d);
	if(d/10!=0 || d<0)
	{
		printf("\nWRONG INPUT");
		getch();
		exit(0);
	}
	else
	{
		while(n!=0)
		{
			r=n%10;
			loc=loc+1;
			if(r==d)
			{
				count=loc;
			}
			n=n/10;
		}
		if (count==0)
		printf("\nTHE DIGIT %d NOT PRESENT IN THE NUMBER %d",d,temp);
		else
		{
			loc=loc-count+1;
			printf("\nLOCATION OF DIGIT %d IN %d = %d",d,temp,loc);
		}
	}
	getch();
}
