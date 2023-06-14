//PROGRAM TO PRINT FIBONACCI SERIES OF N NUMBERS
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main(){
	int a,b,c,n,i;
	clrscr();
	printf("\nENTER FIRST TWO ELEMENTS OF THE SERIES ");
	scanf("%d%d",&a,&b);
	printf("\nENTER NUMBER OF ELEMENTS IN THE SERIES ");
	scanf("%d",&n);
	if(n<=0){
		printf("\nWRONG INPUT");
		getch();
		exit(0);}
	else{
		printf("\n\nTHE REQUIRED FIBONACCI SERIES IS\n\n");
		if(n==1)
		printf("%d",a);
		else if(n==2)
		printf("%d %d",a,b);
		else{
			printf("%d %d ",a,b);
			for(i=3;i<=n;i++){
				c=a+b;
				printf("%d ",c);
				a=b;
				b=c;}}}
	getch();

}
