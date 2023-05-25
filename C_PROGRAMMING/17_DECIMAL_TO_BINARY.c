//PROGRAM TO CONVERT DECIMAL TO BINARY,OCTAL OR HEXADECIMAL
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,choice,i,a[50],count,temp;
	char conti='y';
	while(conti=='y' || conti=='Y')
	{
		clrscr();
		count=0;
		printf("\nENTER ANY NUMBER ");
		scanf("%d",&n);
		temp=n;
		printf("\n\nPRESS 1 TO CONVERT INTO BINARY");
		printf("\nPRESS 2 TO CONVERT INTO OCTAL");
		printf("\nPRESS 3 TO CONVERT INTO HEXADECIMAL");
		printf("\nPRESS 4 TO EXIT ");
		printf("\n\nEnter your choice.... ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				while(temp!=0)
				{
					r=temp%2;
					temp=temp/2;
					a[count]=r;
					count++;
				}
				printf("\nBINARY OF %d = ",n);
				for(i=count-1;i>=0;i--)
				printf("%d",a[i]);
				break;
			case 2:
				while(temp!=0)
				{
					r=temp%8;
					temp=temp/8;
					a[count]=r;
					count++;
				}
				printf("\nOCTAL OF %d = ",n);
				for(i=count-1;i>=0;i--)
				printf("%d",a[i]);
				break;
			case 3:
				while(temp!=0)
				{
					r=temp%16;
					temp=temp/16;
					a[count]=r;
					count++;
				}
				printf("\nHEXA DECIMAL OF %d = ",n);
				for(i=count-1;i>=0;i--)
				{
					if(a[i]==10)
					printf("A");
					else if(a[i]==11)
					printf("B");
					else if(a[i]==12)
					printf("C");
					else if(a[i]==13)
					printf("D");
					else if(a[i]==14)
					printf("E");
					else if(a[i]==15)
					printf("F");
					else
					printf("%d",a[i]);
				}
				break;
			case 4:
			exit(0);
			default:
			printf("\nWRONG INPUT");
		}
		printf("\n\nDo u want to continue......(y/n)? ");
		fflush(stdin);
		scanf("%c",&conti);
	}
}

